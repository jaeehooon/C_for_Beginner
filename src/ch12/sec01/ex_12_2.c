/**
 * 12-2 | 고정된 크기의 배열로 인한 메모리 낭비의 예
 */
#include <stdio.h>

int main() {
    int aa[10000];
    int *p;
    int i, hap = 0;
    int cnt;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);

    for(i=0; i<cnt; i++) {
        printf(" %d 번째 숫자 : ", i+1);
        scanf("%d", &aa[i]);
    }

    p = aa;

    for(i=0; i<cnt; i++)
        hap += *(p + i);

    printf("입력 숫자의 합 ==> %d\n", hap);

    return 0;
}
