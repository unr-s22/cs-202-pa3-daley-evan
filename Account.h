#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iomanip>
#include "Money.h"

class Account: public Money {

    private:
        std::vector<Money> deposits;
        std::vector<Money> withdrawls;
        bool needUpdate;
        

    public:
        Account();
        explicit Account(const int &dollars1, const int &cents1);

        void makeWithdrawls(Money m) {
            needUpdate = true;
            withdrawls.push_back(m);
        }

        void makeDeposits(Money n) {
            needUpdate = true;
            deposits.push_back(n);
        }
        
        friend std::ostream &operator << (std::ostream &os, const Account &account) {
            Money o;
            if (account.needUpdate == true) {
                os << std::accumulate(account.deposits.begin(), account.deposits.end(), o) << std::endl;
	            
            }
            return os;
        }   

        virtual ~Account();
};

#endif
