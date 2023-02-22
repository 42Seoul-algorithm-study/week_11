// 로또

#include <iostream>
using namespace	std;

int	k;
int	numset[13];
int	res[6];
int	used[13];

void	dfs(int depth, int num)
{
	if (depth == 6)
	{
		for (int i = 0; i < 6; i++)
			cout << res[i] << ' ';
		cout << '\n';
		return ;
	}
	for (int i = num; i < k; i++)
	{
		if (!used[i])
		{
			used[i] = 1;
			res[depth] = numset[i];
			dfs(depth + 1, i + 1);
			used[i] = 0;
		}
	}
}

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	while (1)
	{
		cin >> k;
		if (k == 0)
			break ;
		for (int i = 0; i < k; i++)
			used[i] = 0;
		for (int i = 0; i < k; i++)
			cin >> numset[i];
		numset[k] = 0;
		dfs(0, 0);
		cout << '\n';
	}
}
