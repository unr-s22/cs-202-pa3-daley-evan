
#ifndef MONEY_H
#define MONEY_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

class Money {

    private:
        int dollars= 0;
        int cents=0;
        int currentBalance=0;
        int all_cents=0;

    public:
        Money();
        explicit Money(const int &m_dollars, const int &m_cents);

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

        Money& operator-=(Money const& rhs) {
            this->all_cents -= rhs.all_cents;
            return *this;
        }

        Money operator-(Money const& rhs) const {
            Money temp = *this;
            return (temp -= rhs);
        }
        
        friend std::ostream &operator<<(std::ostream &os, const Money &money) {
            os << "$" << money.all_cents * 0.01;
            return os;
        }   

        virtual ~Money();
};

#endif
