#include<stdio.h>
#include<math.h>
long long a,h;
int main(){
  printf("Nhap do dai canh: ");
  scanf("%lld", &a);
  printf("Nhap chieu cao: ");
  scanf("%lld", &h);
  printf("Dien tich hinh tam giac la %.2lf", 0.5*a*h);
}