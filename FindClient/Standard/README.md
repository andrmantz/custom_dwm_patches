# FindClient
Add keybindings to search for an app and if it is opened, toggle view to that tag. By default, if there are more
than one copies of that app opened, it will shift the view to the newest.

## Keybindings
By default, the only keybinding is **MODKEY + s**, which finds the st terminal. To add more keybindings modify 
your config.h file, function name findclient and argument .v = "AppName".
Example to focus firefox browser with **MODKEY + o** :
```
{ MODKEY,    XK_o,    findclient,    {.v = "Firefox" }},
```
## Known Bugs
* In case of Browser windows with large names, it might not be able to locate it.

## Installation
You can either download the **focindclient.c** file, add to your config.h `#include "findclient.c""`,
and add the keybings manually or download the **dwm-findclient-20210103.diff**, place it
on your dwm directory and run `patch < dwm-findclient-20210103.diff`.
