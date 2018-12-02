#include<stdio.h>
#include<math.h>
#define f(x) (1/(1+pow(x,2)))

int main(){
  int n,i;
  double a,b,h,x,sum=0,integral;
  printf("\n number of intervals: ");
  scanf("%d",&n);
  printf("\n lower limit a: ");
  scanf("%lf",&a);
  printf("\n upper limit b: ");
  scanf("%lf",&b);
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%3==0){
      sum=sum+2*f(x);
    }
    else if(i%3!=0){
      sum=sum+3*f(x);
    }
  }
  integral=(3*h/8)*(f(a)+f(b)+sum);
  printf("\nThe result is: %lf\n",integral);
  return 0;
}
