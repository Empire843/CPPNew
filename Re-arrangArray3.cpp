//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long solution(long long n, long long k, long long a[]){
    long long total = 0;
    long long p = 0;
    long long maxx = -1;
    for (int i = 0; i < n;i++)
        if(a[i] <= k){
            total++;
    for (int i = 0; i < total; i++){
        if(a[i] > k)
            p++;
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        input(a, n);
        cout << solution(n, k, a) << endl;
    }
}