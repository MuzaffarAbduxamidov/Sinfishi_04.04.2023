//Nechta manfiy va nechta musbat 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

   srand(time(NULL));
   int n,manfiy=0,musbat=0;
   scanf("%d", &n);
   int arr[n];

   for(int i=0; i<n; i++){
     arr[i] = rand()%19-9;
//     printf("%d\n", arr[i]);
     if(arr[i]<0){
       arr[i]=0;
       printf("%d", arr[i]);
     }else if(arr[i]>0){
       arr[i]=1;
       printf("%d", arr[i]);
     }
   }
}
