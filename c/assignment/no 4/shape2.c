 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
    int main(){
             int n,s,k;
             scanf("%d",&n);
             s=n-1;
             k=1;
              for(int i=1;i<=n ;i++){
                 for(int j=0;j<s ;j++){
                    printf(" ");
                }
                 for(int j=1;j<=k ;j++){
                    printf("%d",k);
                }
                printf("\n");
                s--;
                k++;
             }
             return 0;
    }