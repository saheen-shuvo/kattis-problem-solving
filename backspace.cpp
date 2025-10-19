#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<char> res;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '<'){
            if(!res.empty()){
                res.pop_back();
            }
        }
        else{
            res.push_back(s[i]);
        }
    }
    for(char x : res){
        cout << x;
    }
    return 0;
}