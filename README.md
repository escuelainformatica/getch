# getch

It is a simple executable for Windows x64 that wrappers the getch() and the kbhit() functions in C
* getch : wait until a key is pressed, and it returns is value as an ascii number.
* kbhit : it is the same as getch, but it doesn't wait until the key is pressed.
  * If not key, then it returns 0


## Usage:

Download the executable and runs in cmd.exe or PowerShell as follows

```shell
getch
```
and press any key to show its value

Or if you don't want to wait:

```shell
getch kbhit
```

