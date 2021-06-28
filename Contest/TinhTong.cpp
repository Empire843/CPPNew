//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string addition(string ans, string a){
    string res = "";
    while(a.length() < ans.length())
        a = '0' + a;
    while(ans.length() < a.length())
        ans = '0' + ans;
    
    int mind = 0;
    for (int i = ans.length() - 1; i >= 0;i--){
        int x = (int)a[i] - 48;
        int y = (int)ans[i] - 48;
        int num = x + y + mind;
        if(num < 10){
            res = to_string(num) + res;
            mind = 0;
        }else {
            if(i == 0){
                res = to_string(num) + res;
            }else res = to_string(num-10) + res;
            mind = 1;
        }
    }
    return res;
}
string solution(string a, char x, char y){
    string a1 = "";
    for (int i = a.length() - 1; i >= 0;i--){
        if(a[i] == x){
            a1 = y + a1;
        }else
            a1 = a[i] + a1;
    }
    return a1;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin.ignore();
        cin >> a >> b;
        cout << addition(solution(a, '6', '5'), solution(b, '6', '5')) << " ";
        cout << addition(solution(a, '5', '6'), solution(b, '5', '6')) << endl;
    }
}