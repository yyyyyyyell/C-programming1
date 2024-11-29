#include <stdio.h>

// 도시 정보를 저장할 구조체 정의
struct City {
    char name[50];       // 도시 이름
    char country[50];    // 국가 이름
    int population;      // 인구 수
};

int main(void) {
    struct City cities[3]; // 3개 도시 정보를 저장할 배열
    int i;

    // 사용자 입력
    printf("Input three cities:\n");
    for (i = 0; i < 3; i++) {
        printf("Name> ");
        scanf("%s", cities[i].name);  // 도시 이름 입력
        printf("Country> ");
        scanf("%s", cities[i].country);  // 국가 이름 입력
        printf("Population> ");
        scanf("%d", &cities[i].population);  // 인구 수 입력
    }

    // 입력된 도시 정보 출력
    printf("\nPrinting the three cities:\n");
    for (i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
