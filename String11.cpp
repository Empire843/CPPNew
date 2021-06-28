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
        string s1, s2;
        cin >> s1 >> s2;
        int a[s1.length() + 1];
        reset(a);
        for (int i = 0; i < s2.length();i++){
            for (int j = 0; j < s1.length();j++){
                if(s2[i] == s1[j]){
                    a[j] = i + 1;
                }
            }
        }
        for (int i = 0; i < s1.length();i++){
            cout << a[i];
        }
        cout << endl;
        int res = INT_MAX;
        
    }
    return 0;
}