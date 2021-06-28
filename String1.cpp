//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(int k, string s){
    int a[27];
    reset(a);
    for (int i = 0; i < s.length();i++){
        a[s[i] - 97]++;
    }
    int p = 0;
    for (int i = 0; i < 26;i++){
        if(a[i] == 0){
            p++;
        }
    }
    if(p > k)
        return 0;
    return 1;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> s;
        cin >> k;
        cout << solution(k, s) << endl;
    }
}