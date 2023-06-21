#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

   srand(time(NULL));
   int n,juft=0,toq=0;
   scanf("%d", &n);
   int arr[n];

   for(int i=0; i<n; i++){
     arr[i] = rand()%52-46;
     if(arr[i]%2==0){
       printf("%d", arr[i]);
     }
   }
  // printf("Umumiy juftlar soni->%d\nUmumiy toqlar soni->%d", juft,toq);

}
