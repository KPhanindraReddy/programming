 // Online C compiler to run C program online//50101
#include <stdio.h>
int main() {
int i, n,found=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            printf("duplicate");
            found=1;
            break;
        }
    }
}
if(!found){
    printf("no duplicate elements ");
}
    return 0;
}
