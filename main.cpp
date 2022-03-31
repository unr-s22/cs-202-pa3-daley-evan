#include "Money.h"
#include "Account.h"

int main() {

    Money initial(300,23);
    Account account(initial);
    std::cout << account << std::endl;

    Money dep1(200,0);
    Money dep2(300,24);
    Money dep3(501,22);
    account.makeDeposits(dep1);
    account.makeDeposits(dep2);
    account.makeDeposits(dep3);
    std::cout << account << std::endl;

    Money with1(300,10);
    Money with2(201,34);
    account.makeWithdrawls(with1);
    account.makeWithdrawls(with2);
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