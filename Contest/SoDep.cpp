//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string reversible_test(string s){
    int l = 0, r = s.length() - 1;
    while(l < r){
        if ((int)(s[l] - 48) % 2 != 0 || (int)(s[r] - 48) % 2 != 0)
            return "NO";
        if(s[l] != s[r])
            return "NO";
        l++, r--;
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
        cout << reversible_test(s) << endl;
    }
}