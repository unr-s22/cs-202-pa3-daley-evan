#include "Account.h"

Account::Account() {}

Account::Account(const int &dollars1, const int &cents1):Money{dollars1, cents1} {}

Account::~Account() {}