// Online C compiler to run C program online
#include <stdio.h>
int f(int n){
     static int dp[100]={0};
    if(n<=2){
        return n;
    }
    if(dp[n-1]==0){
        dp[n-1]=f(n-1);
    }
    if(dp[n-2]==0){
        dp[n-2]=f(n-2);
    }
    return dp[n-1]+dp[n-2];
}

int main() {
  
   int n;
  
   scanf("%d",&n);
   for(int i=0;i<n;i++) printf("%d..",f(i));

    return 0;
}
