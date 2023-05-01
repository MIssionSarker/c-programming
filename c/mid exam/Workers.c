   #include <stdio.h>
    int main(){
             int m1,m2,d;
             scanf("%d %d %d",&m1,&m2,&d);
             int w1=m1*d;
             int w2=m2*d;
             int works=(w1*d)/w2;
             printf("%d",works);
             return 0;
    }