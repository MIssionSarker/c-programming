 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 char small_to_capital(char a){
    char capital=a-32;
    return capital;
 }
    int main(){
             char a;
             scanf("%c",&a);
             char s=small_to_capital(a);
             printf("%c",s);
             return 0;
    }