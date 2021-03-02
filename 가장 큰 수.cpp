#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	string answer = "";

	vector<string> num_str;

	for (auto num : numbers)
	{
		num_str.push_back(to_string(num));
	}

	sort(num_str.begin(), num_str.end(), compare);

	if (num_str[0][0] == '0')	return "0";

	for (auto num : num_str)
		answer += num;

	return answer;
}

int main()
{


	return 0;
}