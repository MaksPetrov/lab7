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
    if(a<b && a<c && b<c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
