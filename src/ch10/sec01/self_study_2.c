/**
 * Self Study 2 | 기본 10-3의 main 함수에서 커피 세 잔의 주문 과정을 for 문으로 작성
 */
#include <stdio.h>

int coffee_machine(int button) {
    printf("\n# 1. 뜨거운 물을 준비한다.\n");
    printf("# 2. 종이컵을 준비한다.\n");

    switch(button) {
        case 1:
            printf("# 3. (자동으로) 보통 커피를 탄다.\n");
            break;
        case 2:
            printf("# 3. (자동으로) 설탕 커피를 탄다.\n");
            break;
        case 3:
            printf("# 3. (자동으로) 블랙 커피를 탄다.\n");
            break;
        default:
            printf("# 3. (자동으로) 아무거나 탄다.\n");
            break;
    }

    printf("# 4. 물을 붓는다.\n");
    printf("# 5. 스푼으로 저어서 녹인다.\n\n");

    return 0;
}

int main() {
    int coffee;
    int ret;
    char name = 'A';

    for(int i=0; i<3; i++) {
        printf("%c님, 어떤 커피 드릴까요? (1: 보통, 2: 설탕, 3: 블랙) ", name);
        scanf("%d", &coffee);
        ret = coffee_machine(coffee);
        printf("%c님~ 커피 여기 있습니다.\n\n", name);
        name++;
    }

    return 0;
}

