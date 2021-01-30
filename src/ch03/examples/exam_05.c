/**
 * 예제모음 05 | 입력하는 정수의 진수 결정
 */
#include <stdio.h>

int main() {
    int choice, data;

    printf("입력진수 결정 <1> 10, <2> 16, <3> 8 : ");
    scanf("%d", &choice);               // 진수 결정

    printf("값 입력 : ");
    if (choice == 1) {
        scanf("%d", &data);
    }
    else if (choice == 2) {
        scanf("%x", &data);
    }
    else if (choice == 3) {
        scanf("%o", &data);
    }
    printf("10진수 ==> %d \n", data);
    printf("16진수 ==> %X \n", data);
    printf("8진수 ==> %o \n", data);
}
