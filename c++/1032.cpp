#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; // 파일 개수의 변수 n
	cin >> n;

	string str[50]; //n을 담을 문자열 배열 str < 50

	for (int i = 0; i < n; i++) {
		cin >> str[i]; //str에 입력값들 순서대로 배열시키기
	}

	char ch; // 출력값 문자 변수 char

	for (int i = 0; i < str[0].length(); i++) {
		ch = str[0][i];
		for (int j = 0; j < n; j++) {
			if (ch != str[j][i]) { // 2차원 배열 행렬 검사(자릿수-열수)
				ch = '?'; //일치하지 않으면 문자열에 '?' 저장
				break;
			}
		}
		cout << ch;
	}
}