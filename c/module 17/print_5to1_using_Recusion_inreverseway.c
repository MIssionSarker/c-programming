 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 void fun(int i){
    if(i==6) return;
    fun(i+1); //5 to 1
    printf("%d\n",i);

 }
    int main(){
             fun(1);
             return 0;
    }
    // ai jodi recursion agge call kori taile se reversie a kaj korbe