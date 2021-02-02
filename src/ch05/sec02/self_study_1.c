/**
 * Self Study 1 | 응용 5-8의 조건을 더 세분화하여 작성한 프로그램
 */
#include <stdio.h>

int main() {
    int score;

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);

    if (score >= 95)
        printf("A+");
    else if (score >= 90)
        printf("A0");
    else if (score >= 85)
        printf("B+");
    else if (score >= 80)
        printf("B0");
    else if (score >= 75)
        printf("C+");
    else if (score >= 70)
        printf("C0");
    else if (score >= 65)
        printf("D+");
    else if (score >= 60)
        printf("D0");
    else
        printf("F");

    printf(" 학점 입니다.");
}
