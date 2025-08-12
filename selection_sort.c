// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n,i,j;
printf("enter no elements");
scanf("%d",&n);
int arr[n],min;
printf("enter elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    min=i;
    for(j=i+1;j<n;j++){
        if(arr[min] >arr[j]){
            min=j;
        }
        
    }
    if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
printf("sorted elements");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}

}
