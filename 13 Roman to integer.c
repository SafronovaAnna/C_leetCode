#include<stdio.h>
int value(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}
int romanToInt(char * s){
    int ret=0;
    char *n;
    int m=0;
    while ( value(*s) != 0 ) {
        n = s+1;
        m = 1;
        if (value(*n) != 0) {
            if (value(*s) < value(*n)) {
                m = -1;
            }
        }
        ret = ret + value(*s)*m;
        s++;
    }
    return ret;
}

