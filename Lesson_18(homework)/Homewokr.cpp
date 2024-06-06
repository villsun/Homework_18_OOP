#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Max_Value(vector<int> obj)
{
	auto fing_max = [](vector<int> obj) -> int
		{
			if (obj.empty())
			{
				cout << "Error!\n";
				exit(-1);
			}

			/*int element = obj[0];
			for (int i = 1; i < obj.size(); i++)
			{
				if (element < obj[i])
				{
					element = obj[i];
				}
			}
			return element;*/

			return *max_element(obj.begin(), obj.end());
		};

	return fing_max(obj);
}

int main()
{
	vector<int> obj{ 234,567,3,567,4 };
	cout << Max_Value(obj) << endl;

	return 0;
}
