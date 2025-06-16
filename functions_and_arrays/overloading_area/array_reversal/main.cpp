#include <iostream>
#include <algorithm> // Required for std::swap

template <typename T>
void print_array(T* arr, int size){
    std::cout << "[";
    for(int i = 0; i< size; i++){
        std::cout << arr[i] << (i == size-1? "":", ");
    }
    std::cout << "]" << std::endl; // Added endl for cleaner output on GitHub
}

template <typename T>
void reverse_array(T* arr, int size){
    int start = 0;
    int end = size -1;

    while (start < end){
        std::swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main() {
    int my_arr[] = {1,4,5,9,12};
    int size = sizeof(my_arr)/sizeof(my_arr[0]);

    std::cout << "Initially the array is " << std::endl;
    print_array(my_arr,size);

    reverse_array(my_arr,size);
    std::cout << "The reversed array is " << std::endl;
    print_array(my_arr,size);

    return 0;
}
