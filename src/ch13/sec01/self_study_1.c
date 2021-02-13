/**
 * Self Study 1 | 구조체 변수에 초깃값을 대입하여 빌드
 */
#include <stdio.h>

int main() {
    struct student {
        char name[10];          // 학생 이름
        int kor;                // 국어 점수
        int eng;                // 영어 점수
        float avg;              // 평균 점수
    };

    struct student s = {"John", 87, 78};           // 구조체 변수 s

    s.avg = (s.kor + s.eng) / 2.0f;

    printf("\n --- 구조체 활용 --- \n");
    printf("학생 이름 ==> %s\n", s.name);
    printf("국어 점수 ==> %d\n", s.kor);
    printf("영어 점수 ==> %d\n", s.eng);
    printf("평균 점수 ==> %5.1f\n", s.avg);
}
