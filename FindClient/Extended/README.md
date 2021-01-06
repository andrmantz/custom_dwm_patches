# Find Client Extended
Pretty much the same as the [Standard Version](https://github.com/andrmantz/custom_dwm_patches/tree/main/FindClient/Standard), but in case the app isn't running, it will launch it in a new tag and toggle
the view to that.

## Matches
In order to match the App name with the launch command, there is the Match struct along with the matches table.
```
typedef struct {
  char name[256];
  char app_name[256];
} Match;
```
Long story short, the app_name field corresponds to the name that appears on the status bar and the name
on the string you would write to launch the app through the terminal.

## Keybindings
The default keybindings are
* **MODKEY + s** for st terminal
* **MODKEY + o** for firefox

## Add Matches and Keybindings
To add a keybinding, you need to add a match first.
A new added keybind for Discord on MODKEY + d would look like:
```
static const Match matches[] = {
  /*   name               app_name  */
  {    "st",              "st"             },
  {  "firefox",           "Firefox"        },
+++  {  "discord",         "Discord"       },
};
```
```
static Key keys[] = {
  ......
  /* modifier     key         function            argument */
     {MODKEY,     XK_d,      findclient,     {.v = &matches[2]} },
}
```

## Installation
* If you already have the [Standard Version](https://github.com/andrmantz/custom_dwm_patches/tree/main/FindClient/Standard) installed, you have to download the 
[dwm-findclientV2-20210104.diff](https://github.com/andrmantz/custom_dwm_patches/edit/main/FindClient/Extended/dwm-findclientV2-20210104.diff) file and apply it via  the `patch < dwm-findclientV2-20210104.diff`
command.
<<<<<<< HEAD
* Otherwise, you can either download [dwm-findclientV2-20210104.diff]() file and apply it, or
download **findclients.c**, copy it to your dwm directory ,add `#include "findclients.c"` on the top
of your **config.h** file and create the Match array manually.
=======
* Otherwise, you can either download [dwm-findclientExtended-20210104.diff](https://github.com/andrmantz/custom_dwm_patches/edit/main/FindClient/Extended/dwm-findclientExtended-20210104.diff) file and apply it, or
download **findclients.c**, copy it to your dwm directory, add `#include "findclients.c"` on the top
of your **config.h** file and create the Match array manually.
