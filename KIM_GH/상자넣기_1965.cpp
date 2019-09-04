#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int A[1001];
int N;
int check[1001];

void clear()
{
	for (int i = 1; i <= N; i++)
	{
		check[i] = 0;
	}
}

int LIS(const int s_index)
{
	int &ret = check[s_index];
	if (ret != 0) { return ret; }
	for (int i = s_index + 1; i <= N; i++)
	{
		if (A[i] > A[s_index])
		{
			if (LIS(i) > ret) { ret = LIS(i); }
		}
	}
	++ret;
	return ret;
}

int main()
{

	cin >> N;

	int answer = -987654321;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	for (int i = 1; i <= N; i++)
	{
		if (LIS(i) > answer) { answer = LIS(i); }
		clear();
	}

	cout << answer;

	return 0;
}