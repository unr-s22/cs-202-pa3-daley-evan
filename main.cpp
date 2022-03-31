//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <iomanip>
#include "Money.h"
#include "Account.h"


int main() {
    /*Money m(100,12);
    Money n(100,11);
    std::cout << m << std::endl;
    std::cout << n << std::endl;

    if (m <= n) {
        std::cout << "Yes" << std::endl;
    }

    else {
        std::cout << "No" << std::endl;
    }*/
    Money initial(300,23);
    Account account(initial);
    Money dep1(100,10);
    account.makeDeposits(dep1);
    std::cout << account<< std::endl;

    
    return 0;
}