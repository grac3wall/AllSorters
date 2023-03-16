#include "QuickSorter.h"
#include <iostream>
#include <string>
using namespace std;


void sort::QuickSorter(int arr[], int end){
    int start = 0;
    end = end - 1;

    if(start >=end){
        return;
    }
    int p = partition(arr,start,end);

    QuickSorter::sort(arr,start,end);
    Quicksorter::sort(arr, p + 1, end);
}

private int partition(int arr[], int start, int end){
    int pivot = arr[start];

    int count = 0;
    for(int i = start + 1; i <= end; i++){
        if(arr[i] <= pivot)
            count++;
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

