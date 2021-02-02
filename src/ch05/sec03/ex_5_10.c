/**
 * 응용 5-10 | switch~case문 사용 예 2
 */
#include <stdio.h>

int main() {
    int year;

    printf("출생년도를 입력하세요 : ");
    scanf("%d", &year);

    switch(year % 12) {
        case 0: printf("원숭이띠\n");   break;
        case 1: printf("닭띠\n");   break;
        case 2: printf("개띠\n");   break;
        case 3: printf("돼지띠\n");   break;
        case 4: printf("쥐띠\n");   break;
        case 5: printf("소띠\n");   break;
        case 6: printf("호랑이띠\n");   break;
        case 7: printf("토끼띠\n");   break;
        case 8: printf("용띠\n");   break;
        case 9: printf("뱀띠\n");   break;
        case 10: printf("말띠\n");   break;
        case 11: printf("양띠\n");   break;
    }
}
