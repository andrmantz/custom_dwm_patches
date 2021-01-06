# Focus Used Tag
Adds keybindings to shift view to the next or previous used tag. 
Because I use the [hide_vacant_tags](https://dwm.suckless.org/patches/hide_vacant_tags/) patch,
I usually get lost between which tag belongs to which number, so made this function to move around easily.

## Arguments
Takes as argument an **Arg** Object and acts as follows:
* If the .i field is equal to +1, shifts the view to the first used tag on the right.
* If the .i field is equal to -1, shifts the view to the first used tag on the left.

## Default Keybindings
* **MODKEY + Shift + k** View used tag to the right side
* **MODKEY + Shift + j** View used tag to the left side 

## Installation
You can either download the **focususedtag.c** file, add to your config.h `#include "focususedtag.c""`,
and add the keybings manually or download the **dwm-focususedtag-20201223.diff**, place it
on your dwm directory and run `patch < dwm-focususedtag-20201223.diff`.
