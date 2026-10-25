#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long v[n];
        for(int i = 0; i<n; i++) scanf("%lld",&v[i]);
        
        long long ans = v[0];
        for(int i = 0; i<n; i++){
            ans = ans & v[i];
        }
        printf("%lld\n",ans);
    }
}