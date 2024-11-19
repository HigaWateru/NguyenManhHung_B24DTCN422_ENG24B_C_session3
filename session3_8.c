#include<stdio.h>
#include<math.h>
long long n,nDao,phanLe;
int main(){
  scanf("%lld",&n);
  while(n!=0){
    phanLe=n%10;
    nDao=nDao*10+phanLe;
    n/=10;
  }
  printf("%lld", nDao);
}