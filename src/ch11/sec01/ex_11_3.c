/**
 * 기본 11-3 | 문자 입출력 함수 사용 예 1
 */
//#define _CRT_NONSTDC_NO_WARNINGS    // 비표준 함수를 사용했을 때 에러 방지
#include <stdio.h>
//#include <curses.h>   // <-- 비표준함수
//#include <conio.h>
#include <stdlib.h>
// mac 에서는 getch() 함수를 사용하지 못하는 듯함
/**
 * <getch(), getche(), getchar() 차이점>
 *
 * getch(), getche()는 입력버퍼를 사용하지 않음
 *
 * getchar()는 입력 버퍼를 사용함
 *  엔터('\n')를 입력받을때까지 입력버퍼에 저장하고, 엔터가 입력되면 입력을 중지하고
 *  저장된 내용에서 가장 첫글자를 반환함
 */

int main() {
    char ch;
    // getchar() , putchar()
    ch = getch();
    putchar(ch);

    ch = getch();
    putchar(ch);

    ch = getch();
    putchar(ch);

    return 0;
}
