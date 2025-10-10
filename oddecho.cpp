#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        string S;
        cin >> S;
        if (i % 2 != 0)
        {
            cout << S << endl;
        }
    }
    return 0;
}