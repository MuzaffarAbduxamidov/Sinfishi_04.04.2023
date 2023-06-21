#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

   srand(time(NULL));
   int n,juft=0,toq=0;
   scanf("%d", &n);
   int arr[n];

   for(int i=0; i<n; i++){
     arr[i] = rand()%24-15;
     printf("%d ", arr[i]);
   }
   int son = arr[0];

   for(int i=1; i<n; i++){
     arr[i-1] = arr[i];
   }
   arr[n-1] = son;

   for(int i=0; i<n; i++){
     printf("%d ", arr[i]);
   }
}
