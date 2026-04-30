#include <stdio.h>

void in_range_3_7(int z) {
   if (z > 3 && z < 7) { // z больше 3 и z меньше 7
      printf("Yes"); 
   } 
   else { 
      printf("No"); 
   }
}
int main(){
    in_range_3_7(6);
    return 0;
}