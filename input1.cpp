#include <iostream>
using namespace std;


int main()
{
    int a;

    cout << "何か値を入れてね > ";
    cin >> a;

    cout << "その数を３で割った余りは"
         << a % 3 << " です。" << endl;

    return 0;
}
