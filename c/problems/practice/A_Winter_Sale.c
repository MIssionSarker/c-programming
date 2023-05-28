 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>

    int main(){
             float x,p;
             scanf("%f %f",&x,&p);
             float ans=p/(1-x/100);
             printf("%0.2f",ans);
             return 0;
    }