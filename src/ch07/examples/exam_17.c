/**
 * 예제모음 17 | 배수의 합계를 구하는 계산기
 */
#include <stdio.h>

int main() {
    int start, end;             // 시작값, 끝값
    int basu, i;
    int hap = 0;

    printf("합계의 시작값 ==> ");
    scanf("%d", &start);
    printf("합계의 끝값 ==> ");
    scanf("%d", &end);
    printf("배수 ==> ");
    scanf("%d", &basu);

    i = start;
    while (i <= end) {
        if (i % basu == 0)
            hap += i;

        i++;
    }

    printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, basu, hap);


}
