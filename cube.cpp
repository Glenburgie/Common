#include <iostream>
using namespace std;

class cube {
public:
	int hei;
	int len;
	int bre;

	void add(int h ,int l ,int b) {
		hei = h;
		len = l;
		bre = b;
	}
	
	int vol() {
		return hei* len* bre;
	}
};

int main() {
	cube box{};
	int a, b, c;

	cout << "���볤��"; cin >> a;
	cout << "�����"; cin >> b;
	cout << "����ߣ�"; cin >> c;

	box.add(a, b, c);
	int volum = box.vol();
	cout << "�����" << volum << endl;
	return 0;
}
