#include <iostream>
#include "CStrArray.h"

int main() {
    srand(time(0));
    // Create a CStrArray with a specified length
    int arrayLength = 5; // You can change this value
    CStrArray strArray(arrayLength);
    CStr searchStr(strArray[1]);

    // Output the initial unsorted array
    std::cout << "Unsorted Array:" << std::endl;
    std::cout << strArray << std::endl;

    // Sort the array by length
    strArray.sort_by_length();
    std::cout << "Sorted by Length:" << std::endl;
    std::cout << strArray << std::endl;

    // Sort the array by content
    strArray.sort_by_content();
    std::cout << "Sorted by Content:" << std::endl;
    std::cout << strArray << std::endl;



    // Check if a specific string exists in the sorted array
    int index = strArray.bin_search(searchStr);

    if (index != -1) {
        std::cout << "String found at index: " << index << std::endl;
    }
    else {
        std::cout << "String not found in the array." << std::endl;
    }

    return 0;
}