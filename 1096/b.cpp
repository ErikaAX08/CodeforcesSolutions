#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int nP = 0;
    int r = 0;

    cin >> n;
    while (n)
    {
        vector<char> p;
        cin >> nP;

        for (int i = 0; i < nP; i++)
        {
            char pr;
            cin >> pr;
            p.push_back(pr);
        }

        int pA = std::count(p.begin(), p.end(), '(');
        int pB = std::count(p.begin(), p.end(), ')');

        if (pA == pB)
        {
            cout << "YES" << endl;
        }
        else if ((pA - 1) == pB && (pB - 1) == pA)
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