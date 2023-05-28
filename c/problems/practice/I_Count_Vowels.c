 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 int vo(char s[],int i){
    if(s[i]=='\0'){
        return 0;
    }
    int ans=vo(s,i+1);
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u'){
        return ans+1;
    }
    else{
        return ans;
    }

 }
    int main(){
             char s[226];
             fgets(s,226,stdin);
             int count=vo(s,0);
             printf("%d",count);
             return 0;
    }