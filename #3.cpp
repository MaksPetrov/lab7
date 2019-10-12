#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a/10>=1 && a/10<=9 && a%2==0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
