 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 void fun(int n){
    if(n==0) return;
    int x=n%10;
    fun(n/10);
    printf("%d ",x);
     }
    int main(){
        int tst;
        scanf("%d",&tst);
         for(int t=0;t<tst ;t++){
            int n;
            scanf("%d",&n);
            fun(n);
            printf("\n");

        }
             return 0;
    }