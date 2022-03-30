#include "Money.h"

Money::Money() {}

Money::Money(const int &m_dollars, const int &m_cents):dollars{m_dollars}, cents{m_cents} {
    all_cents += ((m_dollars*100) + m_cents);
   // std::cout<<all_cents << " all"<<std::endl;
    //std::cout<<m_dollars << " doll"<<std::endl;
    //std::cout<<m_cents << " cen"<<std::endl;
}

//Not sure if needed
/*void Money::setcurrentBalance(int currentBalance) {
    Money::currentBalance = currentBalance;
}

int Money::getcurrentBalance() const {
    return currentBalance;
} */

Money::~Money() {}

