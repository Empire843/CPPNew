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
        int b[100001];
        reset(b);
        // int count = 0;
        sort(a, a + n);
        map<int, int> mp;
        // map<char, int>::iterator it;
        mp[a[0]]++;
        for (int i = 1; i < n;i++){
                mp[a[i]]++;
        }
        int count = 0;
        for (map<int, int>::iterator it = mp.begin(); it != mp.end();it++){
            if(it->second > 1){
                count += it->second;
            }
                // cout << it->first << " ";
            // cout << it->first << " " << it->second << endl;
        }
        cout << count << endl;
        //5 7 10 20 20 30 30 30
    }
}