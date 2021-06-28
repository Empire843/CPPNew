//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (long long i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long solution(long long a[]){
    long long count = 0;
    long long ok = 0;
    long long b[4];
    reset(b);
    while(1){
        count++;
        ok = 0;
        b[0] = a[0], b[1] = a[1], b[2] = a[2], b[3] = a[3];
        for (long long i = 0; i < 3;i++){
            a[i] = abs(b[i] - b[i + 1]);
        }
        a[3] = abs(b[3] - b[0]);
        for (long long i = 0; i < 4-1;i++){
            if(a[i] == a[i+1])
                ok++;
            // cout << a[i] << " ";
        }
        // cout << a[3];
        // cout << endl;
        if(ok == 3)
            break;
    }
    return count;
}
int main(){
    fastIO;
    while(1){
        long long a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0)
            break;
        if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
            cout << 0 << endl;
        else
            cout << solution(a) << endl;
    }
}