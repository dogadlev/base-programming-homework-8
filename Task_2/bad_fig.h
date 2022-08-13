#pragma once
#include <stdexcept>

class BadFig : public std::domain_error 
{public:
	BadFig(const char* message);
};