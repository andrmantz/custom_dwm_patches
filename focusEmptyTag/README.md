# Focus Empty Tag
Lets you shift the view or focused window to the first unused tag available.

## Arguments
Takes as argument an **Arg** Object and acts as follows:
* If the .i field is equal to +1, it shifts the view.
* If the .i field is equal to -1, it moves the focused window to that tag instad.

## Default Keybindings
* **MODKEY + x** Toggles view
* **MODKEY + Shift + x** Moves the client

## Installation
You can either download the **focusemptytag.c** file, add to your config.h `#include "focusemptytag.c""`,
and add the keybings by yourself or download the **dwm-focusempty-20201225.diff**, place it
on your dwm directory and run `patch < dwm-focusempty-20201225.diff`.
