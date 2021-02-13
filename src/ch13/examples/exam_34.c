/**
 * 에제모음 34 | 구조체 포인터를 활용한 학생 관리
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct student {
        char name[10];
        int age;
    };

    struct student *s;

    int cnt, i;

    printf("입력할 학생 수 : ");
    scanf("%d", &cnt);

    s = (struct student *)malloc((sizeof(struct student)) * cnt);

    for(i=0; i<cnt; i++) {
        printf("이름과 나이 입력 : ");
        scanf("%s %d", s[i].name, &s[i].age);
    }

    printf("\n\n -- 학생 명단 -- \n\n");
    for(i=0; i<cnt; i++)
        printf("이름: %s, 나이: %d \n", s[i].name, s[i].age);

    free(s);
}
