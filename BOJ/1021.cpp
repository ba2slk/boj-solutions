#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	deque<int> DQ;
	int n, m; cin >> n >> m; // n: 큐의 크기 m: 뽑을 숫자 개수

	for (int i = 1; i <= n; i++) { // 1, 2, ... , n 으로 덱 초기화
		DQ.push_back(i);
	}

	int cnt = 0;
	while (m--) {
		int idx; cin >> idx; // idx는 처음 덱에서의 위치. 뽑을 숫자임.
		int tmp = -1; // 변형된 덱에서 해당 원소가 몇 번째인지 저장 위함.

		if (DQ.front() == idx) { // 만약 덱의 front랑 뽑을 숫자랑 같으면 
			DQ.pop_front(); // 뽑고, 
			continue; //아래 코드를 실행하지 않음.
		}

		for (int i = 0; i <  DQ.size(); i++) {// 이제 idx가 현재 덱의 몇 번째 인덱스에 있는지 알아야 함.
			if (DQ[i] == idx) {
				tmp = i;
			}
		}

		if (tmp > DQ.size() / 2) { // 중간 이후면 시계방향 회전
			while (DQ.front() != idx) { // front에 원하는 숫자가 올 때까지
				int last = DQ.back();
				DQ.pop_back();
				DQ.push_front(last);
				cnt++;
			}
		}

		else { // 중간 이전이거나 중간이면 반시계방향 회전
			while (DQ.front() != idx) {
				int first = DQ.front();
				DQ.pop_front();
				DQ.push_back(first);
				cnt++;
			}
		}

		if (DQ.front() == idx) {
			DQ.pop_front();
		}
	}

	cout << cnt;

	return 0;
}