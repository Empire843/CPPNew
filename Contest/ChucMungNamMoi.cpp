//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
        int n;
        string s;
        cin >> n;
        string a[n];
        cin.ignore();
        map<string, int> mp;
        for (int i = 0; i < n;i++){
            getline(cin, s);
            a[i] = s;
            mp[a[i]]++;
        }
        // for (map<string, int>::iterator it = mp.begin(); it != mp.end();it++){
        //     cout << it->first << " " << it->second << endl;
        // }
        cout << mp.size() << endl;
}