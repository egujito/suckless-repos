static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "~/.config/suckless/dwmblocks/scripts/pkgs", 0, 0},
    {"", "~/.config/suckless/dwmblocks/scripts/ram", 0, 0},
    {"", "~/.config/suckless/dwmblocks/scripts/battery", 0, 0},
    {"", "~/.config/suckless/dwmblocks/scripts/time", 0, 0},
    {"", "~/.config/suckless/dwmblocks/scripts/date", 0, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " / ";
static unsigned int delimLen = 5;
