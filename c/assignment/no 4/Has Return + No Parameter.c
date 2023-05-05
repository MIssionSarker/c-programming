 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 int sub(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int sub=a-b;
    return sub;
 }
    int main(){
             int s=sub();
             printf("%d",s);
             return 0;
    }