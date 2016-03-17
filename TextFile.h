// TextFile.h
#ifndef __TEXTFILE_H__INCLUDED__
#define __TEXTFILE_H__INCLUDED__

#include <cstdio>
#include <cstring>
#include "File.h"

const int TF_OVERFLOW = EOF - 1;  // オーバーフロー

class CTextFile : public CFile
{
public:
    int WriteString(const char* pszString);  // 文字列を書き込む
    int ReadLine(char* buffer, int nSize);   // １行読み出す関数
};

#endif
