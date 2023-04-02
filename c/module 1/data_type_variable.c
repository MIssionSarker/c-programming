#include<stdio.h>
int main()
{
    {
    int a=1,b=2,c=3,d=4;
    printf("%d,%d,%d,%d\n",a,b,c,d);
    }
    {
    double a=1;
    printf("%f\n",a);
    }
    {
    double a=1;
    printf("%0.2f\n",a);
    }
    {
        float a=10.5;
        printf("%lf\n",a);
    }
    {
        char ami='M';
        printf("%c\n",ami);
    }
    
    {
            int a=1;
            double b=1;
            double c=1;
            float d=10.5;
             char ami='M';
             printf("%d\n %f\n %0.1f\n %lf\n %c\n",a,b,c,d,ami);
    }
    return 0;
}
// int-integer(punno sonkha) %d
// float-vognakso %f 4 bits
// double- long float 8 bits
// character- char %c 
// bool - true or false %d
// 0.2 = 2 digit print 0.3=3 digit print 