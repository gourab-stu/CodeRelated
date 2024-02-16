#include<iostream>

int gcd(int n1, int n2) {
    if(n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}

int main() {
    int n1, n2, choice;
    std::cout << "Enter two numbers to find gcd: ";
    std::cin >> n1 >> n2;
    std::cout << "\t1. Using iteration\n\t2. Using recursion\n\t3. Exit\nEnter choice: ";
    std::cin >> choice;
    switch(choice) {
        case 1: {
            std::cout << "GCD of " << n1 << " and " << n2 << " is: ";
            int min;
            if(n1 <= n2) min = n1;
            else min = n2;
            while(min > 0) {
                if(n1 % min == 0 && n2 % min == 0)
                    break;
                min--;
            }
            std::cout << min << std::endl;
            break;
        }
        case 2: {
            std::cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd(n1, n2) << std::endl;
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