 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
    int main(){
             int n,s,k;
             scanf("%d",&n);
             s=0;
             k=(2*n)-1;
            for(int i=0;i<n ;i++){
                 for(int j = s; j>0 ;j--){
                    printf(" ");
                }
                for(int j = k; j>0 ;j--){
                    printf("*");
                }
                printf("\n");
                s ++;
                k -=2;
             }
             return 0;
    }