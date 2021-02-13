/**
 * ㄱㅣ본 13-3 | 구조를 사용하여 변경한 기본[13-2]
 */
#include <stdio.h>

int main() {
    struct student {
        char name[10];          // 학생 이름
        int kor;                // 국어 점수
        int eng;                // 영어 점수
        float avg;              // 평균 점수
    };

    struct student s;           // 구조체 변수 s

    printf("이름 : ");
    scanf("%s", s.name, 9);

    printf("국어 점수 : ");
    scanf("%d", &s.kor);

    printf("영어 점수 : ");
    scanf("%d", &s.eng);

    s.avg = (s.kor + s.eng) / 2.0f;

    printf("\n --- 구조체 활용 --- \n");
    printf("학생 이름 ==> %s\n", s.name);
    printf("국어 점수 ==> %d\n", s.kor);
    printf("영어 점수 ==> %d\n", s.eng);
    printf("평균 점수 ==> %5.1f\n", s.avg);
}
