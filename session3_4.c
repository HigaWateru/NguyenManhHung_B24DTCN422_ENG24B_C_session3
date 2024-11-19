#include<stdio.h>
#include<math.h>
long long a,b,c;
int main(){
    scanf("%lld%lld%lld", &a, &b, &c);
    double tb=(double) (a+b+c)/3;
    printf("Tong diem 3 mon: %lld\nDiem trung binh 3 mon: %.2lf", a+b+c, tb);
}