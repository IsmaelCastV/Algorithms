void Insert(int* array, int size){

    for(int j = 1; j < size; ++j){  //start at the second element
        int key = array[j];     //temp keeper
        int i = j - 1;              //second loop variable

        while(i >= 0 && array[i] > key){ //i is within array & key is less
            array[i + 1] = array[i];
            i = i - 1;      //decrement
        }

        array[i + 1] = key; // i + 1 because i will decrement before
                                //failing while loop check

    } 

}