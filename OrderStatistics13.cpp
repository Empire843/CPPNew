//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;
ll solution(int a1[], int a2[], int n, int m){
	ll i = 0, j = 0;
	ll sum1 = 0;
	ll sum2 = 0;
	ll res = 0;
	while(i < n && j < m){
		if(a1[i] < a2[j])
			sum1 += a1[i++];
		else if(a1[j] > a2[j]){
			sum2 += a2[j++];
		}else {
			res += max(sum1, sum2);
			sum1 = 0, sum2 = 0;
		}
	}
	return res;
}
int main(){
	fastIO;
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a1[n], a2[m];
		input(a1, n);
		input(a2, m);
		cout << solution(a1, a2, n, m) << endl;
	}
}