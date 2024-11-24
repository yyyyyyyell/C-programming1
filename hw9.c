#include <stdio.h>

int convCase(int ch)
{
    const int diff = 'a' - 'A';  // ��ҹ����� ���̸� ���
    if (ch >= 'A' && ch <= 'Z')  // �빮���� ���
        return ch + diff;  // �ҹ��ڷ� ��ȯ
    else if (ch >= 'a' && ch <= 'z')  // �ҹ����� ���
        return ch - diff;  // �빮�ڷ� ��ȯ
    else
        return ch;  // ��ҹ��ڰ� �ƴ� ���ڴ� �״�� ��ȯ
}

int main(void)
{
    int ch;
    printf("���ڿ� �Է�: ");

    // getchar()�� ���ڿ� �Է� �ޱ�
    while ((ch = getchar()) != '\n')  // �� �ٲ� ����(\n)�� �Էµ� ������ �ݺ�
    {
        ch = convCase(ch);  // ������ ��ҹ��� ��ȯ
        putchar(ch);  // ��ȯ�� ���� ���
    }

    printf("\n");
    return 0;
}
