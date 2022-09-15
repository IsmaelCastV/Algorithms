//#include <iostream>
//using namespace std;

void InsertRecur(/*string indent,*/ int* array, int size){

    //cout << indent << "n = " << size << endl;

    //Base Case
    if(size <= 1) 
        return;

    //indent += "     |";
    InsertRecur(/*indent,*/ array, size - 1);

    int last = array[size -1];  //tracks the last element in the array
   // cout << indent << "last = " << last << endl;
    int j = size -2;    //tracks the elements being compared to the last element which are < index of last
    //cout << indent << "j = " << j << endl;


        while(j >= 0 && array[j] > last){ //as long as their is elements to the left and the value of the left num is > the last element
            //cout << indent;
            //cout << "j = " << j << " array[j] = " << array[j] << " last = " << last << endl;
            array[j + 1] = array[j]; //shift the element being compared to the right
/*          cout << indent;
            for(int i = 0; i < size; ++i)
                cout << array[i] << " "; 

            cout << endl; 
*/
            j = j - 1;      //decrement
        }

        array[j + 1] = last; // i + 1 because i will decrement before
                                //failing while loop check
/*        cout << indent;
         for(int i = 0; i < size; ++i){
            cout << array[i] << " "; 
        } 

            cout << endl; 
*/
}