// 카드

#include <iostream>
#include <algorithm>
using namespace	std;

long long	find_same_arg_num(long long *arr, int len)
{
	int	numlen = -1;
	long long	num = -1;
	int i = 0;

	if (len == 1)
		return (1);
	while(i < len - 1)
	{
		int	j = i;
		while (++j < len)
		{
			if (arr[i] != arr[j])
				break ;
		}
		// cout << "i:" << i << " j:" << j << '\n';
		if (numlen < j - i)
		{
			numlen = j - i;
			num = arr[i];
		}
		i = j;
		// cout << "numlen:" << numlen << " num:" << num << '\n';
	}
	return (num);
}


int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;

	cin >> n;
	long long	arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	// for (int i = 0; i < n; i++)
	// 	cout << arr[i] << '\n';
	cout << find_same_arg_num(arr, n);
}

