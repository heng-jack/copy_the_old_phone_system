#include"airplane.h"

void Airplane_Mode::setting_airplane_mode() {
	cout << "飞行模式已";
	if (Id::is_airplane_mode) {
		cout << "开\n";
	}
	else cout << "关\n";
	cout << "是否开启飞行模式\n0 = 否\t1 = 是\n";
	int temp = 0;
	cin >> temp;
	if (temp == 0 || temp == 1) {
		Id::set_is_airplane_mode(temp);
		system("cls");
		cout << "飞行模式已";
		if (Id::is_airplane_mode) {
			cout << "开\n";
		}
		else cout << "关\n";
		system("pause");
	}
}