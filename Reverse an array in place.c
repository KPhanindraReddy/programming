// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i, n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int start=0,end=n-1;
while(start!=end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;;
}
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}


    return 0;
}
