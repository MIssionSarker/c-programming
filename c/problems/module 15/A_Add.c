 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 int sum(int a,int b){
    int m=a+b;
    return m;
 }
    int main(){
             int a,b;
             scanf("%d %d",&a,&b);
             int m=sum(a,b);
             printf("%d",m);
             return 0;
    }