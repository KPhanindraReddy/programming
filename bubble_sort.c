// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n,i,j;
printf("enter no elements");
scanf("%d",&n);
int arr[n];
printf("enter elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("sorted elements");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}

}
