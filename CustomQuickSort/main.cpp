#include <iostream>
#include "CustomQuickSort.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char const *argv[])
{
	int arr[] = {6,7,3,9,-4,4,5,0,1};
	int sizeidx = sizeof(arr) /sizeof(int);

	std::cout<<"Original :";
	Display(arr,sizeidx);

	sizeidx--;
	CustomQuickSort(arr, 0, (sizeidx));
	sizeidx++;
	std::cout<<"Sorted   :";
	Display(arr,sizeidx);

	return 0;
}
