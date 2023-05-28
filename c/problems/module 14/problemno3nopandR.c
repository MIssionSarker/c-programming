 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 char  char_to_ascii(void){
    char a;
    scanf("%c",&a);
    int ascii=a;
    return ascii;
 }
    int main(){
             int x=char_to_ascii();
             printf("%d",x);
             return 0;
    }