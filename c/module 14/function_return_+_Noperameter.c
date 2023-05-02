//return+No perameter
 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 int sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
 }
    int main(){
             int s=sum();
             printf("%d",s);
             return 0;
    }