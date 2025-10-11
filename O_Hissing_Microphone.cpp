#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    for(int i=0; i<S.size()-1; i++){
        if(S[i]=='s' && S[i+1]=='s'){
            cout << "hiss";
            return 0;
        }
    }
    cout << "no hiss";
    return 0;
}