 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 void multiply(int a,int b){
    int multi=a*b;
    printf("%d",multi);
 }   
 int main(){
             int a,b;
             scanf("%d %d",&a,&b);
             multiply(a,b);
             return 0;
    }