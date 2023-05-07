 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
void fun(){
    printf("fun\n");
    fun();
} 
    int main(){
             fun();
             return 0;
    }