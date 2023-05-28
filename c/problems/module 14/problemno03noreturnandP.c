#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

void char_to_ascii(char a){
    int ascii = a;
    printf("%d\n", ascii);
}

int main(){
    char a;
    scanf("%c", &a);
    char_to_ascii(a);
    return 0;
}