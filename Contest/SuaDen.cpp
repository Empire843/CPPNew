//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int n, k, b;
    cin >> n >> k >> b;
    int a[b];
    int check[n];
    reset(check);
    reset(a);
    int res = INT_MAX;
    for (int i = 0; i < b;i++){
        cin >> a[i];
        check[a[i] - 1] = 1;
    }
    if(check[i] == 0)
    for (int i = 0; i < n - k + 1;i++){
        int isBroken = 0;
        for (int j = i; j < i + k;j++){
            if(check[j] == 1){
                isBroken++;
            }
        }
        // cout << i << " " << i + k << " " << isBroken << endl;
        res = min(res, isBroken);
    }
    cout << res << endl;
}