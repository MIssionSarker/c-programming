   #include <stdio.h>
   #include <string.h>
    int main(){
             int n;
             int k;
             scanf("%d %d",&n,&k);
             for(int i=0;i<k;i++){
                for(int j=1;j<=n;j++){
                    printf("%d ",j);
                }
                printf("\n");
             }
             return 0;
    }