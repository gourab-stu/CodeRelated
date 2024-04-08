#include<iostream> 
#include<stdlib.h> 
  
class Search { 
    int arr[100], size; 
public: 
    Search() { 
        std::cout << "Enter the size: "; 
        std::cin >> size; 
        if(size == 0) exit(0); 
        std::cout << "Enter all the sorted elements" << std::endl; 
        for(int i = 0; i < size; i++) 
            std::cin >> arr[i]; 
    } 
  
    void LinearSearch(int val) { 
        for(int i = 0; i < size; i++) { 
            if(arr[i] == val) { 
                std::cout << "Search value found" << std::endl; 
                return; 
            } 
        } 
        std::cout << "Search value not found" << std::endl; 
    } 
  
    void BinarySearch(int val) { 
        int low = 0, high = size - 1, mid; 
        while(low <= high) { 
            mid = (low + high) / 2; 
            if(arr[mid] == val) { 
                std::cout << "Search value found" << std::endl; 
                return; 
            } else { 
                if(arr[mid] < val) 
                    low = mid + 1; 
                else 
                    high = mid - 1; 
            } 
        } 
        std::cout << "Search value not found" << std::endl; 
    } 
}; 
  
int main() { 
    Search ob; 
    int value, option; 
    std::cout << "Enter the search value: "; 
    std::cin >> value; 
    std::cout << "1. Perform linear search" << std::endl << "2. Perform Binary Search" << std::endl << "Enter option: "; 
    std::cin >> option; 
    switch (option) { 
        case 1: { 
            ob.LinearSearch(value); 
            break; 
        } 
        case 2: { 
            ob.BinarySearch(value); 
            break; 
        } 
        default: { 
            std::cout << "Enter valid option" << std::endl; 
            break; 
        } 
    } 
    return 0; 
}