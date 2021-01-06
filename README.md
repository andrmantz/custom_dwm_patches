# Custom DWM Patches
This repo holds some simple dwm patches/functions I wrote and keep using on daily basis. Feel free to use/modify anyof them.


## Patches
### [Focus Empty Tag](https://github.com/andrmantz/custom_dwm_patches/tree/main/focusEmptyTag)
Adds keybinding to change focused to the first empty tag available or move focused client to that.

### [Focus Used Tag](https://github.com/andrmantz/custom_dwm_patches/tree/main/focusUsedTag)
Adds keybindings to shift view to the next or previous available tag.

### [Find Active App](https://github.com/andrmantz/custom_dwm_patches/tree/main/FindClient)
Adds keybinding to shift view to the tag the **App** is active. Currently there are 2 Versions:
* **Standard Version**: Search for the Application and if it is active, shift view to the corresponding tag.
* **Extended Version**: Same as **Standard Version**, but in case the app is not active, it opens it in a free tab and shift view to it.

## Installation
The main way to patch dwm is
* Download the .diff file in the dwm directory
* Run patch < **patch-name**.diff

Some patches may have conflicts. In that case, you have manually to copy and paste the code from .diff file to the lines stated.
