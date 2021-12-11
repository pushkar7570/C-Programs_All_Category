#include<stdio.h>
int main()
{
   int size;
   scanf("%d" , &size);

   int arr[size];
   int cnt = 0 , i;
   int nonr[n];
   printf("Enter elements into the array: ");
   
   for(i=0 ; i<size ; i++)
     scanf("%d" , &arr[i]);

   for(i=0 ; i<size ;i++){
   
       int j;
       for(j=0 ; j<size ; j++){

           if((arr[i] == arr[j]) && (i != j))
              break;
        }
        if(j == size){    
          nonr[cnt] = arr[i];
          cnt++ ;
        }  
      
    }
    printf("Second non repeating element: %d\n" , nonr[1]);

   return 0;
}
