//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (long long i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string solution(long long a[], long long n){
    for (int i = n - 1; i >= 2; i--) {
        int l = 0, r = i - 1;
        while (l < r) {
            if (a[l] + a[r] == a[i])
                return "YES";
            if(a[l] + a[r] < a[i]){
                l++;
            }else
                r--;
        }
    }
    return "NO";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        input(a, n);
        for (long long i = 0; i < n;i++){
            a[i] *= a[i];
        }
        sort(a, a + n);
        cout << solution(a, n) << endl;
    }   
}