//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int isPrime(int n){
    if(n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int solution(int n){
    int k = 0;
    int res = 0;
    vector<int> vt;
    if(isPrime(n))
        return 0;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            n /= i;
            vt.push_back(i);
            if(vt.size() > 3)
                return 0;
        }
    }
    if(vt.size() < 3)
        return 0;
    if(vt[0] == vt[1] || vt[0] == vt[2] || vt[1] == vt[2])
        return 0;
    return 1;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solution(n) << endl;
    }  
}