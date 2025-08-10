// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
/*
if string
int compare_strings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

qsort(names, n, sizeof(char *), cmp);
*/
int main() {
    int n,i;
    scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
       
   }
   printf("before sort:");
    for(i=0;i<n;i++){
   
       printf("%d",arr[i]);
   }
   qsort(arr,n,sizeof(int),cmp);
   printf("aftersort:");
    for(i=0;i<n;i++){
   
       printf("%d",arr[i]);
   }
   
   

    return 0;
}
