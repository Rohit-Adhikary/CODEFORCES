#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(ll i = (a); i< (b); i++)
#define RFOR(i, a, b) for(ll i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define round(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define mod 1e9 + 7
#define Rohit_Adhikari cerr << "Time: " << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC << "s\n";

void Solve(){
	ll n; cin >> n; vll b(n);
	FOR(i,0,n) cin >> b[i];
	vll freq(n+5, 0);
	vector<pll> p;
	FOR(i,0,n){
		if(b[i] > 0){
			ll mx = max(0LL, i-b[i]+1);
			ll mn = min(n, i+b[i]);

			freq[mx]++;
			freq[mn]--;
		}
	}

	vll pre(n+5,0);
	pre[0] = freq[0];
	FOR(i,1,n+2){
		pre[i] = pre[i-1] + freq[i]; 
	}

	string s(n, '0');
	FOR(i,0,n){
		if(b[i] == -1) continue;
		if(i-b[i] >= 0 and pre[i-b[i]] == 0){
			s[i-b[i]] = '1';
		}else if(i+b[i] < n and pre[i+b[i]] == 0){
			s[i+b[i]] = '1';
		}else{
			cout << -1 << endl;
			return;
		}
	}
	if(count(all(s),'1') == 0){
		s[0] = '1';
	}

	cout << s << endl;
}
int main() {
	fast;
	auto start_time = clock();
	ll t;
	cin >> t;
	while(t--) Solve();
	auto end_time = clock();
	Rohit_Adhikari
	
	return 0;
}