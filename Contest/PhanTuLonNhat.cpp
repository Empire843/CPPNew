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
        int n, k;
        cin >> n >> k;
        int a[n];
        input(a, n);
        sort(a, a + n);
        cout << a[n - 1] << " ";
        k--;
        for (int i = n-2; i >= 0;i--){
            cout << a[i] << " ";
            k--;
            if(k == 0)
                break;
        }
        cout << endl;
    }
}