#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

int reverseInteger(int num) {
    int reversed = 0;
    int sign = (num < 0) ? -1 : 1;
    num = std::abs(num);

    while (num != 0) {
        int digit = num % 10;
        // Check for overflow before it happens
        if (reversed > (std::numeric_limits<int>::max() - digit) / 10) {
            std::cerr << "Overflow occurred!" << std::endl;
            return 0;
        }
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed * sign;
}

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    int reversedNum = reverseInteger(num);
    
    std::cout << "Reversed integer: " << reversedNum << std::endl;
    
    return 0;
}


