/**
 * 예제모음 21 | 대문자와 소문자 변환
 */
#include <stdio.h>
#include <string.h>


int main() {
    char in[50], out[50];
    int i, len;
    int diff = 'a' - 'A';

    printf("문자 입력 : ");
    gets(in);

    len = strlen(in);
    for(i=0; i<len; i++) {
        if (('A' <= in[i]) && (in[i] <= 'Z'))
            out[i] = in[i] + diff;
        else if (('a' <= in[i]) && (in[i] <= 'z'))
            out[i] = in[i] - diff;
        else
            out[i] = in[i];
    }
    out[len] = '\0';

    printf("변환된 문자 : %s \n", out);

    return 0;
}