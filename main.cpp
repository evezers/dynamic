#include <iostream>
#include "main.h"
#include "addition.h"

using namespace std;


int main(int argc, char* argv[]){
    cout << "Count of arguments: " << argc << endl;


    for(int i = 0; i < argc; ++i){
        cout << "In " << i <<  " stored: " <<  argv[i] << endl;
    }



    int *numbers = new int[5];

    int numCount = addition(1, 7);

    cout << "How many numbers do you need to store: ";
    cin >> numCount;


    if (numCount > 0){
        tableRecord hh;
        tableRecord *recordPtr = new tableRecord;

        recordPtr->id = 0;
        recordPtr->priority = numCount;

        cout << "priority: " << recordPtr->priority << "\n";

        delete recordPtr;
    }

    int *numbers_dynamic = new int[numCount];

    for (int i = 0; i <= numCount ; ++i ) {
        numbers_dynamic[i] = i;
    }

    cin >> numCount;

    for (int i = 0; i < numCount ; ++i ) {
        cout <<  numbers_dynamic[i] << " ";
    }

    delete[] numbers;
    delete[] numbers_dynamic;
}