#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int fac = 1;
        for(int i=1; i<=N; i++){
            fac = fac * i;
        }
        cout << fac % 10 << endl;
    }
    return 0;
}