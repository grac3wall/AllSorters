#include <iostream>
#include "InsertionSorter.h"
#include "QuickSorter.h"
#include "BubbleSort.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    ifstream inFS;

    string typeStr;
    string fileStr;
    int counter = 0;
    string placehold;

    fileStr = argv[1];
    typeStr = argv[2];

    if(argc != 3){
        cout << "Usage: SorterMain.exe filename sortType" << endl;
        return 1;
    }

    //open file
    cout << " Opening file " << argv[1] << "." << endl;
    inFS.open(argv[1]);

    if(!inFS.is_open()){
        cout << "Could not open file " << argv[1] << "." << endl;
        return 1;
    }

    cout << "executing " << typeStr << " sort on file " << fileStr << "." << endl;


    while(!inFS.eof()){
        inFS >> placehold;
        counter++;
    }

    cout << counter << " integers in file " << fileStr << "." <<endl;

    BaseSorter A = BaseSorter();
    if(typeStr == "bubble"){
        BubbleSort A;
    } else if(typeStr == "insertion"){
        InsertionSorter A;
    } else if(typeStr == "quick"){
        QuickSorter A;
    } else {
        cout << "invalid sort type entered. \nsort options (case sensitive) >>> " <<< endl;
        cout << "    \"bubble\"\n    \"insertion\"\n    \"quick\" " << endl;
        return 1;
    }

    A.BaseSorter(counter);
    A.sort();
    A.print();




    return 0;
}
