#include <iostream>
#include <string>
#include "main.h"

bool greater_equal_than(const std::string& lhs, const std::string& rhs)
{
	if (lhs.size() < rhs.size()) {
		return (false);
	}
	else if (lhs.size() > rhs.size()) {
		return (true);
	}
	int i = 0;
	int j = 0;

	while (i < lhs.size())
	{
		if (lhs[i] > rhs[i]) {
			return (true);
		}
		else if (lhs[i] < rhs[i]) {
			return (false);
		}
		i++;
	}
	return (true);
}

std::string infinite_div(std::string lhs, std::string rhs)
{
	if (rhs == "0") {
		return ("undefined");
	}
	std::string to_return = "0";
	
	while (greater_equal_than(lhs, rhs))
	{
		lhs = infinite_sub(lhs, rhs);
		to_return = infinite_add(to_return, "1");
	}
	return (to_return);
}