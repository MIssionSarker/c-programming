   #include <stdio.h>
   #include <string.h>
    int main(){
             char s[1000001];
             scanf("%s",s);
             int sum=0;
             int len= strlen(s);
             for(int i=0;i<len;i++){
                sum +=s[i]-'0';
             }
             printf("%d\n",sum);
             return 0;
    }