#include <cstdio>
using namespace std;

char format[]= "&a = %d\n r = %d\n&r = %d\n";

int main()
{
    int  a;
    int& r = a;

    // a のアドレスと、r の値と、r のアドレスを表示します
    __asm
    {
        push    0
        lea     eax, r
        push    eax
        push    r
        lea     eax, a
        push    eax
        lea     eax, format
        push    eax
        call    printf
        add     esp, 20
    }

    return 0;
}
