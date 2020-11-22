/**
 * 기본 8-6 | 배열의 크기를 계산하는 예
 *
 * 배열의 크기(요소의 개수) = sizeof(전체 배열 이름) / sizeof(배열의 데이터 형식)
 *
 */
#include <stdio.h>

int main() {
    int aa[] = {10, 20, 30, 40, 50};
    int count;

    count = sizeof(aa) / sizeof(int);       // 배열의 크기 계산
    printf("배열 aa[]의 요소의 개수는 %d 입니다. \n", count);

    // Self Study
    int sum = 0;
    for(int i=0; i<count; i++) {
        sum += aa[i];
    }
    printf("배열 aa에 들어있는 원소들의 합은 %d 입니다.\n", sum);

    return 0;
}
