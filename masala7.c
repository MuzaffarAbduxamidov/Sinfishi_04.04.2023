#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

   srand(time(NULL));
   int n,tub=0,sum=0;
   scanf("%d", &n);
   int arr[n];

   for(int i=0; i<n; i++){
     arr[i] = rand()%98+2;
     printf("%d ",arr[i]);
     for(int a=1; a<=arr[i]; a++){
        if(arr[i]%a==0)
           tub+=1;
     }
     if(tub==2){
      sum+=1;
     }
   tub=0;
   }
   printf("Tublar soni: %d", sum);
}

