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
        bool needUpdate_Withdrawls= false;
        bool needUpdate_Deposits= false;
        

    public:
        Account();
        explicit Account(const Money &m2);

        Money printacc() {
            if (needUpdate_Withdrawls== true){
                return Withdrawls_Update();
            } else if (needUpdate_Deposits== true){
                return Deposits_Update();
            } else{
                return m1;
            }
        }
        Money Withdrawls_Update(){
            return m1 + withdrawls[0];
        }
    Money Deposits_Update(){
        return m1 + deposits[0];
    }
        void makeWithdrawls(Money m) {
            needUpdate_Withdrawls = true;
            withdrawls.push_back(m);
        }

        void makeDeposits(Money n) {
            needUpdate_Deposits = true;
            deposits.push_back(n);
            //std::cout<<deposits[0]<<std::endl;
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

    friend std::ostream &operator << (std::ostream &os,  Account &account) {

        os << account.printacc() << std::endl;
        return os;
    }



    virtual ~Account();
};

#endif
