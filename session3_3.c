#include<stdio.h>
#include<math.h>
const double PI=3.14159265359;
long long r;
int main(){
    scanf("%lld", &r);
    printf("Chu vi hinh tron la %.2lf\nDien tich hinh tron la %.2lf", 2*r*PI, r*r*PI);
}