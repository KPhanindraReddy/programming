
#include <stdio.h>

int gcd(int a,int b){
    while(a!=0){
    int temp=a;
    a=b%a;
    b=temp;
    
    } 
    return b;
}
int coprime(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(arr[i],arr[j])==1)
            {
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n,arr[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p=coprime(arr,n);
    printf("%d",p);
}