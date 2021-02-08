/**
 * Self Study 2 | 응용 7-6에서 사용한 do~while문을 중첩 if문으로 변경한 프로그램
 */
#include <stdio.h>

int main(){
    int menu;

    while (menu != 4) {
        printf("\n손님 주문하시겠습니까 ? \n");
        printf("<1> 카페라뗴 <2>카푸치노 <3>아메리카노 <4>그만시킬래요 ==> ");
        scanf("%d", &menu);

        if (menu == 1)
            printf("#카페라떼 주문하셨습니다.\n");
        else if (menu == 2)
            printf("#카푸치노 주문하셨습니다.\n");
        else if (menu == 3)
            printf("#아메리카노 주문하셨습니다.\n");
        else if (menu == 4)
            printf("주문하신 커피 준비하겠습니다..\n");
        else
            printf("잘못 주문하셨습니다...\n");
    }
}