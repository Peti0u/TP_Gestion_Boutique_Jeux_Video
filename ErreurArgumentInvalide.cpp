#include "ErreurArgumentInvalide.h"
#include <string>

ErreurArgumentInvalide::ErreurArgumentInvalide(const std::string& message)
	: std::invalid_argument(message) {}