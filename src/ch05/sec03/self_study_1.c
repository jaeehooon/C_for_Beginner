/**
 * 응용 5-10 | switch~case문 사용 예 2
 */
#include <stdio.h>

int main() {
    int year;

    printf("출생년도를 입력하세요 : ");
    scanf("%d", &year);

    if (year % 12 == 0)
        printf("원숭이띠\n");
    else if (year % 12 == 1)
        printf("닭띠\n");
    else if (year % 12 == 2)
        printf("개띠\n");
    else if (year % 12 == 3)
        printf("돼지띠\n");
    else if (year % 12 == 4)
        printf("쥐띠\n");
    else if (year % 12 == 5)
        printf("소띠\n");
    else if (year % 12 == 6)
        printf("호랑이띠\n");
    else if (year % 12 == 7)
        printf("토끼띠\n");
    else if (year % 12 == 8)
        printf("용띠\n");
    else if (year % 12 == 9)
        printf("뱀띠\n");
    else if (year % 12 == 10)
        printf("말띠\n");
    else if (year % 12 == 11)
        printf("양띠\n");
}
