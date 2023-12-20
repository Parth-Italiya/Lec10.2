/*
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.
Output:

*/
#include<stdio.h>
#include<string.h>
char name(char text){
	return text;
}
	void main(){
	
	char a[100];
	int length=0,i;
	
	printf("Enter name: ");
	gets(a);
	
	for(i=0;i<a[i];i++){
		length++;
	}
	printf("string length is %d",name(length));
}
