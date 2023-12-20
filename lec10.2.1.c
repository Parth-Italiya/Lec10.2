/*
Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2

Output:
The sum of an Array: 18
*/

#include<stdio.h>
int Sum(int num){
	return num;
}
	void main(){
		int n,sum=0,i;

	printf("Enter the Size of Array : ");
	scanf("%d",&n);

	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the Element : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("\nThe Sum of Array is : %d",Sum(sum));
}
		
		
		
	
