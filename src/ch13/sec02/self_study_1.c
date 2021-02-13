/**
 * Self Study 1 | 기본 13-7에서 12행과 13행의 위치를 바꾸면 어떻게 되는지
 */
#include <stdio.h>

int main() {
    union student {
        int tot;
        char grade;
    };

    union student u;

    u.grade = 'A';
    u.tot = 300;

    printf("\n -- 공동체 활용 -- \n");
    printf("총점 ==> %d\n", u.tot);
    printf("등급 ==> %c\n", u.grade);
}