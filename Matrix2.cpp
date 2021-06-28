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
        for (int i = 0; i < n;i++)
            for (int j = 0; j < n;j++)
                cin >> a[i][j];
        for (int i = 0; i < n;i++)
            sort(a[i], a[i] + n);
        int count = 0;
        int res = 0;
        for (int i = 0; i < n;i++){
            if(i > 0 && a[0][i] == a[0][i-1]){
                continue;
            }
            count = 0;
            for (int j = 1; j < n;j++){
                if (!binary_search(a[j], a[j] + n, a[0][i])){
                    break;
                }else {
                    count++;
                }
            }
            if(count == n - 1){
                res++;
            }
        }
        cout << res << endl;
    }
}