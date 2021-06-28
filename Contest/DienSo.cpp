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
        sort(a, a + n);
        int l = a[0];
        int r = a[n - 1];
        int b[r + 1];
        reset(b);
        for (int i = 0; i < n;i++){
            b[a[i]] = 1;
        }
        int count = 0;
        for (int i = l; i <= r;i++){
            if(b[i] == 0)
                count++;
        }
        cout << count << endl;
    }
}