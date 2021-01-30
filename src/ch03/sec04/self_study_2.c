/**
 * Self Study 2 | 응용 3-15 를 수정하여 "Hello World"라는 글자를 대입하고 출력
 */
#include <stdio.h>

int main() {
    char str1[12] = "Hello World";
    char str2[12];
    printf("str1 ==> %s \n", str1);

    for(int i=0; i<12; i++)
        str2[i] = str1[i];

    printf("str2 ==> %s \n", str2);
}