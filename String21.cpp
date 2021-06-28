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
        string s;
        cin >> s;
        string str[s.length()];
        string tmp = "";
        int num = 0;
        int j = 0;
        for (int i = 0; i < s.length();i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                str[j++] = s[i];
            }else {
                num += (s[i] - 48);
            }
        }
        sort(str, str + s.length());
        for(string c : str){
            cout << c;
        }
        cout << num << endl;
    }
}