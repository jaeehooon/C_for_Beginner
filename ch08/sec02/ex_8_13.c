/**
 * 응용 8-13 | 문자열 입출력 함수 gets(), puts() 사용 예
 *
 * gets()를 사용하면
 *  warning: this program uses gets(), which is unsafe.
 *
 *  '\n' 개행 문자는 제외
 *
 *  C11 표준(C99 이후에 나온 최신 C 언어 표준)부터는 버퍼의 크기를 설정하는 gets_s 함수가 추가되었고
 *  Visual Studio 2015에서도 gets_s 함수를 제공합니다.
 *  GCC, Clang에서는 아직 gets 함수를 사용할 수는 있지만 위험하다는 경고를 출력하고 있으므로 가급적이면 사용하지 않는 것이 좋습니다.
 *
 *  - 코딩 도장
 *
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ss[20];
    char tt[20];
    int r1, r2;

    puts("첫 번째 문자열을 입력하세요 : ");
    gets(ss);

    puts("두 번째 문자열을 입력하세요 : ");
    gets(tt);

    r1 = strlen(ss);
    r2 = strlen(tt);

    printf("첫번째 문자열의 길이 ==> %d \n", r1);
    printf("두번째 문자열의 길이 ==> %d \n", r2);

    if (strcmp(ss, tt) == 0) {
        puts("두 문자열의 내용이 같습니다.\n");
    }
    else {
        puts("두 문자열의 내용이 다릅니다. \n");
    }

    return 0;
}