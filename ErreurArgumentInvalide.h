#ifndef ARGUMENT_INVALIDE_H
#define ARGUMENT_INVALIDE_H
#include <iostream>

class ErreurArgumentInvalide : public std::invalid_argument {
public:
	ErreurArgumentInvalide(const std::string& message);
};


#endif 