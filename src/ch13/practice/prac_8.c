/**
 * 연습문제 8번 | 구조체 포인터를 활용한 프로그램
 */
#include <stdio.h>

int main() {
    struct student {
        char name[10];
        int avg;
    };

    struct student s;
    struct student *p;
    p = &s;

    printf("이름을 입력 : ");
    scanf("%s", p->name);

    printf("점수를 입력 : ");
    scanf("%d", &p->avg);

    printf("\n------------\n");
    printf("이름은 %s, 점수는 %d이다.", p->name, p->avg);

}
