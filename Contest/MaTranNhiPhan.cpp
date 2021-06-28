//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
        int n;
        cin >> n;
        int a[n][3];
        for (int i = 0; i < n;i++){
            for (int j = 0; j < 3;j++){
                cin >> a[i][j];
            }
        }
        int is1 = 0;
        int count = 0;
        for (int i = 0; i < n;i++){
            is1 = 0;
            for (int j = 0; j < 3;j++){
                if(a[i][j] == 1)
                    is1++;
            }
            if(is1 >= 2){
                count++;
            }
        }
        cout << count << endl;
}