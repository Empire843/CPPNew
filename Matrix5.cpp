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
        int a[n][n];
        int b[n], c[n];
        reset(b), reset(c);
        for (int i = 0; i < n;i++)
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                b[i] += a[i][j];
                c[j] += a[i][j];
            }
        int res = 0;
        int MAX = max(*max_element(b, b + n), *max_element(c, c + n));
        for (int i = 0; i < n;i++){
            res += MAX - c[i];
        }
        cout << res << endl;
    }
}