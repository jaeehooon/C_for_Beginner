/**
 * 예제모음 30 | 구구단을 파일에 출력
 */
#include <stdio.h>

int main() {
    int i, j;
    FILE* wfp;

    wfp = fopen("./gugu.txt", "w");     // 파일 오픈
    for(i=2; i<10; i++) {
        printf("#제%d단#\t", i);              // 프롬프트에서 확인하기 위한 코드
        fprintf(wfp, "#제%d단#\t", i);
    }

    printf("\n\n");                             // 프롬프트에서 확인하기 위한 코드
    fprintf(wfp, "\n\n");

    for(i=1; i<10; i++) {
        for(j=2; j<10; j++) {
            printf("%dX%2d =%2d\t", j, i, j*i);              // 프롬프트에서 확인하기 위한 코드
            fprintf(wfp, "%dX%2d =%2d\t", j, i, j*i);
        }
        printf("\n");
        fprintf(wfp, "\n");
    }

    fclose(wfp);            // 파일 닫기

    return 0;
}
