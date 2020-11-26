/**
 * 연습문제 10 | 한 번 빼낸 자동차를 다시 넣을 수 있도록 스택을 구현
 */
#include <stdio.h>
#define SIZE 10

int main() {
    char stack[SIZE];
    int top = 0;
    char carName = 'A';
    char* ptr;

    ptr = stack;       // 포인터 변수에 배열 주솟값을 대입

    int select = 9;     // while 문을 실행시키기 위해 초기화

    while (select != 3) {
        printf("\n<1> 자동차 넣기 <2> 자동차 빼기 <3> 끝 : ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                if (top >= SIZE) {
                    printf("더이상 넣을 수가 없습니다. \n");
                }
                else {
                    *(ptr + top) = carName;
                    printf(" %c 자동차가 터널에 들어감 \n", *(ptr + top));
                    carName++;
                    top++;
                }
                break;

            case 2:
                if (top <= 0) {
                    printf("뺄 자동차가 없습니다. \n");
                }
                else {
                    top--;
                    printf(" %c 자동차가 터널에서 빠짐 \n", *(ptr + top));
                    carName--;
                }
                break;
            case 3:
                printf("현재 터널에 %d가 있음 \n", top);
                printf("프로그램을 종료합니다. \n");
                break;

            default:
                printf("잘못된 번호를 입력했습니다. \n");
                printf("다시 입력하세요! \n");
                break;
        }
    }

    return 0;
}
