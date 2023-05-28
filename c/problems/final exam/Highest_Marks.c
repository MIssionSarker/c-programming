 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
    int main(){
             int n;
             scanf("%d",&n);
             int a[n];
              for(int i=0;i<n ;i++){
                scanf("%d",&a[i]);
             }
             int high=a[0];
              for(int i=0;i<n ;i++){
                if(a[i]>high){
                    high=a[i];
                }
             }
             int result=0;
              for(int i=0;i<n ;i++){
                result=high-a[i];
                printf("%d ",result);
             }
             return 0;
    }