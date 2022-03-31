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

    //Test cases for relational operators
    Money test1(50,10);
    Money test2(40,10);
    Money test3(50,10);

    std::cout << "Test 1 = $50.10" << std::endl;
    std::cout << "Test 2 = $40.10" << std::endl;
    std::cout << "Test 3 = $50.10" << std::endl;

    std::cout << "Test 1 + Test 2 = " << test1 + test2 << std::endl;
    std::cout << "Test 1 - Test 2 = " << test1 - test2 <<std::endl;

    if (test1 > test2) {
        std::cout << "test1 is greater than test2" << std::endl;
    }
    else {
        std::cout << "test1 is not greater than test2" << std::endl;
    }

    if (test3 >= test1) {
        std::cout << "test3 is greater than or equal to test1" << std::endl;
    }
    else {
        std::cout << "test3 is not greater than test1" << std::endl;
    }

    if (test2 < test1) {
        std::cout << "test2 is less than test1" << std::endl;
    }
    else {
        std::cout << "test2 is not less than test1" << std::endl;
    }

    if (test3 <= test1) {
        std::cout << "test3 is less than or equal to test1" << std::endl;
    }
    else {
        std::cout << "test3 is not less than or equal to test1" << std::endl;
    }

    if (test1 != test2) {
        std::cout << "test1 is not equal to test2" << std::endl;
    }
    else {
        std::cout << "test1 is equal to test2" << std::endl;
    }

    if (test3 == test1) {
        std::cout << "test3 is equal to test1" << std::endl;
    }
    else {
        std::cout << "test3 is not equal to test1" << std::endl;
    }

    return 0;
}