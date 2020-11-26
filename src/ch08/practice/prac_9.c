/**
 * 연습문제 9 | 입력한 숫자 4개의 합계와 곱을 구하는 프로그램 (while문)
 */
#include <stdio.h>

int main() {
    int arr[4];
    int sum = 0, mul = 1;
    int i = 0;
    while (i < 4) {
        printf("%d번째 숫자를 입력하세요 : ", (i + 1));
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    while (i < 4) {
        sum += arr[i];
        mul *= arr[i];
        i++;
    }

    /**
     * 배열 사용 X
     */
//    int sum = 0, mul = 1;
//    int i = 0, input;
//    while (i < 4) {
//        printf("%d번째 숫자를 입력하세요 : ", (i + 1));
//        scanf("%d", &input);
//        sum += input;
//        mul *= input;
//        i++;
//    }
    printf(" 합계 ==> %d \n", sum);
    printf(" 곱셈 ==> %d \n", mul);
}