#include "Money.h"

Money::Money() {}

Money::Money(const int &m_dollars, const int &m_cents):dollars{m_dollars}, cents{m_cents} {
    Money::all_cents.push_back((m_dollars*100) + m_cents);
}

Money::~Money() {}