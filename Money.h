
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
        int all_cents;

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

        Money& operator+=(Money const& rhs) {
            this->all_cents += rhs.all_cents;
            return *this;
        }

        Money operator+(Money const& rhs) const {
            Money temp = *this;
            return (temp += rhs);
        }

        //Money operator- (const Money &rhs) { 
            //return *this;
        //}
        
        friend std::ostream &operator<<(std::ostream &os, const Money &money) {
            os << "$" << money.all_cents * 0.01;
            return os;
        }   
        

        virtual ~Money();
};



#endif
