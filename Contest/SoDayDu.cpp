//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string solution(string s){
    int a[11];
    reset(a);
    if(s[0] == '0')
        return "INVALID";
    for (int i = 0; i < s.length();i++){
        if (s[i] >= '0' && s[i] <= '9'){
            a[s[i] - 48] = 1;
        } else{
            return "INVALID";
        }
    }
    for (int i = 0; i <= 9;i++){
        if(a[i] == 0)
            return "NO";
    }
    return "YES";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solution(s) << endl;
    }
}