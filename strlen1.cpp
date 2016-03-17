#include <cstdio>
using namespace std;

int strlen(char* str)
{
    int i;
    for(i = 0; str[i]; i++);
    return i;
}

void DispLength(char* str)
{
    printf("文字列「%s」の長さは %d バイトです。\n", str, strlen(str));
}

int main()
{
    DispLength("ホメホメール");
    DispLength("嘘つきゃばれるぜドルバッキー");
    DispLength("");

    return 0;
}
