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
        long long n;
        cin >> n;
        long long count = 0;
        if(n % 2 != 0){
            cout << 0 << endl;
        }else {
            for (int i = 1; i <= sqrt(n);i++){
                if (n % i == 0){
                    // sum += i;
                    if(i % 2 == 0)
                        count++;
                    if (i * i != n)
                    {
                        if (n / i % 2 == 0)
                            count++;
                        // sum += n / i;
                    }
                }
            }
            cout << count << endl;
        }
    }
}
