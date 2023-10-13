#include <iostream>

int main() {
    int numRows;
    
    std::cout << "Enter the number of rows for the star pattern: ";
    std::cin >> numRows;
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
