/**
 * 기본 12-6 | 2차원 배열 사용 예
 */
#include <stdio.h>

int main() {
    char data[3][100];
    int i;

    for(i=0; i<3; i++) {
        printf(" %d 번째 문자열 : ", i+1);
        gets(data[i]);
    }

    printf("\n ㅡ 입력과 반대로 출력(2차원 배열) ㅡ \n");
    for(i=2; i>=0; i--)
        printf(" %d : %s\n", i+1, data[i]);

    return 0;
}
