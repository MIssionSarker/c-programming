 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
    int main(){
             int x=100;
             int*ptr=&x;
             printf("x ar adress - %p\n",&x);
             printf("ptr ar adress - %p\n",ptr);
             printf("ptr er  value - %p\n",&ptr);
             return 0;
    }