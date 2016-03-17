// TextFile.cpp
#include <cstdio>
#include "TextFile.h"
using namespace std;

// １行読み出す関数
// 改行コードは切り捨てられます
// 戻り値は文字列の長さになります
// バッファに入りきらないとき（オーバーフロー）は TF_OVERFLOW を返します
int CTextFile::ReadLine(char* buffer, size_t nSize)
{
    if(IsValid() == false)
        return EOF;
    if(fgets(buffer, nSize, m_pfile) == NULL)
        return EOF;

    size_t nLength = strlen(buffer);

    // 最後に改行のない場合は、オーバーフローか、改行のない最後の行です
    // 改行のない最後の行がたまたまバッファの長さ－１の長さの時もオーバーフローと判定します
    if(buffer[nLength - 1] != '\n')
        return (nLength == nSize - 1) ? TF_OVERFLOW : nLength;

    nLength -= 1;
    buffer[nLength] = 0;
    return nLength;
}
