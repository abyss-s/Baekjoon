#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; // ���� ������ ���� n
	cin >> n;

	string str[50]; //n�� ���� ���ڿ� �迭 str < 50

	for (int i = 0; i < n; i++) {
		cin >> str[i]; //str�� �Է°��� ������� �迭��Ű��
	}

	char ch; // ��°� ���� ���� char

	for (int i = 0; i < str[0].length(); i++) {
		ch = str[0][i];
		for (int j = 0; j < n; j++) {
			if (ch != str[j][i]) { // 2���� �迭 ��� �˻�(�ڸ���-����)
				ch = '?'; //��ġ���� ������ ���ڿ��� '?' ����
				break;
			}
		}
		cout << ch;
	}
}