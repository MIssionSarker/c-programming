 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 void  count_before_zero(int ar[],int n){
    int count=0;
    for(int i=0;i<n ;i++){
          if(ar[i] != 0){
                count++;
    }
    else{
        break;
    }
    }
    printf("%d",count);
 }
    int main(){
             int n;
             scanf("%d",&n);
             int ar[n];
              for(int i=0;i<n ;i++){
                scanf("%d",&ar[i]);
             }
             count_before_zero(ar,n);
             return 0;
    }