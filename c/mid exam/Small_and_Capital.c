   #include <stdio.h>
   #include <string.h>
    int main(){
             char a[1001];
             scanf("%s",a);
             int str=strlen(a);
             int small=0, cap=0;
             for(int i=0;i<str;i++){
                if(a[i]>=97 && a[i]<=122){
                    small++;
                }
                else if(a[i]>=65 && a[i]<=90){
                    cap++;
                }
             }
             printf("%d %d",cap,small);
             return 0;
    }