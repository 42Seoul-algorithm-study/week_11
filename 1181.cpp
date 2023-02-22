// 단어 정렬

#include <algorithm>
#include <iostream>// 입출력 가능하게 하는 헤더
using namespace	std;

int	compare(string s1, string s2)
{
	if (s1.size() != s2.size())
		return (s1.size() < s2.size());
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] < s2[i]);
	}
	return 0;
}


int	main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	int	n;

	cin >> n;
	string	s[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	sort(s, s+ n, compare);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == s[i + 1])
			continue;
		cout << s[i] << '\n';
	}
}
