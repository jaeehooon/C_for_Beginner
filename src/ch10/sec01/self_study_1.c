/**
 * Self Study 1 | 손님 3명에게 커피를 제공하는 소스를 for 문으로 이용
 */
#include <stdio.h>

int main() {
    int coffee;

    for(int i=0; i<3; i++) {
        printf("%d번 손님! 어떤 커피 드릴까요? (1: 보통, 2: 설탕, 3: 블랙) ", i+1);
        scanf("%d", &coffee);

        printf("\n# 1. 뜨거운 물을 준비한다.\n");
        printf("# 2. 종이컵을 준비한다.\n");

        switch (coffee) {
            case 1:
                printf("# 3. 보통 커피를 탄다.\n");
                break;
            case 2:
                printf("# 3. 설탕 커피를 탄다.\n");
                break;
            case 3:
                printf("# 3. 블랙 커피를 탄다.\n");
                break;
            default:
                printf("# 3. 아무거나 탄다.\n");
                break;
        }

        printf("# 4. 물을 붓는다.\n");
        printf("# 5. 스푼으로 저어서 녹인다.\n\n");

        printf("%d번 손님~ 커피 여기 있습니다.\n\n", (i+1));

    }

    return 0;
}
