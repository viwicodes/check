
#include <stdio.h>

int main(void) 
{
  // Length of Array
  int length;
  scanf("%d", &length);

  // Array Creation
  int arr[length];
  for(int i=0;i<length;i++){
    scanf("%d", &arr[i]);
  }

  // Bubble sort
  for(int i=0;i<length;i++){
    for(int j = 0; j<length-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j-1]=temp;
      }
    }
  }

  // Printing Sorted Array
  for(int i=0;i<length;i++){
    printf("%d ", arr[i]);
  }
  

  return 0;
}