//
// Created by smartfly on 2020/7/15.
//
#include <stdio.h>
static int foo_ifelse(char c) {
    if (c == '0' || c == '1') {
        c += 1;
    } else if (c == 'a' || c == 'b') {
        c += 2;
    } else if (c == 'A' || c == 'B') {
        c += 3;
    } else {
        c += 4;
    }

    return c;
}

static int foo_switch(char c) {
    switch (c) {
        case '1':
        case '0': {
            c += 1;
            break;
        }
        case 'b':
        case 'a': {
            c += 2;
            break;
        }
        case 'B':
        case 'A': {
            c += 3;
            break;
        }
        default: {
            c += 4;
            break;
        }

    }
    return c;
}

int main() {
    int m1 = foo_ifelse('0');
    int m2 = foo_ifelse('1');
    int n1 = foo_switch('a');
    int n2 = foo_switch('b');
    (void) printf("%c %c %c %c\n", m1, m2, n1, n2);
    return 0;
}