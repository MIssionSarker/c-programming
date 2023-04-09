#include <stdio.h>

int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    //min
    if(A <= B && A <= C){
        printf("%d ",A);
    }
    else if(B <= A && B <= C){
        printf("%d ",B);   
    }
    else{
        printf("%d ",C);
    }
    //max
    
    if(A >= B && A >= C){
        printf("%d",A);
    }
    else if(B >= A && B >= C){
        printf("%d",B);   
    }
    else{
        printf("%d",C);
    }
    return 0;
}