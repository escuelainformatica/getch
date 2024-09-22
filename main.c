#include <stdio.h>
#include <string.h>
#include <conio.h>

int phpgetch() {
    return getch();
}

int phpkbhit() {
    if (kbhit()) {
        return getch();
    }
    return 0;
}


int main(int argc, char *argv[]) {

    if (argc < 2) {
        int tmp = phpgetch();
        printf("%i", tmp);
        return tmp;
    }
    int res = strcmp(argv[1], "getch");
    if (res == 0) {
        int tmp = phpgetch();
        printf("%i", tmp);
        return tmp;
    }
    int tmp = phpkbhit();
    printf("%i", tmp);
    return tmp;
}
