#include<stdio.h>
#include<math.h>
long long n,r;
int main(){
  scanf("%lld",&n);
  while(n>0){
    r+=n%10;
    n/=10;
  }
  printf("%lld", r);
}