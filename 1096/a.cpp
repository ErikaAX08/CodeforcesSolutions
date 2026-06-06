#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 0, b = 0;
    int x = 0, y = 0;

    cin >> n;
    while (n)
    {
        cin >> a >> b;

        if (!(a % 2) && !(b % 2))
        {
            cout << "YES" << endl;
        }

        else if (!(a % 2) && (b % 2) != 0 || a != 0 && !(b % 2))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }

        n--;
    }

    return 0;
}