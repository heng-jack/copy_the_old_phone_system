#include"games.h"

void Games::show_type_01() {
	cout << "#############################################" << endl;
	cout << "                   ��Ϸ                      " << endl;
	cout << "#############################################" << endl;
	cout << "##############   00--����     ###############" << endl;
	cout << "##############   01--������   ###############" << endl;
	cout << "#############################################" << endl;
	cout << "#############################################" << endl;
	cout << "�����:" << endl;
}
void Games::show_type_02() {
	cout << "*********************************************" << endl;
	cout << "                   ��Ϸ                      " << endl;
	cout << "*********************************************" << endl;
	cout << "**************   00--����     ***************" << endl;
	cout << "**************   01--������   ***************" << endl;
	cout << "*********************************************" << endl;
	cout << "*********************************************" << endl;
	cout << "�����:" << endl;
}
void Games::show_type_03() {
	cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
	cout << "                   ��Ϸ                      " << endl;
	cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
	cout << "/-/-/-/-/-/-/-   00--����     /-/-/-/-/-/-/-/" << endl;
	cout << "/-/-/-/-/-/-/-   01--������   /-/-/-/-/-/-/-/" << endl;
	cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
	cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
	cout << "�����:" << endl;
}
void Games::guess_number() {
	srand((unsigned int)time(NULL));
	while (true) {
		cout << "����:\t" << guess_number_points << endl;
		int rand_num = rand() % 100;
		int guess = -1;
		int add_points = 0;
		bool is_success = false;		//��¼�²��״̬
		for (int i = 0; i < 5; i++) {
			cout << "����5�λ��ᣬ���ķ�Χ��0~99" << endl;
			cout << "���ĵ�" << i + 1 << "�β²��ǣ�" << endl;
			cin >> guess;
			if (guess == rand_num) {
				is_success = true;
				add_points = 5 - i;
				cout << "��ϲ���¶���" << endl;
				cout << "����" << add_points << "��" << endl;
				guess_number_points += add_points;
				break;					//�¶��˾�������
			}
			else if(guess > rand_num){
				cout << "�е��´���Ӵ \n >_< \n����Ѽ\n@..@\n" << endl;
				//system("pause");
			}
			else if(guess < rand_num){
				cout << "�е���С��Ӵ \n >_< \n����Ѽ\n@..@\n" << endl;
				//system("pause");
			}
		}
		if (!is_success) {
			system("cls");
			cout << "���������꣬����Ҫ���٣��´ξͻ�ɹ���\n" << endl;
		}
		cout << "________________________________" << endl;
		cout << "����:\t" << guess_number_points << endl;
		cout << "________________________________" << endl;
		cout << "�Ƿ�Ҫ������Ϸ" << endl;
		bool temp = false;
		cout << "0 = ��\t1 = ��" << endl;
		cin >> temp;
		if (!temp) break;
		else system("cls");

	}
	//����game.heng�ļ��л���
	//�����е��ļ�����ͳһ����
	guess_number_str = GAME_01_PONIT;
	guess_number_str += " ";
	guess_number_str += to_string(guess_number_points);
}

void Games::write_str() {
	ofstream ofs(FILE_NAME);
	if (ofs.is_open()) {
		ofs << guess_number_str;
		ofs.close();
	}
	else cout << "�ļ��޷���" << endl;
}