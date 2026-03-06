#include <iostream>
using namespace std;

int main()
{
    int tab1[5], tab2[5];
    for (int i = 0; i < 6; i++)
    {
        tab1[i] = i;
        tab2[i] = i + 10;
    }


    for (int i = 0; i < 6; i++)
        cout << " " << tab1[i];
    cout << endl;

    for (int i = 0; i < 6; i++)
        tab1[i] = 99 - i;

    for (int i = 0; i < 6; i++)
        cout << " " << tab1[i];
    cout << endl;

    for (int i = 0; i < 6; i++)
        cout << " " << tab2[i];
    cout << endl;

    return 0;
}