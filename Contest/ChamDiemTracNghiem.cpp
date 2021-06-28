//  @author: QUÁCH_ĐÌNH_KIÊN
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
        char Pc101[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
        char Pc102[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
        float score = 0;
        int PostCode;
        cin >> PostCode;
        int ch = 15;
        char choose;
        int i = 0;
        int k = 0;
        if(PostCode == 101){
            while(ch--){
                cin >> choose;
                if(choose == Pc101[i]){
                    k++;
                }
                i++;
            }
        }else {
            while(ch--){
                cin >> choose;
                if(choose == Pc102[i]){
                    k++;
                }
                i++;
            }
        }
        float tmp = (float)10 / 15;
        score = (float)k * tmp;
        cout << fixed  << setprecision(2) << score << endl;
    }
}