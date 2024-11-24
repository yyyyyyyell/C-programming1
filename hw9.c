#include <stdio.h>

int convCase(int ch)
{
    const int diff = 'a' - 'A';  // 대소문자의 차이를 계산
    if (ch >= 'A' && ch <= 'Z')  // 대문자인 경우
        return ch + diff;  // 소문자로 변환
    else if (ch >= 'a' && ch <= 'z')  // 소문자인 경우
        return ch - diff;  // 대문자로 변환
    else
        return ch;  // 대소문자가 아닌 문자는 그대로 반환
}

int main(void)
{
    int ch;
    printf("문자열 입력: ");

    // getchar()로 문자열 입력 받기
    while ((ch = getchar()) != '\n')  // 줄 바꿈 문자(\n)가 입력될 때까지 반복
    {
        ch = convCase(ch);  // 문자의 대소문자 변환
        putchar(ch);  // 변환된 문자 출력
    }

    printf("\n");
    return 0;
}
