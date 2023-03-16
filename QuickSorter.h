#ifndef QUICKSORTER_H_INCLUDED
#define QUICKSORTER_H_INCLUDED

#include "BaseSorter.h"
#include <iostream>
#include <string>
using namespace std;

class QuickSorter::public BaseSorter{
    public:
        void sort();

    private:
        int partition(int, int, int);

};
#endif // QUICKSORTER_H_INCLUDED
