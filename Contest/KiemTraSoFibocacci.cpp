//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string solution(long long n){
    long long fn = 1, f1 = 1, f0 = 0;
    if(n == 0 || n == 1)
        return "YES";
    while (fn < n){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    if (fn == n)
        return "YES";
    else
        return "NO";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << solution(n) << endl;
    }
}