#include <bits/stdc++.h>
using namespace std;
#define MAX 600001

char dat[MAX];
int prv[MAX], nxt[MAX];
int cur, len;
int avail = 1;

void move_cur_left()
{
	if (prv[cur] != -1) cur = prv[cur];
}

void move_cur_right()
{
	if (nxt[cur] != -1) cur = nxt[cur];
}

void insert(int pos, char item)
{
	dat[avail] = item;
	prv[avail] = pos;
	nxt[avail] = nxt[pos];
	if (nxt[pos] != -1) prv[nxt[pos]] = avail;
	nxt[pos] = avail;
	avail++;
}

void del(int pos)
{
	nxt[prv[pos]] = nxt[pos];
	if (nxt[pos] != -1) prv[nxt[pos]] = prv[pos];
}

void test()
{
	for (int i = 0; i <= len; i++)
	{
		cout << dat[i];
	}
	cout << '\n';
}

void traversal()
{
	int current = nxt[0];
	while (current != -1)
	{
		cout << dat[current];
		current = nxt[current];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	fill(dat, dat + MAX, -1);
	fill(prv, prv + MAX, -1);
	fill(nxt, nxt + MAX, -1);

	string s;
	int m;
	cin >> s >> m;
	cur = 0;

	for (int i = 0; i < s.size(); i++)
	{
		insert(i, s[i]);
		cur++;
	}

	string inst;
	for (int i = 0; i < m; i++)
	{
		cin >> inst;

		if (!inst.compare("L")) {
			move_cur_left();
		}
		else if (!inst.compare("D")) {
			move_cur_right();
		}
		else if (!inst.compare("B")) {
			if (cur != 0)
			{
				del(cur);
				cur = prv[cur];
			}
		}
		else if (!inst.compare("P")) {
			char tmp;
			cin >> tmp;
			insert(cur, tmp);
			cur = nxt[cur];
		}
	}

	traversal();

	return 0;
}

// 커서도 연결 리스트를 타고 움직여야 함.