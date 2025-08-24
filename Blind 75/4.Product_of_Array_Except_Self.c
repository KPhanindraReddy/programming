/*
238. Product of Array Except Self--LeetCode 
*/
#include <stdio.h>
int display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]); 
    }
}

void parray(int arr[],int n){
    int pre=1,suf=1,pref[n],suff[n],res[n];
    for(int i=0;i<n;i++){
         pref[i]=pre;
        pre*=arr[i];
       
    }
    for(int i=n-1;i>=0;i--){
        suff[i]=suf;
        suf*=arr[i];
        
    }
    for(int i=0;i<n;i++){
     res[i]=pref[i]*suff[i];
    }
    display(res,n);
}


int main() {
   int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
parray(arr,n);
    return 0;
}




//Leet code Solution with same logic

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
        *returnSize = numsSize;   
    
    int suff = 1, pref = 1;
    int sf[numsSize], prf[numsSize], *res;

    res = (int*)malloc(numsSize * sizeof(int));
   
    for(int i=0;i<numsSize;i++){
        prf[i]=pref;
        pref*=nums[i];

    }for(int i=numsSize-1;i>=0;i--){
        sf[i]=suff;
        suff*=nums[i];
        
    }
for(int i=0;i<numsSize;i++){
       res[i]=prf[i]*sf[i];
        
    }

return res;
}
