#include <iostream>
#include <string>

bool palindrome_checker(std::string word){
    int size = word.length();
    int start = 0;
    int end = size - 1;

    if (size <= 1) { // Handle empty or single-char strings
        return true;
    }

    while(start < end){
        if (word[start] == word[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    std::string my_str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, my_str);

    if (palindrome_checker(my_str)) {
        std::cout << "\"" << my_str << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << my_str << "\" is NOT a palindrome." << std::endl;
    }

    return 0;
}
