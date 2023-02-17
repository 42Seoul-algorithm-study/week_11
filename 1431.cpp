//

#include <iostream>
#include <cstring>

using namespace	std;
int	n;

// bool	comparelen(string a, string b)
// {
// 	return (a.size() < b.size());
// }

// bool	comparesum(string a, string b)
// {
// 	int	suma, sumb;

// 	for (int i = 0; i < a.size(); i++)
// 	{
// 		if (a[i] > '0' && a[i] < '9')
// 			suma += a[i] - '0';
// 	}
// 	for (int i = 0; i < b.size(); i++)
// 	{
// 		if (b[i] > '0' && b[i] < '9')
// 			sumb += b[i] - '0';
// 	}
// 	return (suma < sumb);
// }

bool	sort_ascii(char a, char b)
{
	if (isdigit(a) && isdigit(b))
		return (a < b);
	else if (isdigit(a))
		return (1);
	else if (isdigit(b))
		return (0);
	else
		return (a < b);
}

bool	compareascii(string a, string b)
{
	if (a.size() != b.size())
		return (a.size() < b.size());
	int	suma, sumb;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > '0' && a[i] < '9')
			suma += a[i] - '0';
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] > '0' && b[i] < '9')
			sumb += b[i] - '0';
	}
	if (suma != sumb && suma && sumb)
		return (suma < sumb);
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] != b[i])
			return (sort_ascii(a[i], b[i]));
	}
	return (1);
}

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);
	string	s[51];

	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> s[i];
	// sort(s, s + n, comparelen);
	// for (int i = 0; i < n - 1; i++)
	// {
	// 	int j = i;
	// 	while (++j < n && s[i].size() == s[j].size()) // 길이가 다른 부분 찾으면
	// 		;
	// 	sort(&s[i], &s[j], comparesum);
	// 	i = j;
	// }
	sort(s, s + n, compareascii);
	for (int i = 0; i < n; i++)
		cout << s[i] << '\n';
}

