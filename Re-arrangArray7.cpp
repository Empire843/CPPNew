#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
            sort(a, a + n, cmp);
        for(string tmp : a){
            cout << tmp;
        }
        cout << endl;
    }
    return 0;
}
