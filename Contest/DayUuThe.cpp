//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long convert(string s){
    long long res = 0;
    for (int i = s.length() - 1; i >= 0;i--){
        res = res * 10 + (s[i] - 48);
    }
    return res;
}
string solution(string s){
    s += ' ';
    int even = 0, odd = 0;
    string tmp = "";
    int len = 0;
    for (int i = 0; i < s.length();i++){
        if(s[i] == ' '){
            if(convert(tmp) % 2 == 0){
                even++;
                // cout << convert(tmp) << endl;
            }
            else{
                // cout << convert(tmp) << endl;
                odd++;
            }
            len++;
            tmp = "";
        }else{
            tmp += s[i];
        }
    }
    if(len % 2 == 0 && even > odd)
        return "YES";
    if(len %2 != 0 && odd > even)
        return "YES";
    return "NO";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        cout << solution(s) << endl;
    }
}