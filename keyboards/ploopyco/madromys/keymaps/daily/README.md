# Daily firmware

This keymap/firmware is called 'daily' as it represents the daily driver for the Ploopy Adept on my desk. It is as close to 'production' as you can get with this sort of thing.

## Compiling

Make sure `make git-submole` has run on the machine.

Run:
```bash
qmk compile -kb ploopyco/madromys/rev1_001 -km daily
```

## Flashing the device

(source: https://ploopyco.github.io/adept-trackball/appendices/programming/)

Putting the Ploopy device into bootloader mode

- Unplug it from your computer.
- Hold down the Bottom Left button on the Adept.
- Plug the Ploopy device into your computer.
- The computer should recognise that a mass storage device was just plugged in. Once this is done, you should be able to drag and drop files onto the Ploopy device, as if the board was a USB drive.

And that's it. While plugged in this way, the Ploopy device will accept new firmware.

If you want to upload a new firmware file (a ".uf2" file, like "ploopy_adept_v42069" or something), just drag it into the folder, and it'll automatically install on the Ploopy device and restart itself.

Whenever you want to put new firmware onto the Ploopy device, go through these steps again.

TIP: If your firmware is in some kind of strange state and uploading new firmware isn't fixing it, try uploading a flash nuke to the Adept before flashing the new firmware. It wipes the memory of the Adept completely clean, which can help clear a few types of errors.
Putting the Ploopy device into bootloader mode if it's bricked

Putting the Ploopy device into bootloader mode if it's bricked is a bit more involved, but still doable.

- Unplug it from your computer.
- Open it by removing the screws in the base and removing the top.
- Look for a pair of vias (gold-plated holes) on the board. You can see where they're located in this photo.
- Get a paper clip (non-insulated, i.e. no plastic shit covering it) or a pair of tweezers, or some wire. Whatever you've got on hand that's metal.
- Stick the paper clip or tweezers into the holes. You're trying to form an electrical connection between the two holes.
- While you've got the two vias connected with your metal bridge, plug the Ploopy device into your computer.
- The computer should recognise that a mass storage device was just plugged in. Once this is done, you should be able to drag and drop files onto the Ploopy device, as if the board was a USB drive. Feel free to remove the tweezers or paperclip at this point.

And that's it. While plugged in this way, the Ploopy device will accept new firmware.
