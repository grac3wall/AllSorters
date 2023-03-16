#include "BubbleSort.h"
#include <iostream>
#include <string>
using namespace std;


    void sort::BubbleSort(int arr[], int n){
        int i, j;
        bool hasSwapped;
        for(int i = 0; i < n-1, i++){
            hasSwapped = false;
            for(j = 0; j < n-i-1;j++){
                if(arr[j] > arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                    hasSwapped = true;
                }
            }
        }
        if(!hasSwapped)
            break;
    };

