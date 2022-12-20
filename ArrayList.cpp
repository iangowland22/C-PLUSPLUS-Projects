/*
 Author: Ian Gowland
 Class: IT180 
 ULID: igowlan
*/

#include <iostream>
#include "ArrayList.h"

using namespace std;


/*
 ArrayList constructor, dynamically allocates memory for the array on heap, 
 sets the capacity to 1 and the element counter to 0
*/
ArrayList::ArrayList(){
    arrCapacity = 1;
    elementCounter = 0;
    arr = new int[1];
}

/*
 THis function takes an integer as an argument and appends it to the 
 ArrayList. If there are unassigned elements in the array, it just appends it
 to the array. If there is not room for the new element, then a temporary
 array is made with double the capacity of the current array. It copies the 
 values from the current array and the new element. 
 
 The older array is deleted (deallocated), and then this temporary array is assigned
 to the array pointer data member of the ArrayList instance. Finally, the dangling 
 pointer for the temporary array is resolved.
*/
void ArrayList::push(int m){
    if(elementCounter < arrCapacity){
        arr[elementCounter] = m;
        elementCounter++;
    } else {
        arrCapacity *= 2;
        int *temp = new int[arrCapacity];
        for(int i = 0; i < elementCounter; i++){
            temp[i] = arr[i];
        }
        temp[elementCounter] = m;
        elementCounter++;
        delete []arr;
        arr = temp;
        temp = nullptr;
    }
}

/*
 This function is very similar to the push function, but it searches through
 the array for an element in the ArrayList, and then it removes it if it is found.

 In the case the argument integer is found, all remaining elements past the found element 
 are shifted to the left so the found element is overwritten. If the capacity is more than 
 twice the number of elements, then a temporary array with half of the current array capacity 
 is made, which then copies the elements in the current array to the temporary array. The current 
 array is deleted and the array pointer is reassigned to the temporary array. 
*/
void ArrayList::erase(int m){
    int i = 0;
    while(arr[i] != m && i < elementCounter){
        i++;
    }

    if(i == elementCounter){
        cout<<"Integer not found in ArrayList."<<endl;
        return;
    } else if(arrCapacity == 1) {
        arr[0] = 0;
        elementCounter--;
    } else {
        while (i < elementCounter){
            arr[i] = arr[i+1];
            i++;
        }
    }
    elementCounter--;

    if(elementCounter < (arrCapacity/2)){
        arrCapacity /= 2;
        int *temp = new int[arrCapacity];
        for(int i = 0; i < elementCounter; i++){
            temp[i] = arr[i];
        }
        delete []arr;
        arr = temp;
        temp = nullptr;
    }
}

// Print ArrayList in proper format
int ArrayList::toString(){
    cout<<"[";
    for(int i = 0; i < elementCounter-1; i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[elementCounter-1]<<"]"<<endl;
    return 0;
}


