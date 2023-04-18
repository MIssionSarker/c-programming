   #include <stdio.h>
    int main(){
             char a[100];
             fgets(a,5,stdin);
             a[17]='\0';
             printf("%s\n",a);
             return 0;
    }