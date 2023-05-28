 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 char char_to_ascii(char a){
    int ascii=a;
    return ascii;
 }
    int main(){
             char a;
             scanf("%c",&a);
             int xx=char_to_ascii(a);
             printf("%d",xx);
             return 0;
    }