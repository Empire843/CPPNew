//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (long long i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        input(a, n);
        int k = 0;
        map<int, int> mp;
        // map<char, int>::iterator it;
        for (int i = 0; i < n;i++){
                mp[a[i]]++;
        }
        int count = 0;
        for (int i = 0; i < n;i++){
            if(mp[a[i]] > 1){
                cout << a[i] << endl;
                k = 1;
                break;
            }
        }
        if(k == 0)
            cout << "NO" << endl;
    }
}