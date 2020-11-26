/**
 * 예제모음 31 | 파일에서 읽어온 문자열을 파일에 반대 순서로 출력
 *
 * in.txt에 저장된 파일 내용
 * -------------------
 *  Visual
 *  Studio Professional
 *  Basic-C
 *  Study
 *
 * --------------------
 */
#include <stdio.h>
#include <string.h>

int main() {
    FILE* rfp;          // 파일 읽기 포인터
    FILE* wfp;          // 파일 쓰기 포인터

    char str1[200], str2[200];
    int size, i;

    rfp = fopen("./in.txt", "r");
    wfp = fopen("out.txt", "w");

    while (1) {
        fgets(str1, 200, rfp);

        if (feof(rfp)) {
            break;
        }

        size = strlen(str1);
        for(i=size-1; i>=0; i--) {
            str2[size-1-i] = str1[i-1];
        }

        str2[size-1] = '\0';
        fputs(str2, wfp);
        fputs("\n", wfp);
    }

    fclose(rfp);
    fclose(wfp);

    return 0;

}