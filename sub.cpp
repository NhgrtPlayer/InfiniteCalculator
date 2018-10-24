#include <iostream>
#include <string>

std::string infinite_sub(std::string lhs, std::string rhs)
{
	std::string to_return;
	int i = lhs.size() - 1;
	int j = rhs.size() - 1;
	int save = 0;
	
	while (i >= 0)
	{
		int left_number = (lhs[i]) - '0';
		int right_number = (rhs[j]) - '0';
		int result = left_number - (right_number + save);
		if (result < 0) {
			save = 1;
			result += 10 * save;
		}
		else {
			save = 0;
		}
		if (save != 0 && i == 0 && j == 0) {
			to_return = infinite_sub(rhs, lhs);
			to_return.insert(0, "-");
			return (to_return);
		}
		else if (!(i == 0 && j == 0 && result == 0)) {
			to_return.insert(0, std::to_string(result));
		}
		i--;
		j--;
		if (i < 0 && j >= 0) {
			lhs.insert(0, "0");
			i++;
		}
		if (j < 0 && i >= 0) {
			rhs.insert(0, "0");
			j++;
		}
	}
	
	return (to_return);
}