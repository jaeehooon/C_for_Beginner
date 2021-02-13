/**
 * Self Study 1 | mon: 1, tue: 2, ..., sum: 7을 의미하도록 함
 */
#include <stdio.h>

int main() {
    enum week {sun=1, mon, tue, wed, thu, fri, sat};

    enum week ww;

    ww = sat;

    if (ww == sun)
        printf("오늘은 일요일입니다.\n\n", ww);
    else
        printf("오늘은 일요일이 아닙니다.\n\n", ww);
}