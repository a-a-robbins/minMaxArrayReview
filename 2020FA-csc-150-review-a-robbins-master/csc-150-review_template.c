/* Ashley Robbins
   CSC 250
   150 Review
   Aug 31, 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMin(int arr[], int size);
int findMax(int arr[], int size);
int findSum(int arr[], int size);
int fillArray(int arr[], int userNum);
int findAvg(int arr[], int size); 
int printArry(int arr[], int size);
// Add additional function protoypes here

int main()
{
  /**
     * HINT: Use dynamic array allocation using the int arr[size]; notation --- don't hardcode size
     */
   srand(time(0));
   int userNum; 
   int i; 
  

  printf("Enter an integer: "); 
  scanf(" %d", &userNum);
  printf("\n");
  
  int userArr[userNum]; 

  fillArray(userArr, userNum);
     
    
  findMax(userArr, userNum); 
  findMin(userArr, userNum); 
  findAvg(userArr, userNum);
  findSum(userArr, userNum);

  printf("\n");

  printArray(userArr, userNum); 
	return 0;
 
}

int findMin(int arr[], int size)
{
   // Add code below and return the min
    int min = 1000;
    int index; 

    for(int i = 0; i < size; i++)
    {
      if(arr[i] < min)
      {
        min = arr[i]; 
        index = i; 
      }
    }
     printf("min: %6d pos: %6d \n", min, index);
  return 0;
  
}

int findMax(int arr[], int size)
{
    // Add code below and return the max
    int max = 0; 
    int index; 

    for(int i = 0; i < size; i++)
    {
      if(arr[i] > max)
      {
        max = arr[i]; 
        index = i; 
      }
    }

  printf("max: %6d pos: %6d\n", max, index);

}

int findSum(int arr[], int size)
{
   int sum = 0; // Add code below and return the sum
    for(int i = 0; i < size; i++)
    {
      sum = sum + arr[i];
    }
  printf("sum: %6d\n", sum);
  return sum; 
}

// Add addition functions here
int fillArray(int userArr[], int userNum)
{
  for(int i = 0; i < userNum; i++)
    {
         int randNum = rand() % 1000 +1; 

      userArr[i] = randNum;
      //printf("%d, " ,userArr[i]); 
    }
  return userArr;
}

int findAvg(int arr[], int size)
{
  int sum = 0; 
  for(int i = 0; i < size; i++)
  {
     sum = sum + arr[i]; 
  }
  int avg = sum/size; 
  printf("avg: %6d\n", avg);
  return avg; 
}
int printArray(int arr[], int size)
{
  printf("Pos   :   Val \n-------------\n");
  for(int i = 0; i < size; i++)
  {
    int position = i;
    printf("%3d   :   %3d \n", position, arr[i]);
  }

}