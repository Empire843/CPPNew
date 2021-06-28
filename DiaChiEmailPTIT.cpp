#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    string s;
    getline(cin, s);
    s = ' ' + s;
    for (int i = 0; i < s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    vector<char> vt;
    int pos = 0;
    for (int i = 0; i < s.length() - 1; i++){
        if(s[i] == ' ' && s[i+1] != ' '){
            pos = i;
            vt.push_back(s[i + 1]);
        }
    }
    // cout << s << endl;
    for (int i = 0; i < vt.size() - 1;i++){
        cout << vt[i];
    }
    for (int i = pos + 1;i<s.length();i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << s[i];
    }
    // for (int i = 0; i < vt.size() - 1;i++){
    //     cout << vt[i];
    // }
    cout << "@ptit.edu.vn" << endl;
}