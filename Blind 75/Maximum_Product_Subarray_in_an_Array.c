// Online C compiler to run C program online
#include <stdio.h>
int maxsubproduct(int arr[],int n){
    int currentproduct=arr[0];
    int bestsolution=arr[0];
    for(int i=0;i<n;i++){
        if(currentproduct<0){
            currentproduct=arr[i];
        }
        else{
            currentproduct*=arr[i];
        }
        if(currentproduct>bestsolution){
            bestsolution=currentproduct;
        }
    }
    return bestsolution;
}
int main() {
   
   int n,i;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
  printf("%d",maxsubproduct(arr,n)); 
}
