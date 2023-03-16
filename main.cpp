#include <iostream>
#include "QuickSorter.h"
#include "InsertionSorter.h"
#include "BubbleSort.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
    ifstream inFS;
    int counter;
    string placeholder;
    string fileStr;
    string typeStr;

    //check corr num command line args
    if(argc != 3){
        cout << "error : incorrect number of command line arguments" << endl;
        cout << "Usage: main.exe filename sort_type" <<endl;
        return 1;//error code
    }

    fileStr = argv[1];
    typeStr = argv[2];

    cout << "Attempting to run " << typeStr << " sort on file " << fileStr << "." << endl;

    cout << "Opening file " << argv[1] << "." << endl;
    inFS.open(fileStr);

    if(!inFS.is_open()){
        cout << "Could not open file " << fileStr << ".";
        return 1;//error code
    }

    //count how many integers in file
    while(!inFS.eof()){
        inFS >> placeholder;
        if(!inFS.fail()){
            counter++;
        }
    }

    if(fileStr == "bubble"){
        BubbleSort A;
    }else if(fileStr == "insertion"){
        InsertionSorter A;
    } else if(fileStr == "quick"){
        QuickSorter A;
    } else {
        cout << "Error : invalid sort type entered >>> \"" << fileStr << "\"." << endl;
        cout << "sorting options (case sensitive): \n    \"bubble\"\n    \"insertion\"\n    \"quick\"" << endl;
        return 1; //error code
    }
    A.BaseSorter(counter);
    A.sort(A.buf[], counter);
    A.print();
    return 0;
}
