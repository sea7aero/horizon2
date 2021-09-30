This package contains custom firmware for the "OLHZN Track" circuit board, obtained from the
[OLHZN Shop](https://www.overlookhorizon.com/product/olhzn-circuit-boards/).  This firmware is derived from the original
located at [here](https://github.com/OverlookHorizon/OLHZN_Track).

## Building

You will need to provide your own version of the file "include/private.h" which defines the following constants:

```
#define PRIVATE_CALLSIGN "YOUR_CALLSIGN_HERE"
```

## Formatting the SD Card

The SdFat library recommends that SD cards be formatted with the tools from https://www.sdcard.org/ using FAT32, cluster size 32.
