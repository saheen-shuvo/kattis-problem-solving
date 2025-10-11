#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    cout << S[0];
    for(int i=0; i<S.size(); i++){
        if(S[i]=='-'){
            cout << S[i+1];
            i++;
        }
    }
    return 0;
}