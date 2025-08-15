//Bullish Trend dection acc to monthes

#include<stdio.h>
int bull(int arr[],int inte,int n){
    int i_c=0,r=0;
    if(inte>n){
        return 0;
    }
    
    for(int i=1;i<inte;i++){
        if(arr[i] >arr[i-1]){
            i_c++;
        }
    }
    if(i_c==inte-1){
        r++;
    }
    for(int j=1;j<n-inte+1;j++){
        if(arr[j] >arr[j-1]){  //see for left pair window 
            i_c--;
        }
        int np=j+inte-1;                               //only to compar new pair enter and the beside it before pair alredy compared and store in i_c
        if(arr[np] >arr[np-1]){  
            i_c++;
        }
     if(i_c==inte-1){
        r++;
    }
    }
    return r;
    
}

int main(){
   int n,inte;
   printf("Enter the arr size:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the window size");
   scanf("%d",&inte);
   printf("Enter array elements");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
       
   }
   int res=bull(arr,inte,n);
   printf("the number of bull trends:%d",res);
   
}
