//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (long long i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
bool cmp(pair<long long, long long> a, pair<long long, long long> b){
    if(a.first < b.first)
        return 1;
    return 0;
}
int main(){
    fastIO;
    long long n;
    cin >> n;
    vector<pair<long long, long long>> vt;
    for (long long i = 0; i < n;i++){
        long long a, b;
        cin >> a >> b;
        vt.push_back({a, b});
    }
    sort(vt.begin(), vt.end(), cmp);
    int present = 0;
    for (int i = 0; i < vt.size();i++){
        if(present > vt[i].first){
            present = present + vt[i].second;
        }else
            present = vt[i].first + vt[i].second;
    }
    // for (int i = 0; i < vt.size();i++){
    //     cout << vt[i].first << " " << vt[i].second << endl;
    // }
    cout << present << endl;
}