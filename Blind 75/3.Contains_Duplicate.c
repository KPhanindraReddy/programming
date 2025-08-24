/*
Example 1:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

Example 2:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
Result: NO (for 1st variant)
	[-1, -1] (for 2nd variant) 
Explanation: There exist no such two numbers whose sum is equal to the target.
*/

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
