#include<iostream>

int fact(int n) {
    if((n == 1) || (n == 0))
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n, f = 1, choice;
    std::cout << "Enter the number to find factorial: ";
    std::cin >> n;
    std::cout << "\t1. Using iteration\n\t2. Using recursion\n\t3. Exit\nEnter choice: ";
    std::cin >> choice;
    switch(choice) {
        case 1: {
            std::cout << n << " ! = ";
            for(int i = n; i >= 1; i--) {
                f = f * i;
            }
            std::cout << f << std::endl;
            break;
        }
        case 2: {
            std::cout << n << " ! = " << fact(n) << std::endl;
            break;
        }
        case 3: {
            break;
        }
        default: {
            std::cout << "INVALID OPTION" << std::endl;
            break;
        }
    }
    std::cout << "END OF PROGRAM" << std::endl;
    return 0;
}