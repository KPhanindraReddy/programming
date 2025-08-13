// Online C compiler to run C program online
#include <stdio.h>
int stock(int n,int arr[]){
    int i,j,max=arr[0],c=0;
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i])  {
                int k=arr[j]-arr[i];
                if(k>c){
                    c=k;
                }
            }
           
        }
    }
    return c;
}

int main() {
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int r=stock(n,arr);
    printf("%d",r);

    return 0;
}
