//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string Sum(string s){
    long long sum = 0;
    for (int i = s.length() - 1; i >= 0;i--){
        sum += (s[i] - 48);
    }
    string res = "";
    while(sum > 0){
        res = to_string(sum % 10) + res;
        sum /= 10;
    }
    return res;
}
int solution(string s, int count){
    string ans = Sum(s);
    if(ans.length() == 1)
        return count;
    else
        return solution(ans, count+1);
}
int main(){
    fastIO;
        string s;
        cin >> s;
        cout << solution(s, 1) << endl;
}