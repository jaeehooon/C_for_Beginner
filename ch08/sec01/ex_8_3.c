/**
 * 응용 8-3 | for문으로 배열의 첨자를 활용하는 예
 */
#include <stdio.h>

 int main() {
     int aa[4];
     int hap = 0;
     int i;


     for(int i=0; i<4; i++) {
        printf("%d번째 숫자를 입력하세요 : ", i + 1);
        scanf("%d", &aa[i]);
     }
     hap = aa[0] + aa[1] + aa[2] + aa[3];

//     for(int i=0; i<4; i++) {
//         printf("%d번째 숫자를 입력하세요 : ", i + 1);
//         scanf("%d", &aa[i]);
//         hap += aa[i];
//     }

     printf("합계 ==> %d \n", hap);
 }