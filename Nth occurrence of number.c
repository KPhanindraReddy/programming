/*  Find the Nth Occurrence of a Number in an Array
Problem Statement: 
Given an array and a number e1, find the Nth occurrence of e1 in the array. If it doesn’t exist, return -1.

Sample Input & Output:
Input:
7
1 4 6 7 6 3 6
6
3

Output:
6 (3rd occurrence of 6 is at index 6)*/


#include<stdio.h>
int main(){
    int arr[10],n,i,count=0,num,occ;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&num,&occ);
    for(i=0;i<n;i++){
        if(arr[i]==num){
            count++;
            if(count==occ){
                printf("%d",i);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
