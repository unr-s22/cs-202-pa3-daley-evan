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
        int i =0;
        int c_deposits=0;
        int c_withdrals=0;
        std::vector<Money> deposits;
        std::vector<Money> withdrawls;
        bool needUpdate_Withdrawls= false;
        bool needUpdate_Deposits= false;
        

    public:
        Account();
        explicit Account(const Money &m2);

        Money get_m1() {
            if (needUpdate_Withdrawls== true){
                return Withdrawls_Update();
            } else if (needUpdate_Deposits== true){
                return Deposits_Update();
            } else{
                return m1;
            }
        }
        int get_c_deposits(){
            return c_deposits;
        }
        int get_c_withdrals(){
            return c_withdrals;
        }

        Money Withdrawls_Update(){
            while(i < c_withdrals) {
                m1 = m1 - withdrawls[i];
                i++;
            }
            return m1;
        }

    Money Deposits_Update(){
        while(i < c_deposits) {
            m1 = m1 + deposits[i];
            i++;
        }
        return m1;
    }

        void makeWithdrawls(Money m) {
            needUpdate_Withdrawls = true;
            c_withdrals++;
            withdrawls.push_back(m);
        }

        void makeDeposits(Money n) {
            needUpdate_Deposits = true;
            c_deposits++;
            deposits.push_back(n);
            //std::cout<<deposits[0]<<std::endl;
        }

        Money sumDeposits() const {
            Money o;
            auto sum_deposits = std::accumulate(deposits.begin(), deposits.end(), o);
            return sum_deposits;
        }
        void get_deposits(){
            i = 0;
            while (i < c_deposits){
                int j =i;
                j++;
                std::cout<<"("<<j<<")" <<" "<<deposits[i]<<std::endl;
                i++;
            }
        }
    void get_Withdrawls(){
        i = 0;
        while (i < c_withdrals){
            int j =i;
            j++;
            std::cout<<"("<<j<<")" <<" "<<withdrawls[i]<<std::endl;
            i++;
        }
    }
        /*
        friend std::ostream &operator << (std::ostream &os, const Account &account) {
            
            os << account.sumDeposits() << std::endl;
            return os;
        }
        */
    friend std::ostream &operator << (std::ostream &os,  Account &account) {
        std::cout<<"--------------------------"<<std::endl;
        os << "Current Balance: "<<account.get_m1() << std::endl;
        std::cout<<"--------------------------"<<std::endl;
        std::cout<<"Number of Deposits: "<< account.get_c_deposits() << std::endl;
        account.get_deposits();
        std::cout<<"--------------------------"<<std::endl;
        std::cout<<"Number of Withdrawals: "<< account.get_c_withdrals() << std::endl;
        std::cout<<"--------------------------"<<std::endl;
        account.get_Withdrawls();
        std::cout<<"--------------------------"<<std::endl;


        return os;
    }



    virtual ~Account();
};

#endif
