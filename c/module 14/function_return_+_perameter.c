 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 //return_type name(Parameters){
    //code
    //return what?
 //}
int sum(int x, int y){ //x=10 , y=20
int sum=x+y;
return sum;
}
    int main(){
             int s=sum(10,20);
             printf("%d\n",s);
             printf("%d\n",sum(300,300));
             return 0;
    }