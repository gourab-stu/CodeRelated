#include<iostream>

int fibonacci(int n) {
    if((n == 0) || (n == 1))
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, a=0, b=1, c, choice;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    std::cout << "\t1. Using iteration\n\t2. Using recursion\n\t3. Exit\nEnter choice: ";
    std::cin >> choice;
    switch(choice) {
        case 1: {
            std::cout << n << "th term of the Fibonacci series is: ";
            for(int i = 2; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            std::cout << c << std::endl;
            break;
        }
        case 2: {
            std::cout << n << "th term of the Fibonacci series is: " << fibonacci(n) << std::endl;
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