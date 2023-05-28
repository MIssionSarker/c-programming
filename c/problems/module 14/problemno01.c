 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
    int main(){
             int n,s;
             scanf("%d",&n);
             s=n-1;
             int k=n-(n-1 );
             for (int i = 0; i < n; i++) {
        for (int j = s ; j > 0; j--) { 
            printf(" ");
        }
        for (int j = 0 ; j < k; j++) { 
            printf("*");
        }
        printf("\n");
        k++;
        s--;
             }
             return 0;
    }
