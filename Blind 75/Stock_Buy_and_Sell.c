//Method:1
//b method
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


//Method:2
