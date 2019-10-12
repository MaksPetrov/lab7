#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if(a*a==b*b+c*c)
    {
        cout << "Yes";
    }
    else if(b*b==a*a+c*c)
    {
        cout << "Yes";
    }
    else if(c*c==a*a+b*b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
