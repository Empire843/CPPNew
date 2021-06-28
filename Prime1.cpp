//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int isPrime(int n){
    if(n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        for (int i = 2; i <= sqrt(n);i++){
            while (n % i == 0 && isPrime(i)){
                n /= i;
                cout << i << " ";
            }
        }
        if(n > 1)
            cout << n;
        cout << endl;
    }
}