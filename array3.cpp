#include <cstdio>
using namespace std;


void DisplayAddresses(char* pointer)
{
    int i;

    printf("pointer     : %d\n", pointer);
    for(i = 0; i < 10; i++)
        printf("&pointer[%d] : %d\n", i, &pointer[i]);
}

int main()
{
    int i;
    char array[10];

    printf("array       : %d\n", array);
    for(i = 0; i < 10; i++)
        printf("&array[%d]   : %d\n", i, &array[i]);

    printf("\n");
    DisplayAddresses(array);

    return 0;
}
