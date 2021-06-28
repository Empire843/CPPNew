#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        long long ans;
        long long max = -999999999;
        for (int i = 0; i < n;i++){
            ans = 1;
            for (int j = i; j >= 0; j--){
                ans *= a[j];
                if(ans > max)
                    max = ans;
            }
        }
        cout << max << endl;
    }
    return 0;
}