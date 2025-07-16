#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (true) {
		string cmd;
		vector<string> cmds;
		vector<int> s;
		queue<int> Q;

		while (true) {
			cin >> cmd;
			if (cmd == "QUIT") return 0;
			if (cmd == "END") break;
			cmds.push_back(cmd);
			if (cmd == "NUM") {
				int tmp; cin >> tmp;
				Q.push(tmp);
			}
		}

		int n; cin >> n;
		while (n--) {
			int input; cin >> input;
			s.push_back(input);

			for (int i = 0; i < cmds.size(); i++) {
				cmd = cmds[i];

				long val = 0;

				if (s.size() == 0) {
					cout << "ERROR\n";
					break;
				}

				if (cmd == "NUM") {
					if (!Q.empty()) {
						int num = Q.front(); Q.pop();
						s.push_back(num);
					}
				}

				else if (cmd == "POP") {
					s.pop_back();
				}

				else if (cmd == "INV") {
					int num = s.back();
					s.pop_back();
					s.push_back(num * -1);
				}

				else if (cmd == "DUP") {
					int first = s.back();
					s.push_back(first);
				}

				else if (cmd == "SWP") {
					if (s.size() < 2) {
						cout << "ERROR\n";
						break;
					}
					int first = s.back();
					s.pop_back();
					int second = s.back();
					s.pop_back();
					s.push_back(first);
					s.push_back(second);
				}

				else if (cmd == "ADD") {
					if (s.size() < 2) {
						cout << "ERROR\n";
						break;
					}
					int first = s.back();
					s.pop_back();
					int second = s.back();
					s.pop_back();
					val = first + second;
					if (val > 10e9) {
						cout << "ERROR\n";
						break;
					}
					s.push_back(val);
				}

				else if (cmd == "SUB") {
					if (s.size() < 2) {
						cout << "ERROR\n";
						break;
					}
					int first = s.back();
					s.pop_back();
					int second = s.back();
					s.pop_back();
					val = second - first;
					s.push_back(val);
				}

				else if (cmd == "MUL") {
					if (s.size() < 2) {
						cout << "ERROR\n";
						break;
					}
					int first = s.back();
					s.pop_back();
					int second = s.back();
					s.pop_back();
					val = first * second;
					if (val > 10e9) {
						cout << "ERROR\n";
						break;
					}
				}

				else if (cmd == "DIV") {
					if (s.size() < 2) {
						cout << "ERROR\n";
						break;
					}
					int first = s.back();
					s.pop_back();
					if (first == 0) {
						cout << "ERROR\n";
						break;
					}
					int second = s.back();
					s.pop_back();
					if (second < 0) {
						second *= -1;
					}
					val = second / first;
					if ((first < 0 && second > 0) || (first > 0 && second < 0)) {
						val *= -1;
					}
					s.push_back(val);
				}

				else if (cmd == "MOD") {
					if (s.size() < 2) {
						cout << "ERROR\n";
						break;
					}
					int first = s.back();
					s.pop_back();
					if (first == 0) {
						cout << "ERROR\n";
						break;
					}
					int second = s.back();
					s.pop_back();
					if (second < 0) {
						second *= -1;
					}
					val = second % first;
					if ((first < 0 && second > 0) || (first > 0 && second < 0)) {
						val *= -1;
					}
					s.push_back(val);
				}
			}

			if (s.size() != 1) {
				cout << "ERROR\n";
				break;
			}
			cout << s.back() << "\n";
		}
		cout << "\n";
	}

	return 0;
}