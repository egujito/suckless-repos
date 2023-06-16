#!/bin/bash

picom --experimental-backends --backend xr_glx_hybrid --xrender-sync-fence --config ~/.config/picom/picom.conf &
feh --bg-scale ~/Pictures/wallpapers/roma.png
dwmblocks &
bash ~/gtkr.sh
sh ~/.screenlayout/display.sh

