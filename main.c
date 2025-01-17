#include <stdio.h>
#include <string.h>
#include <conio.h>

int phpgetch() {
    int gc=getch();
    if (gc== 224 || gc==0) { // ESC
        return 0x1B00 + getch(); // ESC LINUX FORMAT.
    }
    return gc;
}

int phpkbhit() {
    if (kbhit()) {
        return phpgetch();
    }
    return 0;
}


int main(int argc, char *argv[]) {

    if (argc < 2) {
        int tmp = phpgetch();
        printf("%i", tmp);
        return tmp;
    }
    int res = strcmp(argv[1], "kbhit");
    if (res == 0) {
        int tmp = phpkbhit();
        printf("%i", tmp);
        return tmp;
    }
    int tmp = phpgetch();
    printf("%i", tmp);
    return tmp;
}
