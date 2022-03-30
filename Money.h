
#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

class Money {

    private:
        int dollars;
        int cents;
        int currentBalance;
        std::vector<int> all_cents;

    public:
        Money();
        explicit Money(const int &m_dollars, const int &m_cents);

        //not sure if needed
        //void setcurrentBalance(int currentBalance);
        //int getcurrentBalance() const;

        bool operator< (const Money &rhs) const {
		    return all_cents < rhs.all_cents;
	    }

        bool operator> (const Money &rhs) {

            return all_cents > rhs.all_cents;
        }

        bool operator<= (const Money &rhs) {
            return !(all_cents > rhs.all_cents);
        }

        bool operator>= (const Money &rhs) {
            return !(all_cents < rhs.all_cents);
        }

        bool operator!= (const Money &rhs) {
            return !(all_cents == rhs.all_cents);
        }

        bool operator== (const Money &rhs) {
            return all_cents == rhs.all_cents;
        }

        //Needs fixing
        int operator+ (const Money &rhs) {
            for (auto i : all_cents) {
                return all_cents[i] += rhs.all_cents[i];
            }
        }

        //Money operator- (const Money &rhs) {
            //return *this;
        //}

        auto operator*(const Money &rhs) {
            for (auto i : all_cents) {
                return all_cents[i] * rhs.all_cents[i];
            }
        }

        friend std::ostream &operator<<(std::ostream &os, const Money &money) {
            for (auto i : money.all_cents) {
                std::cout << std::fixed;
                os << "$" << std::setprecision(2) << i*0.01;
	            return os;
            } 
        }   
        

        virtual ~Money();
};



#endif
