//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int matrix[101][101];
void matrixx(int m, int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> matrix[i][j];
        }
    }
    // reset(a);
    // input(a, m * n);
    int d = 0, row = n - 1, col = m - 1;
    int x = 1,k = 0;
    while (k < m * n){
        if(k < m * n)
        for (int i = d; i <= col;i++){
            cout << matrix[d][i] << " ";
            k++;
        }
        if(k < m*n){
            for (int i = d+1; i <= row;i++){
                cout << matrix[i][col] << " ";
                k++;
            }
        }
        if(k < m*n){
            for (int i = col - 1; i >= d;i--){
                cout << matrix[row][i] << " ";
                k++;
            }
        }
        if (k < m * n){
            for (int i = row - 1; i > d; i--){
                cout << matrix[i][d] << " ";
                k++;
            }
        }
        d++, row--, col--;
    }
    // for (int i = 0; i < n;i++){
    //     for (int j = 0; j < m;j++){
    //         cout << matrix[i][j] << " ";
    //     }
    // }
    cout << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        reset(matrix);
        matrixx(m, n);
    }
}