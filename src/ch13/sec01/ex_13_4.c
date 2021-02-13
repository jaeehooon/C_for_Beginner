/**
 * 기본 13-4 | 구조체 배열을 사용하지 않은 예
 */
#include <stdio.h>
#include <string.h>

int main() {
    char name[3][10];
    int kor[3];
    int eng[3];
    float avg[3];

    int i;

    strcpy(name[0], "Kim");
    kor[0] = 90;
    eng[0] = 80;
    avg[0] = (kor[0] + eng[0]) / 2.0f;

    strcpy(name[1], "Lee");
    kor[1] = 70;
    eng[1] = 60;
    avg[1] = (kor[1] + eng[1]) / 2.0f;

    strcpy(name[2], "Park");
    kor[2] = 50;
    eng[2] = 40;
    avg[2] = (kor[2] + eng[2]) / 2.0f;

    for(i=0; i<3; i++) {
        printf("학생 이름 ==> %s\n", name[i]);
        printf("국어 점수 ==> %d\n", kor[i]);
        printf("영어 점수 ==> %d\n", eng[i]);
        printf("평균 점수 ==> %5.1f\n", avg[i]);
        printf("\n");
    }
}
