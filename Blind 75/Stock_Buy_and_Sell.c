//Method:1
#include <stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int min(int a,int b){
    return (a>b)?b:a;
}
int max_stock(int arr[],int n){
    int mini=arr[0],maxprof=0;
    for(int i=1;i<n;i++){
        int cur_prof=arr[i]-mini;
        maxprof=max(cur_prof,maxprof);
        mini=min(mini,arr[i]);
        
    }
    return maxprof;
}

int main() {
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
  int arr[n];
  printf("enter array elements:");

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}  
int res=max_stock(arr,n);
printf("%d",res);
}




//Method:2
#include<stdio.h>
int main(){
    int n,res=0,i,j,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            max=arr[j]-arr[i];
            if(max >res){
            res=max;
        }
        }
        
    }
    printf("%d",res);
    
    
}
