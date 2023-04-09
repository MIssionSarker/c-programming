#include <stdio.h>

int main() {
   char X;
   scanf("%c",&X);
   if(X>='0' && X<='9'){
       printf("IS DIGIT\n",X);
       }
       else{
           printf("ALPHA\n",X);
           if(X>='A' && X<='Z'){
               printf("IS CAPITAL\n",X);
           }
           else{
       printf("IS SMALL\n",X);
   }
       }
    return 0;
}
