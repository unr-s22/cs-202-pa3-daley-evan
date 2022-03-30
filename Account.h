#ifndef ACCOUNT_H
#define ACCOUNT_H

//#include <iostream>
//#include <string>
//#include <vector>
#include <numeric>
#include <algorithm>
//#include <iomanip>
#include "Money.h"

class Account: public Money {

    private:
        Money m1;
        std::vector<Money> deposits;
        std::vector<Money> withdrawls;
        bool needUpdate;
        

    public:
        Account();
        explicit Account(const Money &m2);

        void makeWithdrawls(Money m) {
            needUpdate = true;
            withdrawls.push_back(m);
        }

        void makeDeposits(Money n) {
            needUpdate = true;
            deposits.push_back(n);
        }

        Money sumDeposits() const {
            Money o;
            auto sum_deposits = std::accumulate(deposits.begin(), deposits.end(), o);
            return sum_deposits;
        }
        
        friend std::ostream &operator << (std::ostream &os, const Account &account) {
            
            os << account.sumDeposits() << std::endl;
            return os;
        }   

        virtual ~Account();
};

#endif
