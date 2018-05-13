// ============================================================================
// File: symarray.c
// ============================================================================
// Programmer: Therese Obara
// Date: 03/15/2018
// Class: CSCI 223 ("C Programming for Mathematics and Science")
// Time: T/Th 4:30pm
// Instructor: Prof. Edwards
// Project: HW10
//
// Description:
//      This program that calls the function SymArray that takes as input the
//      base address of an array of ints and the number of elements in the
//      array. The function will return a value of one if the array is
//      symmetrical, zero if not. (An array is symmetrical if its first element
//      is equal to its last element, its second element equal to the
//      next-to-the-last element, etc.) However, the function can only use
//      pointers to make the determination, you cannot use the subscript
//      operator.
//
// ============================================================================


#include <stdio.h>
#include <stdlib.h>

// ============ main ===========================================================
//
// =============================================================================

int main(void)
{
  auto int arrayInts[];
  auto int numInts;
  auto int index;
  auto int symmetry;
  
  printf("How big should the array of ints be: ");
  scanf("%d", &numInts);
  if(scanf != 1)
    {
    printf("Error reading integer...");
    exit(EXIT_FAILURE);
    }
  
  for(index = 0; index < numInts; ++index)
    {
    printf("Index %d: ", index + 1);
    scanf("%d", arrayInts[index]);
    }
    
  symmetry = SymArray(arrayInts, numInts);
  
  if(symmetry != NULL)
    {
    printf("The array is symmetrical);
    }
   
   else
    {
    printf("The array is not symmetrical);
    }
    
    return 0;
 } //end of main
 
 
// ============ SymArray ========================================================
//
// ==============================================================================

int SymArray (int array, int elements)
{
  auto int begin = 0;
  auto int last = elements;
  
  while(begin < last)
      {
       if( *array(begin) == *array(last) )
          {
          ++begin
          --last;
          }
       else
          {
          return NULL;
          }
      } 
      
  return 1;
  
 } //end of SymArray
  
