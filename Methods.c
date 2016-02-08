/*Methods.c
*Author: Alex Schell
 * Basic Sorting methods to demonstrate the visualizer
 *
 */
#include "Methods.h"
#include <stdbool.h>
//helper method to swap two values
void swap(int to, int from) {
	int temp;
	temp=to;
	from=to;
	from=temp;
}//swap

//Quick sort method
void quickSort(int source[], int low, int high) {
	int temp=0,piv=0,j=0,i=0;
	while(low<high) {
		piv=low;
		i=low;
		j=high;
		//finding greater than/less than values around pivot
		while(source[i]<=source[piv]&&i<high){
			i++;
		}//while
		while(source[j]>source[piv]) {
			j--;
		}//while
		//swap if the two values we found
		if(i<j){
			temp=source[i];
			source[j]=source[i];
			source[j]=temp;
		}//if
	}//while low<high
	temp=source[piv];
	source[piv]=source[j];

	//recursion for spit
	quickSort(source,low,j-1);
	quickSort(source,j+1,high);
}//quickSort

//Bubble Sort
void bubbleSort(int source[],int length) {
	int c,i;
	for(c=0; c<length;c++) {
		for(i=1; i<length-c;i++) {
			//swap if last number is greater
			if(source[i-1]>source[i]) {
				swap(source[i-1],source[i]);
			}//if
		}//for
	}//for
}//bubbleSort

//Insert Sort method
void insertSort(int source[],int length) {
	int i,k,temp;
	//run for length of array
	for(i=1;i<length;i++) {
		temp=source[i];
		k=i-1;
		//compare source and
		while(temp<source[k]&&k>=0) {
			source[k+1]=source[k];
			k--;
		}//while
		source[k+1]=temp;
	}//for
}//insert sort

//Bogo Sort (Why.)
void bogoSort(int source[], int length) {


}//bogoSort
