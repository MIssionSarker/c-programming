#include<stdio.h>
int main()
{
   {int a=10,b=40;
    int sum=a+b;
    printf("The sum is:%d\n",sum);
   }{
    int a=10,b=40;
    int sub=b-a;
    printf("The sub is:%d\n",sub);
   }{
    int a=10,b=40;
    int multi=a*b;
    printf("The multi is:%d\n",multi);
   }{
    int a=10,b=40;
    float dif=a*1.0/b;
    printf("The dif is:%.2f\n",dif);
   }{
    int a=10,b=40;
    int mod=b%a;
    printf("The mod is:%d\n",mod);
   }


//+ - * \ in same line 
   {
    int a=10;
    int b=40;
    int sum=a+b;
    int sub=a-b;
    int multi=a*b;
    float dif=a*1.0/b;
    printf("The sum is:%d\n",sum);
    printf("The sub is:%d\n",sub);
    printf("The multi is:%d\n",multi);
    printf("The dif is:%.2f\n",dif); 
   }
    return 0;
}