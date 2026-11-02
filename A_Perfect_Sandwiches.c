#include<stdio.h>
#include<math.h>

long long max(long long a, long long b){
    if(a > b) return a;
    else return b;
}
long long min(long long a, long long b){
    if(a > b) return b;
    else return a;
}
long long gcd(long long a, long long b){
    if(min(a,b)==0) return max(a,b);
    gcd(max(a,b) % min(a,b), min(a,b));
}
void Solve(){
    long long a,b;
    scanf("%lld %lld", &a , &b);
    if(a <= b) printf("-1");
    else printf("%lld\n",min(b,a-b));
}

int main(){
    long long t;
    scanf("%lld",&t);
    while(t--) Solve();
}