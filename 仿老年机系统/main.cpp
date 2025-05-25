#include<iostream>
#include"head.h"
#include"desktop.h"
#include"menu.h"
#include"setting.h"
#include"theme.h"
#include"color.h"
#include"airplane.h"
#include"games.h"

using namespace std;

int Id::show_type_id = 1;
//int show_type_id = 1;
int Id::text_color_id = 7;
int Id::background_color_id = 0;
bool Id::is_airplane_mode = 0;
/*0 = ��ɫ       8 = ��ɫ
  1 = ��ɫ       9 = ����ɫ
  2 = ��ɫ       A = ����ɫ
  3 = ǳ��ɫ     B = ��ǳ��ɫ
  4 = ��ɫ       C = ����ɫ
  5 = ��ɫ       D = ����ɫ
  6 = ��ɫ       E = ����ɫ
  7 = ��ɫ       F = ����ɫ*/

//����������еı�Ҫ�ļ�
void file_check_make();

int main() {
	//��������ļ�
	file_check_make();
	/*���еĶ���*/
	Desktop desktop;
	Menu menu;
	Setting setting;
	Theme theme;
	Console_Color console_color;
	Airplane_Mode airplane_mode;
	Games games;
	
	while (true) {
		desktop.show();		//��ʾ����ѡ��
		int desktop_index = 0;							//����ѡ��
		cin >> desktop_index;
		desktop.set_index(desktop_index);
		switch (desktop.get_index())
		{
		case 1://�˵�
			while (true) {
				menu.show();
				int menu_index = 0;							//����˵�ѡ��
				cin >> menu_index;
				menu.set_index(menu_index);
				//��if����break while
				if (!menu.get_index()) break;
				else {
					switch (menu.get_index()) {
					case 1://meida
						break;
					case 2://brower
					case 3://games
						while (true) {
							games.show();
							int games_index = 0;							//������Ϸѡ��
							cin >> games_index;
							games.set_index(games_index);
							if (games.get_index() == 0) break;				//ʵ�ַ�����һ��
							else {
								switch (games.get_index()) {
								case 1://������
									games.guess_number();
									break;
								default:
									break;
								}
							}
						}
						break;
					case 4://setting
						while (true) {
							setting.show();
							int setting_index;				//��������ѡ��
							cin >> setting_index;
							setting.set_index(setting_index);
							//ʹ��if����break whileʵ�ַ���
							if (!setting.get_index()) break;
							else {
								switch (setting.get_index()) {
								case 1://��������
									theme.setting_show_type_id();
									break;
								case 2://���Ŀ���̨��ɫ
									console_color.setting_console_color_id();
									break;
								case 3://����ģʽ
									airplane_mode.setting_airplane_mode();
									break;
								default:
									break;
								}
							}
						}
						break;
					case 5://phone
					case 6://camera
					case 7://photo
					default:
						break;
					}
				}
			}
			break;
		case 2://��ϵ��

			break;
		case 3://����

			break;
		case 0:
			return 0;
			break;
		default:
			cout << "��������" << endl;
			system("pause");
			break;
		}
		
	}

	return 0;
}

void file_check_make() {
	ifstream ifs;
	ifs.open(FILE_NAME);
	if (ifs) {
		ifs.close();
		return;
	}
	else {
		ifs.close();
		ofstream ofs(FILE_NAME);
		ofs << "GUESS_NUMBER_POINTS " << 0 << "\n";
		ofs.close();
	}
}