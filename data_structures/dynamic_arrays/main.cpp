#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size for the array: ";
    cin >> size; // Assume user enters a valid positive integer

    // Allocates memory for an integer array of a certain size and sets a pointer to it
    int* ptr = new int[size];

    for(int i = 0; i < size; i++){
        int num_to_insert;
        cout << "Enter the num for " << i << " position: ";
        cin >> num_to_insert; // Assume user enters a valid integer
        ptr[i] = num_to_insert;
    }

    // Display the array
    cout << "[";
    for(int j = 0; j < size; j++){
        cout << ptr[j] << (j == size - 1 ? "" : ", "); 
    cout << "]" << endl;

    // Deallocate the dynamically allocated memory
    delete[] ptr;
    ptr = nullptr; 

    return 0;
}
