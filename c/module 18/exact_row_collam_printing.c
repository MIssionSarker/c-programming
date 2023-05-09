 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
    int main(){
             int row ,col;
             scanf("%d %d",&row,&col);
             int a[row][col];
              for(int i=0;i<row ;i++){
                 for(int j=0;j<col ;j++){
                    scanf("%d",&a[i][j]);
                }
             }
             //exect row
             //row nita gele colum ar upor loop chalate hobe.
          /*    int e;
             scanf("%d",&e); 
              for(int i=0;i<col ;i++){
                printf("%d ",a[e][i]);
             } */
             //exact colum

             int c;
             scanf("%d",&c);
             if(c==col){
                printf("Can't");
                return 0;
             }
              for(int i=0;i<row ;i++){
                printf("%d ",a[i][c]);
             }
             return 0;
    }