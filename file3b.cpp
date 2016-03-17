#include <cstdio>
#include <string>
using namespace std;

int main()
{
    FILE* pFile;
    char  buffer[512];
    int   nLength;

    printf("何か文字列を入力して下さい > ");
    gets(buffer);

    pFile = fopen("fwrite.txt", "wb");

    nLength = strlen(buffer);
    fwrite(&nLength, 4, 1, pFile);
    fwrite(buffer, 1, nLength + 1, pFile);

    fclose(pFile);

    return 0;
}
