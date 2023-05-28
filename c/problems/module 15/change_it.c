 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
void change_it( int ar[],int n){

    int it=0;
     for(int i=0;i<n ;i++){
        ar[n-1]=100;
    }
}
    int main(){
             int n;
             scanf("%d",&n);
             int ar[n];
             for(int i=0;i<n ;i++){
                scanf("%d",&ar[i]);
             }
             change_it(ar,n);
             for(int i=0;i<n ;i++){
                printf("%d ",ar[i]);
             }
             return 0;
    }