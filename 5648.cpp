// 역원소 정렬

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace	std;

long long	strrev(string s, int slen)
{
	char	tmp;

	for (int i = 0; i < slen / 2; i++)
	{
		tmp = s[slen - 1 - i];
		s[slen - 1 - i] = s[i];
		s[i] = tmp;
	}
	return (stoll(s));
}

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;

	cin >> n;
	string	s;
	long long	arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		arr[i] = strrev(s, s.size());
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';
}
