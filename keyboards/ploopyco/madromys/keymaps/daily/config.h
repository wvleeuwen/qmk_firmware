#pragma once

// Invert scroll direction to match natural scrolling
#define PLOOPY_DRAGSCROLL_INVERT

// Scroll divisor — higher = slower. Default is 8.0
#define PLOOPY_DRAGSCROLL_DIVISOR_H 32.0
#define PLOOPY_DRAGSCROLL_DIVISOR_V 32.0

// Default to 1600 CPI (index 3 in the options array below)
#define PLOOPY_DPI_OPTIONS { 600, 900, 1200, 1600, 2400 }
#define PLOOPY_DPI_DEFAULT 2
