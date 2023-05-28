 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
    int main(){
             int ar[5]={10,20,30,40,50};
             printf("0th address er address - %p\n",&ar[0]);
             printf("0th address er address - %p\n",&ar);
             printf("%d\n",*(ar+1));
             printf("%d\n",*(1+ar));
             printf("%d\n",ar[1]);
             printf("%d\n",1[ar]);

             return 0;

    }