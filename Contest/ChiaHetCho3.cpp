//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
// string s;
int solution(string s, int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        int ans = 0;
        for (int j = i; j < n; j++){
            ans = ans * 10 + (s[j] - '0');
            if (ans % 3 == 0){
                cout << ans << endl;
                count++;
            }
        }
    }
    return count;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin >> n;
        cin >> s;
        cout << solution(s, n) << endl;
    }
}