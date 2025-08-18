// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b ){
    return (*(int*)a)-(*(int*)b);
}

int dup(int arr[],int n){
    int i;
    qsort(arr,n,sizeof(int),cmp);
    for(i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
  int arr[n];
  printf("enter array elements:");

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}  
if(dup(arr,n)!=0){
    printf("Contatains duplicate");
}
else{
    printf("No duplicate");
}
}
