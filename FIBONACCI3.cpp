//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(long long n){
    if(n == 0 || n == 1)
        return 1;
    long long f0 = 0, f1 = 1, fn = 1;
    while(fn < n){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    if(fn > n)
        return 0;
    else if(fn == n)
        return 1;
    return 0;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        for (int i = 0; i < n;i++){
            if(solution(a[i]))
                cout << a[i] << " ";
        }
        cout << endl;
    }
}