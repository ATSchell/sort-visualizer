/*
 * Author:Alex Schell
 * Methods.h
 *  Created on: Feb 6, 2016
 *  Header File for Basic sorting methods
 */

#ifndef METHODS_H_
#define METHODS_H_
//Bubble sorting
void bubbleSort(int source[],int length);
//insert sorting
void insertSort(int source[],int length);
//selection sorting
void selectSort(int source[],int length);
//quick sorting
void quickSort(int source[],int low,int high);
//Bogo sorting
void bogoSort(int source[],int length);
#endif /* METHODS_H_ */
