#include <stdio.h>

// ���� ������ ������ ����ü ����
struct City {
    char name[50];       // ���� �̸�
    char country[50];    // ���� �̸�
    int population;      // �α� ��
};

int main(void) {
    struct City cities[3]; // 3�� ���� ������ ������ �迭
    int i;

    // ����� �Է�
    printf("Input three cities:\n");
    for (i = 0; i < 3; i++) {
        printf("Name> ");
        scanf("%s", cities[i].name);  // ���� �̸� �Է�
        printf("Country> ");
        scanf("%s", cities[i].country);  // ���� �̸� �Է�
        printf("Population> ");
        scanf("%d", &cities[i].population);  // �α� �� �Է�
    }

    // �Էµ� ���� ���� ���
    printf("\nPrinting the three cities:\n");
    for (i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
