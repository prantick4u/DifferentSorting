#ifndef CUST_QUICK_H
#define CUST_QUICK_H
#include <vector>
#include <iostream>


#include "CustomQuickSort.hpp"
using namespace std;

template <typename T>
void Display(T *arr, size_t sz)
{
	for(int i=0;i<sz;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

template <typename T>
T partition(T arr[], int l, int h)
{
	T pivtElmt =arr[h];
	int smallElmtIdx = l-1;
	T tmp(0);
	for(int j = l;j <h; j++)
	{
		if(arr[j]<=pivtElmt)
		{
			smallElmtIdx++;
			tmp = arr[j];
			arr[j] =arr[smallElmtIdx];
			arr[smallElmtIdx]=tmp;

		}
	}
	smallElmtIdx++;
	tmp = arr[h];
	arr[h] =arr[smallElmtIdx];
	arr[smallElmtIdx]=tmp;


	return smallElmtIdx;

}

template <typename T>
void CustomQuickSort(T arr[], int start, int end)
{
	int pivt(0);
	if (start<end)
	{
		pivt = partition(arr, start, end);

		CustomQuickSort(arr, start, (pivt-1));
		CustomQuickSort(arr, (pivt+1) , end);
	}
}

#endif

