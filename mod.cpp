#include <iostream>
#include <string>
#include "main.h"

std::string infinite_mod(std::string lhs, std::string rhs)
{
	if (rhs == "0") {
		return ("undefined");
	}
	return (infinite_sub(lhs, (infinite_mul(rhs, (infinite_div(lhs, rhs))))));
}