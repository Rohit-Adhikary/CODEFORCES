#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef struct { int fi, se; } pii;
typedef struct { ll fi, se; } pll;

#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define RFOR(i, a, b) for (ll i = (b) - 1; i >= (a); i--)
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define ceil_div(a, b) (((a) + (b) - 1) / (b))
#define popcnt(x) ((ll)__builtin_popcountll(x))
#define INF LLONG_MAX
#define MOD 1000000007LL

#define Rohit_Adhikari fprintf(stderr, "Time: %0.6fs\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

void Solve(void) {
    ll a,b; scanf("%lld %lld",&a, &b);
    if(a <= b) printf("-1\n");
    else printf("%lld\n",min(b,a-b));
}

int main(void) {
    clock_t start_time = clock();

    ll t = 1;
    if (scanf("%lld", &t) != EOF) {
        while (t--) {
            Solve();
        }
    }

    clock_t end_time = clock();
    // Rohit_Adhikari;

    return 0;
}