  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include <time.h>
  void world(){
    printf("world start\n"); 
    printf("world end\n"); 
  }
  void hello(){
    printf("Hello start\n");
    world();
    printf("Hello end\n");
    
  }
     int main(){
        printf("Main start\n");
              hello();
              printf("Main end\n");
              printf("end\n");
              return 0;
     }
     //1st a go to main fuction automatic -Main start 
     //then hello()-go to hello fuction - Hello start
     //then world()-go to world fuction -world start\n world end
     //then again go to the hello fuction-hello end 
      //then again go to the main fuction -main end\n end 

      