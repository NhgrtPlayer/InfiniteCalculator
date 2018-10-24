#include <iostream>
#include <string>
#include "main.h"

std::string infinite_mul(std::string lhs, std::string rhs)
{
	if (lhs == "0" || rhs == "0") {
		return ("0");
	}
	std::string to_return = "0";
	std::string tmp;
	int i = lhs.size() - 1;
	int j = rhs.size() - 1;
	int save = 0;

	while (j >= 0)
	{
		if (rhs[j] == '0') {
			to_return.append("0");
			j--;
			continue;
		}
		tmp.clear();
		for (int i_tmp = rhs.size() - 1; i_tmp > j; --i_tmp) {
			tmp.insert(0, "0");
		}
		while (i >= 0)
		{
			int left_number = (lhs[i]) - '0';
			int right_number = (rhs[j]) - '0';
			int result = left_number * right_number + save;
			if (result >= 10) {
				save = result / 10;
				result -= 10 * save;
			}
			else {
				save = 0;
			}
			tmp.insert(0, std::to_string(result));
			i--;
		}
		if (save > 0) {
			tmp.insert(0, std::to_string(save));
			save = 0;
		}
		i = lhs.size() - 1;
		to_return = infinite_add(to_return, tmp);
		j--;
	}
	if (save > 0) {
		to_return.insert(0, std::to_string(save));
	}
	
	return (to_return);
}