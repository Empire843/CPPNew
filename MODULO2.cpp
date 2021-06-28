//  @author: QUÁCH_ĐÌNH_KIÊN
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
        int a, m;
        cin >> a >> m;
        int k = 0;
        for (int i = 1; i <= m - 1;i++){
            if(a * i % m == 1){
                cout << i << endl;
                k++;
                break;
            }
        }
        if(k == 0)
            cout << -1 << endl;
    }
}