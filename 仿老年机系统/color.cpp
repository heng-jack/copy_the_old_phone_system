#include"color.h"

void Console_Color::setting_console_color_id() {
	cout << "0 = ��ɫ       8 = ��ɫ\n";
	cout << "1 = ��ɫ       9 = ����ɫ\n";
	cout << "2 = ��ɫ       10= ����ɫ\n";
	cout << "3 = ǳ��ɫ     11= ��ǳ��ɫ\n";
	cout << "4 = ��ɫ       12= ����ɫ\n";
	cout << "5 = ��ɫ       13= ����ɫ\n";
	cout << "6 = ��ɫ       14= ����ɫ\n";
	cout << "7 = ��ɫ       15= ����ɫ\n";
/*0 = ��ɫ       8 = ��ɫ
  1 = ��ɫ       9 = ����ɫ
  2 = ��ɫ       A = ����ɫ
  3 = ǳ��ɫ     B = ��ǳ��ɫ
  4 = ��ɫ       C = ����ɫ
  5 = ��ɫ       D = ����ɫ
  6 = ��ɫ       E = ����ɫ
  7 = ��ɫ       F = ����ɫ*/
	int bid = 0;
	int tid = 7;
	cout << "�����뱳����ɫ����:\t";
	cin >> bid;
	cout << "������������ɫ����:\t";
	cin >> tid;
	//���������ɫ��������ɫ����ͬ�Ľ��޷������Ķ�������������ʾ��������
	if (bid == tid) {
		cout << "������ɫ��������ɫһ�£����Զ�ע�����θ��ġ�������" << endl;
		system("pause");
		return;
	}
	//�����Ƿ�ȷ���޸ĵ���ʾ

	cout << "�Ƿ�ȷ��һ�¸���\n";
	cout << "������ɫ:\t";
	switch (bid) {
	case 0:
		cout << "��ɫ\n";
		break;
	case 1:
		cout << "��ɫ\n";
		break;
	case 2:
		cout << "��ɫ\n";
		break;
	case 3:
		cout << "ǳ��ɫ\n";
		break;
	case 4:
		cout << "��ɫ\n";
		break;
	case 5:
		cout << "��ɫ\n";
		break;
	case 6:
		cout << "��ɫ\n";
		break;
	case 7:
		cout << "��ɫ\n";
		break;
	case 8:
		cout << "��ɫ\n";
		break;
	case 9:
		cout << "����ɫ\n";
		break;
	case 0xA:
		cout << "����ɫ\n";
		break;
	case 0xB:
		cout << "��ǳ��ɫ\n";
		break;
	case 0xC:
		cout << "����ɫ\n";
		break;
	case 0xD:
		cout << "����ɫ\n";
		break;
	case 0xE:
		cout << "����ɫ\n";
		break;
	case 0xF:
		cout << "����ɫ\n";
		break;
	default:
		break;
	}
	cout << "������ɫ:\t";
	switch (tid) {
	case 0:
		cout << "��ɫ\n";
		break;
	case 1:
		cout << "��ɫ\n";
		break;
	case 2:
		cout << "��ɫ\n";
		break;
	case 3:
		cout << "ǳ��ɫ\n";
		break;
	case 4:
		cout << "��ɫ\n";
		break;
	case 5:
		cout << "��ɫ\n";
		break;
	case 6:
		cout << "��ɫ\n";
		break;
	case 7:
		cout << "��ɫ\n";
		break;
	case 8:
		cout << "��ɫ\n";
		break;
	case 9:
		cout << "����ɫ\n";
		break;
	case 0xA:
		cout << "����ɫ\n";
		break;
	case 0xB:
		cout << "��ǳ��ɫ\n";
		break;
	case 0xC:
		cout << "����ɫ\n";
		break;
	case 0xD:
		cout << "����ɫ\n";
		break;
	case 0xE:
		cout << "����ɫ\n";
		break;
	case 0xF:
		cout << "����ɫ\n";
		break;
	default:
		break;
	}
	cout << "1 = ��		0 = ��\n";
	int temp = 1;
	cin >> temp;
	if (temp == 1) {
		Id::set_background_color_id(bid);
		Id::set_text_color_id(tid);
	}
	else if (temp == 0) return;
	else {
		cout << "������󣬽��Զ�ע�����ġ�������" << endl;
		return;
	}

}