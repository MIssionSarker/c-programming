   #include <stdio.h>
    int main(){
             char a[8];
             scanf("%s",&a);
             int sz=sizeof(a)/sizeof(char);
             printf("%s\n",a);
             printf("%d",sz);
             return 0;
    }