#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin;
ofstream fout;

int queen[100000];
int N,cnt;

void Q(int x)
{
	for (int i = 0; i < x; i++)
	{
		if (queen[i] == queen[x] || abs(queen[i] - queen[x]) == abs(i - x))return;
	}

	if (x == N - 1)
	{
		cnt++;
		return;
	}
	
	for (int i = 0; i < N; i++)
	{
		queen[x + 1] = i;
		Q(x + 1);
	}
}

int main()
{
	fin.open("input.txt");
	fout.open("output.txt");

	fin >> N;

	for (int i = 0; i < N; i++)
	{
		queen[0] = i;
		Q(0);
	}
	
	fout << cnt << endl;

	fin.close();
	fout.close();
	return 0;
}