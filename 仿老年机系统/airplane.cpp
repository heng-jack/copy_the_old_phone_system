#include"airplane.h"

void Airplane_Mode::setting_airplane_mode() {
	cout << "����ģʽ��";
	if (Id::is_airplane_mode) {
		cout << "��\n";
	}
	else cout << "��\n";
	cout << "�Ƿ�������ģʽ\n0 = ��\t1 = ��\n";
	int temp = 0;
	cin >> temp;
	if (temp == 0 || temp == 1) {
		Id::set_is_airplane_mode(temp);
		system("cls");
		cout << "����ģʽ��";
		if (Id::is_airplane_mode) {
			cout << "��\n";
		}
		else cout << "��\n";
		system("pause");
	}
}