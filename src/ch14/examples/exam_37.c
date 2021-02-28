/**
 * 예제모음 37 | 텍스트 파일 복사
 */
#include <stdio.h>

int main(int argc, char* argv[]) {
    char str[200];
    FILE *rfp;
    FILE *wfp;

    if (argc != 3) {
        printf("\n -- 매개변수를 2개 사용하세요! -- \n");
        return 0;
    }

    rfp = fopen(argv[1], "r");
    wfp = fopen(argv[2], "w");

    for(;;) {
        fgets(str, 199, rfp);

        if (feof(rfp))
            break;

        fputs(str, wfp);
    }

    fclose(rfp);
    fclose(wfp);
}