//
// Created by code on 3/27/22.
//

#ifndef CS_202_PA3_DALEY_EVAN_ACCOUNT_H
#define CS_202_PA3_DALEY_EVAN_ACCOUNT_H

#endif //CS_202_PA3_DALEY_EVAN_ACCOUNT_H
#include "Money.h"
#include <vector>
using std::vector;
class account : public Money{
    bool flag = 0;
    std::vector<Money> Deposit(int, int);
    std::vector<Money> Withdrawals(int, int);
    Money initial_balance;
public:
    account(const Money& mon): initial_balance(mon){}

    void makeDeposit(int doll, int cen){
        Deposit(doll, cen);
        flag = 1;
        std::cout<<Deposit<<std::endl;
    }
    void makeWithdrawals(int doll_, int cen_){
        Withdrawals(doll_,cen_);
        flag = 1;
    }


};