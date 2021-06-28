//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length();i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
        }
        while(s[s.length() - 1] == ' '){
            s.erase(s.end() - 1);
        }
        string name = "";
        int pos = 0;
        for (int i = s.length() - 1; i >= 0;i--){
            if(s[i] == ' '){
                pos = i + 1;
                break;
            }else
                name = (char)(s[i] - 32) + name;
        }
        string tmp = "";
        vector<string> vt;
        for (int i = 0; i < pos;i++){
            if (s[i] != ' '){
                tmp += s[i];
            }else {
                if(tmp != ""){
                    vt.push_back(tmp);
                    tmp = "";
                }
            }
        }
        for (int i = 0; i < vt.size();i++){
            vt[i][0] -= 32;
            if(i == vt.size() - 1)
                cout << vt[i];
            else cout << vt[i] << " ";
        }
        cout << ", " << name;
        cout << endl;
}