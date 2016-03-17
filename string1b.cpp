#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int i;
  char szHello[] = "Hello, world";

  cout << "'" << szHello << "'" << endl;

  for(i=0; i<strlen(szHello); i++)
    cout << (int)(unsigned char)szHello[i] << ",";

  cout << (int)(unsigned char)szHello[i] << endl;
  return 0;
}
