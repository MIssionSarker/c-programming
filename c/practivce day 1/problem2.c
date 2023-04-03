#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    int multi=a*b;
    float div=1.0*a/b;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",multi);
    printf("%.2f\n",div);
    return 0;
}