//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    long long t;
    cin >> t;
    long long test = 1;
    while(t--){
        long long n, m;
        cin >> n >> m;
        long long a[n][m];
        long long b[m][n];
        reset(b);
        reset(a);
        for (long long i = 0; i < n;i++){
            for (long long j = 0; j < m;j++){
                cin >> a[i][j];
                b[j][i] = a[i][j];
            }
        }
        long long c[n][n];
        reset(c);   
        for (long long i = 0; i < n;i++){
            for (long long j = 0; j < n;j++){
                c[i][j] = 0;
                for (long long k = 0; k < m;k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout << "Test " << test << ":" << endl;
        for (long long i = 0; i < n;i++){
            for (long long j = 0; j < n;j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
        test++;
    }
}