// 나이순 정렬

#include <algorithm>
#include <vector>
#include <iostream>// 입출력 가능하게 하는 헤더
using namespace	std;

typedef	struct	s_data
{
	int		age;
	int		idx;
	string	name;
}t_data;


bool	compare(t_data a, t_data b)
{
	if (a.age != b.age)
		return (a.age < b.age);
	return (a.idx < b.idx);
}

int	main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	int n;

	cin >> n;
	vector<t_data>	arr;

	for (int i = 0; i < n; i++)
	{
		t_data	tmp;
		cin >> tmp.age >> tmp.name;
		tmp.idx = i;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < n; i++)
		cout << arr[i].age << ' ' << arr[i].name << '\n';
}
