#include <stdio.h>

extern int a;

void func() {
    printf("extern int a 값 ==> %d\n", a);           // 변수 값 출력
}