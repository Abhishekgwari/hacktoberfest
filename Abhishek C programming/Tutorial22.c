#include <stdio.h>

int main()
{
      //char a = 34;
      //char* ptra = &a;
      //printf("%p\n",ptra);
      //ptra++;
      //printf("%p\n" ,ptra+1);
      //printf("%p" ,ptra-2);
      //   return 0;
int arr[] = {1,2,3,4,5,6,67};
printf ("value at position 3 of the array is %d\n,arr[3]");
printf(" the addressof the first element of array is %d \n", &arr[0]);
printf(" the addressof the first element of array is %d \n", arr);
printf(" the addressof the  second element of array is %d \n", &arr[1]);
printf(" the addressof the  second element of array is %d \n", arr+ 1);

printf(" the  value at address the first element of array is %d \n",*( &arr[0]));
printf(" the  value at address the first element of array is %d \n", *(arr));
printf(" the  value at address the  second element of array is %d \n",*( &arr[1]));
printf(" the  value at address the  second element of array is %d \n", *(arr+ 1));
  return 0;
}