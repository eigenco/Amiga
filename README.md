[amigacontrol.ino]

SAMD21 (Arduino Zero) program to use wireless USB keyboard/mouse combo as Amiga 500 keyboard, mouse and joystick. Tested with Logitech MK270. Rudimentary implementation that could be easily improved. Mouse movement implementation is a bit "digital" and could use more levels, left and right mouse buttons have been implemented. SAMD21 supports USB 2.0, but only up to full-speed (i.e. 12 Mbps). This is sufficient in most cases, but in case some dongle requires high speed (480 Mbps), it won't work.

https://youtu.be/nT8R8BuT8yk

All keys have been mapped somewhere, if your keyboard layout is different, the mapping is easy to change. The program starts with arrow keys mapped as joystick in which case the Amiga arrow keys are replaced by numpad. Joystick can be disabled by pressing F11 in which case arrow keys operate normally. F12 will reset the Amiga. Joystick button is mapped as key right next from left shift since there is no equivalent in Amiga 500 keyboard. Not sure the code is the same for all keyboards, but easy to change if not. Win-keys correspond to Amiga-keys. Delete and end keys correspond to del and help in Amiga keyboard. Page up and page down correspond to amiga numpad + and - (as the arrangement isn't equivalent with pc). Otherwise all keys should be roughly where you would expect to find them geometrically.

![Unt](https://github.com/eigenco/Amiga/assets/42321684/dc813a77-bf2f-4d22-bb02-a567d5d6f4f8)

![IMG20240424](https://github.com/eigenco/Amiga/assets/42321684/3bb8d6fa-41ff-4163-81f1-f5ec63cb66f5)
