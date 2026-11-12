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
#define ceil_div(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define mod 1e9 + 7
#define Rohit_Adhikari cerr << "Time: " << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC << "s\n";

vll seive(ll n) {
    if (n < 2) return {};
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vll primes;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

vll prime_divisor(ll n) {
    vll divisors;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        divisors.push_back(n);
    }
    return divisors;
}

vll segemented_seive(ll a, ll b) {
    if (b < 2 || a > b) return {};
    if (a < 2) a = 2;
    ll limit = sqrt(b);
    vector<bool> mark(limit + 1, true);
    for (ll i = 2; i * i <= limit; i++) {
        if (mark[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                mark[j] = false;
            }
        }
    }
    vll primes;
    for (ll i = 2; i <= limit; i++) {
        if (mark[i]) {
            primes.push_back(i);
        }
    }
    vector<bool> is_prime(b - a + 1, true);
    for (ll p : primes) {
        ll start = max(p * p, ((a + p - 1) / p) * p);
        for (ll j = start; j <= b; j += p) {
            is_prime[j - a] = false;
        }
    }
    vll res;
    for (ll i = 0; i <= b - a; i++) {
        if (is_prime[i]) {
            res.push_back(a + i);
        }
    }
    return res;
}

vll prefix_sum(vll v) {
    ll n = v.size();
    for (ll i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }
    return v;
}

vll suffix_sum(vll v) {
    ll n = v.size();
    for (ll i = n - 2; i >= 0; i--) {
        v[i] += v[i + 1];
    }
    return v;
}

void Solve(){
    ll n, k; cin >> n >> k;
    vll v(n+1); FOR(i,1,n+1) cin >> v[i];
    ll sum = 0;
    vll p;
    for(ll i = 1; i<=n; i = i+(k+1)){
        sum += v[i];
        
    }
    if(sum % 2 == 1)cout << "Alice\n";
    else cout << "Bob\n";


}
int main() {
    fast;
    auto start_time = clock();
    ll t;
    cin >> t;
    while(t--) Solve();
    auto end_time = clock();
    //Rohit_Adhikari
    
    return 0;
}