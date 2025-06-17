#include <iostream>  
#include <algorithm> 


using namespace std;

int main() {

    int my_Arr_original[6] = {1,4,5,2,6,3}; // Keep an original copy for multiple cases
    int size = 6;

    // Case 1: Sort in Ascending Order
    

    // Create a working copy for ascending sort
    
    
    int ascending_Arr[6];
    for (int i = 0; i < size; ++i) {
        ascending_Arr[i] = my_Arr_original[i]; // Copy from original
    }


    cout << "--- Original Array ---" << endl;
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << ascending_Arr[i] << (i == size - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    // defining the sorting lambda function (for default ascending order)
    auto sort_ascending = [&ascending_Arr, size]() {
        sort(ascending_Arr, ascending_Arr + size);
    };

    // calling the sorting lambda function
    sort_ascending();

    // after sorting (in ascending order)
    cout << "--- Sorted Ascending ---" << endl;
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << ascending_Arr[i] << (i == size - 1 ? "" : ", ");
    }
    cout << "]" << endl;


    //Case 2: Sort in Descending Order 

    // Create another copy for descending sort so original is preserved
    int descending_Arr[6];
    
    
    for (int j = 0; j < size; j++){
        descending_Arr[j] = my_Arr_original[j]; 
    }


    // defining the sorting lambda function for DESCENDING order
    // 'a > b' means 'a' should come before 'b' if 'a' is greater, which is descending.
    auto sort_descending = [&descending_Arr, size]() {
        sort(descending_Arr, descending_Arr + size, [](int a, int b) {
            return a > b; // Custom comparator for descending order
        });
    };

    // calling the sorting lambda function
    sort_descending();

    // after sorting descending
    cout << "--- Sorted Descending ---" << endl;
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << descending_Arr[i] << (i == size - 1 ? "" : ", ");
    }
    cout << "]" << endl;





    return 0;
}
