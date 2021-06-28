//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string isPrime(long long n){
    if(n < 2)
        return "NO";
    for (long long i = 2; i <= sqrt(n);i++){
        if(n % i == 0)
            return "NO";
        
    }
    return "YES";
}
int main(){
    fastIO;
    // int t;
    // cin >> t;
    // while(t--){
        long long n;
        cin >> n;
        cout << isPrime(n) << endl;
    // }
}