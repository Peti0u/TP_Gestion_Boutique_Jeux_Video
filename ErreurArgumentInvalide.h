#ifndef STOCK_INSUFFISANT_H
#define STOCK_INSUFFISANT_H
#include <iostream>

class ErreurArgumentInvalide : public std::invalid_argument {
public:
	ErreurArgumentInvalide(const std::string& message);
};


#endif // !STOCK_INSUFFISANT_H