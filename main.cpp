#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Money.h"


int main() {
    Money m(100,12);
    Money n(100,11);
    std::cout << m << std::endl;
    std::cout << n << std::endl;

    if (m <= n) {
        std::cout << "Yes" << std::endl;
    }

    else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}