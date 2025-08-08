/*
Problem Statement:
Chef has a to-do list containing problems of various difficulty ratings.
As a beginner, Chef should solve only problems with difficulty strictly less than 1000.
Given the difficulty ratings of problems in Chef’s to-do list, determine how many problems
Chef should remove so that only problems with difficulty < 1000 remain.

Input Format:
- The first line contains an integer T, the number of test cases.
- For each test case:
  - The first line contains an integer N, the total number of problems in the to-do list.
  - The second line contains N space-separated integers D1, D2, ..., DN
    representing the difficulty ratings of each problem.

Output Format:
- For each test case, print a single integer — the number of problems Chef must remove.

Constraints:
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000
1 ≤ Di ≤ 5000

Sample Input:
5
3
800 1200 900
4
999 1000 1001 1002
5
1 2 2 2 5000
5
1000 1000 1000 1000 1000
3
900 700 800

Sample Output:
1
3
1
5
0

Explanation:
Test case 1: Remove 1200 → 1 problem removed
Test case 2: Remove 1000, 1001, 1002 → 3 problems removed
Test case 3: Remove 5000 → 1 problem removed
Test case 4: All problems ≥ 1000 → remove all 5
Test case 5: All problems < 1000 → remove none
*/


#include <stdio.h>
#define MAX 1000
int main() {
    int arr[MAX];
int i,j,n,c=0,num;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&num);
    for(j=0;j<num;j++){
        scanf("%d",&arr[j]);
        if(arr[j]>=1000){
            c++;
        }
    }
    printf("\n%d",c);
    c=0;
}

}

