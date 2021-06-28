//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        int min = INT_MAX;
        int res = 0;
        for (int i = 0; i < n - 1;i++){
            for (int j = i + 1; j < n;j++){
                if (abs(a[i] + a[j]) < min){
                    res = a[i] + a[j];
                    min = abs(res);
                }
            }
        }
        cout << res << endl;
    }
}