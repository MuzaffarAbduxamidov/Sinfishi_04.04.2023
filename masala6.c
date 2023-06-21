#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

   srand(time(NULL));
   int n,juft=0,toq=0;
   scanf("%d", &n);
   int arr[n];

   for(int i=0; i<n; i++){
     arr[i] = rand()%90+10;
     printf("%\nd",arr[i]);
     printf("Juft:");
     for(int a=1; a<arr[i]; a++){
     if(arr[i]%2==0){
       printf("Juft: %d \n",arr[i]);
     }else if(arr[i]%2==1){
       printf("Toq: %d \n",arr[i]);
     }
   }
}
