 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 void recursion(int n,int j)
 {
    if(j>=n) return;
    printf("I love Recursion\n");
             recursion(n,j+1);
 }
    int main(){
             int n,i;
             scanf("%d",&n);
             recursion(n,0);
             return 0;
    }