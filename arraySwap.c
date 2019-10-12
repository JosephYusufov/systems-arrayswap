#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // Seeding a sequence of random numbers
  srand( time(NULL) );

  // Initializing first array, and counter variables for the for loop
  int ARR_SIZE = 10;
  int array[ ARR_SIZE ];
  int i = 0;

  // For loop to populate the first array.
  for(i; i < ARR_SIZE; i++){
    array[i] = rand();
    array[9] = 0;
    printf("%d \n", array[i]);
  }

  // Setting last element to zero.

  //-----------------------Second Array-----------------------------------------
  int otherArray[ ARR_SIZE ];
  int j = 0;
  int *pointer = &array; // pointer to first element of first array
  
  for(j = 0; j < ARR_SIZE ; j++) { // loop through new array backwards 
    int *second = pointer + (ARR_SIZE - j - 1);
    otherArray[j] = *second;  // and through first array forwards, assigning values
  }

// --------------- Print the Second Array ------------------------
  int k;
  for(k = 0; k < ARR_SIZE; k++){
    printf("%d \n", otherArray[k]);
  }
  // for(j; j < ARR_SIZE; j++){
    
  // }
  return 0;
}
