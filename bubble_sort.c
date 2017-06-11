#include <stdio.h>


int main()
{
  int list[15] = {15,7,9,12,3,11,6,8,14,10,5,2,4,13,1};
  int temp, swapped, i, j=1;
   
  // navigate through all items and print original list 
  printf("original list [");
  for (i = 0; i < 15; i++){
    printf("%d", list[i]);
    if (i < 14){
      printf(", ");
    }
  }
  printf("]\n\n");
   
  // continually loop through all numbers 
  while (1){ 
    swapped = 0;
    printf("Iteration %d:\n", j++); 

    // second, loop through numbers falling ahead 
    for (i = 0; i < 15-1; i++){
      printf("compared #'s: [ %d & %d ] ", list[i], list[i+1]);
      
      // check if next number is lesser than current no
      if (list[i] > list[i+1]){
        temp = list[i];
        list[i] = list[i+1];
        list[i+1] = temp;

        swapped = 1;
        printf(" => swapped\n");
      } else {
        printf(" => none swapped\n");
      }
    }

    // no swap means array is sorted, so break loop. 
    if (swapped == 0){
      break;
    }

    // navigate through all items and print updated list 
    printf("updated list [");
    for (i = 0; i < 15; i++){
      printf("%d", list[i]);
      if (i < 14){
        printf(", ");
      }
    }
    printf("]\n\n");
  }

  // navigate through all items and print finalised list 
  printf("\nfinal list [");
  for (i = 0; i < 15; i++){
    printf("%d", list[i]);
    if (i < 14){
      printf(", ");
    }
  }
  printf("]");

  return 0;
}