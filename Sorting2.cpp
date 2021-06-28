//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long x;
bool cmp(pair<long long, long long> a, pair<long long, long long> b){
    if (abs(a.first - x) != abs(b.first - x)){
        return abs(a.first - x) < abs(b.first - x);
    }
    else
        return a.second < b.second;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n >> x;
        vector<pair<long long, long long>> vt(n);
        for (long long i = 0; i < n;i++){
            long long tmp;
            cin >> tmp;
            vt[i] = make_pair(tmp, i);
        }
        sort(vt.begin(), vt.end(), cmp);
        for(pair<long long,long long> p:vt){
            cout << p.first << " ";
        }
        cout << endl;
    }
    return 0;
}
