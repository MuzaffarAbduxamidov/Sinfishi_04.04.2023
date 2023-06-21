#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

   srand(time(NULL));
   int n,juft=0,toq=0;
   scanf("%d", &n);
   int arr[n];

   for(int i=0; i<n; i++){
     arr[i] = rand()%19-9;
     if(arr[i]%2==0){
       juft+=arr[i];
     }else if(arr[i]%2==1){
       toq+=arr[i];
     }
   }
   printf("Umumiy juftlar soni->%d\nUmumiy toqlar soni->%d", juft,toq);

}
