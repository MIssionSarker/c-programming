 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 void fun(int *p){
    printf("P er value = %d\n",p);
    *p=500;
 }
    int main(){
             int x=100;
             printf("x er value = %p\n",&x);
             fun(&x);
             printf("x er value = %d\n",x);
             return 0;
    }