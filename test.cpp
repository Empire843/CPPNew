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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                cin >> a[i][j];
            }
        }
        int b[n][m];
        reset(b);
        int k = min(n / 2, m / 2);
        int d = 0;
        int x = n - 1, y = m - 1;
        while(d <= k){
            for (int i = d + 1; i <= y;i++){
                b[d][i] = a[d][i - 1];
            }
            for (int i = d + 1; i <= x;i++){
                b[i][y] = a[i - 1][y];
            }
            for (int i = y - 1; i >= 0;i--){
                b[x][i] = a[x][i + 1];
            }
            for (int i = x - 1; i >= 0;i--){
                b[i][d] = a[i+1][d];
            }
            d++, y--, x--;
        }
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}