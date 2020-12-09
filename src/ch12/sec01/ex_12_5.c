/**
 * 12-5 | realloc() 함수 사용 예
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* p;
    int i, hap = 0;
    int cnt=0;
    int data;

    p = (int*)malloc(sizeof(int) * 1);
    printf(" 1번째 숫자 : ");
    scanf("%d", &p[0]);
    cnt++;

    for(i=2; ; i++) {
        printf(" %d 번째 숫자 : ", i);
        scanf("%d", &data);

        if (data != 0)
            p = (int*) realloc(p, sizeof(int) * i);
        else
            break;

        p[i - 1] = data;
        cnt++;
    }

    for(i=0; i<cnt; i++)
        hap += p[i];

    printf("입력 숫자 합 ==> %d\n", hap);

    free(p);

    return 0;
}
