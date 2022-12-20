/*
 Author: Ian Gowland
 Class: IT180 
 ULID: igowlan
*/

#include <iostream>
#include "ArrayList.h"

using namespace std;

int main(){

    ArrayList test;

    /*
     Add several integers to the ArrayList instance.
     Display the correct format of the toString function and
     the number of elements in the ArrayList object.
     Display the capacity to prove the correct, varying capacity 
     based on the number of elements in the array of the ArrayList.
    */
    
    cout<<endl;
    test.push(1);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(2);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(3);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(4);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(5);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    // Erase the first element 

    cout<<"Deletion of first element: "<<endl;

    test.erase(1);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(6);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    // Erase the last element

    cout<<"Deletion of last element: "<<endl;

    test.erase(6);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(6);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    // Erase the middle element 

    cout<<"Deletion of middle element: "<<endl;

    test.erase(4);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(7);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    cout<<"Reduction in capacity from a larger capacity: "<<endl;

    test.erase(7);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.erase(6);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.erase(5);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.erase(3);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.erase(2);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;
    
    test.push(1);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(2);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    test.push(3);
    test.toString();
    cout<<"Number of elements: "<<test.elementCounter<<endl;
    cout<<"Capacity: "<<test.arrCapacity<<endl<<endl;

    cout<<"Trying to erase an element not within the list: "<<endl;
    test.erase(8);
    cout<<endl;

    
    /*
     Deallocate memory on heap for the array data member
     of the ArrayList instance and resolve the dangling point
    */
    delete [] test.arr;
    test.arr = nullptr;

    return 0;
}