/**
 * 응용 5-8 | 중첩 if문 사용 예 2
 */
#include <stdio.h>

int main() {
    int a;

    printf("점수를 입력하세요 : ");
    scanf("%d", &a);

    if (a >= 90)
        printf("A");
    else {
        if (a >= 80) {
            printf("B");
        }
        else {
            if (a >= 70) {
                printf("C");
            }
            else {
                if (a >= 60) {
                    printf("D");
                }
                else {
                    printf("F");
                }
            }
        }
    }
    printf(" 학점 입니다.\n");
}
