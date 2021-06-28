//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (long long i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        input(a, n);
        sort(a, a + n);
        long long count = 0;
        for (long long i = n - 1; i > 0;i--){
            long long tmp = k - a[i];
            long long tmp2 = lower_bound(a, a + n, tmp) - a;
            long long ans = i - tmp2;
            // cout << tmp2 << " " << ans << endl;
            if(ans >= 1)
                count += ans;
        }
        cout << count << endl;
    }
}