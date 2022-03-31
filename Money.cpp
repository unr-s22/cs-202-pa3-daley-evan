#include "Money.h"

Money::Money() {}

Money::Money(const int &m_dollars, const int &m_cents):dollars{m_dollars}, cents{m_cents} {
    all_cents += ((m_dollars*100) + m_cents);
}

Money::~Money() {}

