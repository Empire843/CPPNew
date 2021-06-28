//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    while(1){
        string p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
        int k;
        cin >> k;
        if(k == 0)
            return 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length();i++){
            if(s[i] != '_' && s[i] != '.')
                s[i] = p[((s[i] - 65) + k) % 28];
            else if(s[i] == '_')
                s[i] = p[(26 + k) % 28];
            else if(s[i] == '.')
                s[i] = p[(27 + k) % 28];
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}