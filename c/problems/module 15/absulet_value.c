 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 #include <stdlib.h>

 int my_abs(int n){
    if(n<0){
        n=abs(n);
    }
    return n;
 }
    int main(){
             int n;
             scanf("%d",&n);
             int abs_n=my_abs(n);
             printf("%d",abs_n);
             return 0;
    }