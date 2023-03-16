#ifndef INSERTIONSORTER_H_INCLUDED
#define INSERTIONSORTER_H_INCLUDED


#include "BaseSorter.h"
#include <iostream>
using namespace std;

class InsertionSorter::public BaseSorter{
    public:
        void sort();
};

#endif // INSERTIONSORTER_H_INCLUDED
