#include <iostream>
using namespace std;

int main() {
	char str[10001];
	int cnt = 0;
	int alphabet[26]{ 0, };

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";

	cin.getline(str, 10000, ';');

	for (int i = 0; i < 10000; ++i) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			alphabet[str[i] - 65]++;
			cnt++;
		}
		if (str[i] >= 'a' && str[i] <= 'z') {
			alphabet[str[i] - 97]++;
			cnt++;
		}
	}

	cout << "\n총 알파벳 수 " << cnt << "\n";
	for (int i = 0; i < 26; ++i) {
		cout << char(i + 97) << " (" << alphabet[i] << ")\t: ";

		for (int j = 0; j < alphabet[i]; ++j) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}