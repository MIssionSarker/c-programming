 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 void fun(int i){
    if(i==6) return; //base case 
    printf("%d\n",i);
    fun(i+1);
 }
    int main(){
             fun(1);
             return 0;
    }