#include <cstdio>
using namespace std;

int main()
{
    FILE* pFile;
    int   nLength;
    char  buffer[512];

    pFile = fopen("fwrite.txt", "rb");
    if(pFile == NULL)
      return 0;

    fread(&nLength, 4, 1, pFile);
    fread(buffer, 1, 512, pFile);
    buffer[511] = 0;

    printf("文字列の長さは %d バイトです。\n%s\n", nLength, buffer);

    fclose(pFile);

    return 0;
}
