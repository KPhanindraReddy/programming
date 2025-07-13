// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i, n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int lar=arr[0],small=arr[0];
for(i=1;i<n;i++){
    if(arr[i]<small){
        small=arr[i];
    }
    if(arr[i]>lar){
        lar=arr[i];
    }
    
}
printf("lar:%d",lar);
printf("small:%d",small);
    return 0;
}
