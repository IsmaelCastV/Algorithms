#include <iostream>
#include <ctime>
#include <assert.h>
#include "InsertRecur.h"
#include "Insert.h"
using namespace std;

bool SortCheck(int* array, int size);
int Menu();

int main(){

    srand(time(NULL));

    int size;
    bool sorted; 
    string indent= "|";
    //int count = 0;

    cout << "Enter Array Size: ";
    cin >> size;

    int* array = new int[size];

    //TEST ARRAYS
/*     int* array1 = new int[3];

    array1[0] = 9;
    array1[1] = 8;
    array1[2] = 3; 

    int* array2 = new int[3];

    array2[0] = 1;
    array2[1] = 1;
    array2[2] = 1;

    //TEST
    sorted = SortCheck(array1, 3);
    cout << "Sorted Test 1(Expected Value: 0): " << sorted << endl;

    cout << endl;

    sorted = SortCheck(array2, 3);
    cout << "Sorted Test 2 (Expected Value: 1): " << sorted << endl; */
    



    while(1){

        cout << "New Array: ";

        for(int i = 0; i < size; ++i){

            array[i] = (rand() % 100) + 1;

            cout << array[i] << " ";

        }

        cout << endl << endl;

        switch(Menu()){

            case 1:

                Insert(array, size);

            break;

            case 2:
                cout << "Under construction!" << endl;
            break;

            case 3:

                InsertRecur(/*indent,*/ array, size);

            break;

            case 4:
                cout << "Until next time..." << endl;
                exit(1);
            break;
        }

        sorted = SortCheck(array, size);

        cout << "Sorted Array: ";
        for(int i = 0; i < size; ++i){
            cout << array[i] << " ";
        }

        cout << endl;

        cout << " Is Sorted?: ";
        if(sorted)
            cout << "Yes" << endl;
        else
            cout << "No" << endl; 
        //assert(sorted);
        //++count;

    }


    cout << endl;
    cout << "Program Exited Succesfully" << endl;
    cout << endl;

    delete [] array;
    //delete [] array1;
    //delete [] array2;

    return 0;
}

int Menu(){
    int userOption;

    cout << "Sorting Algorithms" << endl;
    cout << "1 - Insert Sort" << endl;
    cout << "2 - Merge Sort" << endl;
    cout << "3 - Recursive Insert Sort" << endl;
    cout << "4 - Quit" << endl;
    
    cout << endl;

    do{

        cout << "Choose a sorting algorithm: ";
        cin >> userOption;

        if(cin.fail()){
            cin.clear();
            cin.ignore();
        }

    }while(userOption < 1 && userOption > 3);

    return userOption;

}

bool SortCheck(int* array, int size){

    for(int i = 0; i < size; ++i){

        if((i + 1) < size)
            if(array[i] > array[i + 1]){
                cout << i  << " " << array[i] << " > " << array[i + 1] << " | False" << endl;
                return false;
        }

    }

    return true;

}