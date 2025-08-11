/*Selling Sandwiches
Chef sells sandwiches for a living. Each sandwich is sold for 
A
A rupees.

Chef also needs to buy the ingredients to make a sandwich. The sandwich buns cost 
B
B rupees, and the vegetables cost 
C
C rupees. Let us assume that there are no other costs for Chef right now.

What is the profit Chef makes in selling one sandwich? It may be possible that the answer is negative to indicate that Chef makes a loss instead.

Input Format
The first and only line of input contains 
3
3 integers - 
A
,
B
A,B and 
C
C.
Output Format
For each test case, output on a new line the profit or loss Chef makes in selling one sandwich.
*/

#include <stdio.h>

int main() {
	int a,b,c,n;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",a-(b+c));

}

