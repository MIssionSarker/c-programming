 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 int count_odd( int ar[] ,int x){
    int odd=0;
    for(int i=0;i<x;i++){
        if(ar[i]%2==0){

        }
        else{
            odd++;
        }
    }
    return odd;
 }  
    int main(){
             int x;
             scanf("%d",&x);
             int ar[x];
              for(int i=0;i<x ;i++){
                scanf("%d",&ar[i]);
             }
             int y=count_odd(ar,x);
             printf("%d",y);
             return 0;
    }