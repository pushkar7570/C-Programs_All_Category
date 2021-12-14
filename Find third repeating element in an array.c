#include <stdio.h>

int main()
{
    int n , i , j , cnt = 0;
    scanf("%d" , &n);
    
    int arr[n];
    int rep[n];
    for(i=0 ; i<n ; i++)
      scanf("%d" , &arr[i]);
    
    for(i=0 ; i<n ; i++){
        int c=0;
        int temp = arr[i];
        for(j=i+1 ; j<n ; j++){
            
            if(arr[i] == arr[j]){
                c++;
            }
        }
        if(c > 0)
         {
             rep[cnt] = temp;
             cnt++;
         }         
    }
    printf("Third repeating element = %d" , rep[2]);

    return 0;
}
