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

	cout << "输入长："; cin >> a;
	cout << "输入宽："; cin >> b;
	cout << "输入高："; cin >> c;

	box.add(a, b, c);
	int volum = box.vol();
	cout << "体积：" << volum << endl;
	return 0;
}
