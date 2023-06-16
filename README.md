# Suckless Software builds.

This repo contains my builds of:
- DWM - The suckless window manager
- DWMBlocks - Status bar and module scripts
- DMenu - For now, it is default

### DWM

A Very minimal build of dwm. Uses pywal colorscheme at [`colors-wal-dwm.h`](https://github.com/egujito/suckless-repos/blob/master/dwm/colors-wal-dwm.h), patched to remove Urgent color scheme.

***IMPORTANT***

Make sure you change everything in [`autostart.h`](https://github.com/egujito/suckless-repos/blob/master/dwm/autostart.sh) to fit your system

### DWMBLOCKS

Modules:

- [`pkgs`](https://github.com/egujito/suckless-repos/blob/master/dwmblocks/scripts/pkgs)
- [`ram`](https://github.com/egujito/suckless-repos/blob/master/dwmblocks/scripts/ram)
- [`battery`](https://github.com/egujito/suckless-repos/blob/master/dwmblocks/scripts/battery)
- [`time`](https://github.com/egujito/suckless-repos/blob/master/dwmblocks/scripts/time)
- [`date`](https://github.com/egujito/suckless-repos/blob/master/dwmblocks/scripts/date)

Adding a module:
Add it to this array in [`blocks.h`](https://github.com/egujito/suckless-repos/blob/master/dwmblocks/blocks.def.h#LL1C1-L8C3)
```C
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "~/path/to/script", -, -}
};
```
