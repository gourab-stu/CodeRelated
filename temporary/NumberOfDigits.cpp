#include <iostream>

int numberOfDigits(int num) {
    int n = num, r, count = 0;
    while (n > 0) {
        r = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << n << " has " << numberOfDigits(n) << " digits" << std::endl;
    return 0;
}