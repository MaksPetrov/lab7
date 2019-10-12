#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a;
    b = a/100;
    c = (a/10)%10;
    d = a%10;
    if((b<c && b<d && c<d)||(b>c && b>d && c>d))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
