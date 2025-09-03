// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
int main() {
    int n,tar,sum,f; 
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array values");
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]);
    }
    printf("enter the target");
    scanf("%d",&tar);
    qsort(arr,n,sizeof(int),cmp);
    int l=0,r=n-1;
    while(l<r){
        sum=arr[l]+arr[r];
        if(sum==tar){
            printf("YES");
             f=1;
            break;
        }
        else if(sum <tar){
            l++;
        }
        else{
            r--;
        }
        
    }
    if(f!=1){
            printf("NO");
        }

    return 0;
}

