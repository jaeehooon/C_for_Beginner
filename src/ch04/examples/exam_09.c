/**
 * 예제모음 09 | 동전 교환 프로그램
 */
#include <stdio.h>

int main() {
    int money, c500, c100, c50, c10;        // 입력한 돈과 각 동전의 갯수를 저장하는 변수

    printf("## 교환할 돈은? ");
    scanf("%d", &money);                    // 교환할 돈 입력

    c500 = money / 500;
    money %= 500;
    printf("\n 오백원짜리  ==>\t%3d개\n", c500);

    c100 = money / 100;
    money %= 100;
    printf(" 백원짜리    ==>\t%3d개\n", c100);

    c50 = money / 50;
    money %= 50;
    printf(" 오십원짜리 \t==>\t%3d개\n", c50);

    c10 = money / 10;
    money %= 10;
    printf(" 십원짜리 \t==>\t%3d개\n", c10);

    printf(" 바꾸지 못한 잔돈\t==>\t%3d원\n", money);
}
