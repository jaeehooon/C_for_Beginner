/**
 * 기본 13-6 | 구조체 포인터 사용 예
 */
#include <stdio.h>

int main() {
    struct student {
        char name[10];
        int kor;
        int eng;
        float avg;
    };

    struct student s;               // 구조체 변수 선언
    struct student *p;              // 구조체 포인터 변수 선언

    p = &s;

    printf("이름 입력 : ");
    scanf("%s", p->name);           // 배열 name이 자체 배열주소이기때문에 & 안 붙임

    printf("국어 점수 : ");
    scanf("%d", &p->kor);

    printf("영어 점수 : ");
    scanf("%d", &p->eng);

    p->avg = (p->kor + p->eng) / 2.0f;

    printf("\n --- 구조체 활용 --- \n");
    printf("학생 이름 ==> %s\n", p->name);
    printf("국어 점수 ==> %d\n", p->kor);
    printf("영어 점수 ==> %d\n", p->eng);
    printf("평균 점수 ==> %5.1f\n", p->avg);








}
