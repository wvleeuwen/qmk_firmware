#include QMK_KEYBOARD_H

extern bool is_drag_scroll;

void set_drag_scroll(bool active) {
    is_drag_scroll = active;
}

// SCROLL_TH: tap = toggle drag scroll, hold = momentary drag scroll.
// DRAG_SCROLL (keyboard-level keycode) is still available for use on
// any key or layer if you want simple toggle-only behavior.
enum custom_keycodes {
    SCROLL_TH = SAFE_RANGE,
};

static bool     scroll_toggled   = false;
static uint16_t scroll_key_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SCROLL_TH:
            if (record->event.pressed) {
                scroll_key_timer = record->event.time;
                set_drag_scroll(true);
            } else {
                if (TIMER_DIFF_16(record->event.time, scroll_key_timer) < TAPPING_TERM) {
                    scroll_toggled = !scroll_toggled;
                }

                if (!scroll_toggled) {
                    set_drag_scroll(false);
                }
            }

            return false;
    }

    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //                Top Left Left  Top Left  Top Right    Top Right Right  Bottom Left  Bottom Right
    [0] = LAYOUT(     MS_BTN4,       MS_BTN5,  SCROLL_TH,  MS_BTN2,         MS_BTN1,     MS_BTN3     )
};
