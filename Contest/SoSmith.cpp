//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int isPrime(long long n){
    if(n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int SumOfNumber(long long n){
    long long tmp = n;
    int sum = 0;
    while(tmp > 0){
        sum += (tmp % 10);
        tmp /= 10;
    }
    return sum;
}
int Smith(long long n){
    int res = 0;
    for (int i = 2; i <= n;i++){
        while(isPrime(i) && n % i == 0){
            n /= i;
            if(i <= 10){
                res += i;
            }else{
                res += SumOfNumber(i);
            }
        }
    }
    if(n > 1)
        res += n;
    return res;
}
int main(){
    fastIO;
        long long n;
        cin >> n;
        if(SumOfNumber(n) == Smith(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
}