#include <iostream>
using namespace std;

int main() {
	char str[10001];
	int cnt = 0;
	int alphabet[26]{ 0, };

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";

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

	cout << "\n�� ���ĺ� �� " << cnt << "\n";
	for (int i = 0; i < 26; ++i) {
		cout << char(i + 97) << " (" << alphabet[i] << ")\t: ";

		for (int j = 0; j < alphabet[i]; ++j) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}