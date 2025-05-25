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
/*0 = 黑色       8 = 灰色
  1 = 蓝色       9 = 淡蓝色
  2 = 绿色       A = 淡绿色
  3 = 浅绿色     B = 淡浅绿色
  4 = 红色       C = 淡红色
  5 = 紫色       D = 淡紫色
  6 = 黄色       E = 淡黄色
  7 = 白色       F = 亮白色*/

//检测配置运行的必要文件
void file_check_make();

int main() {
	//检测配置文件
	file_check_make();
	/*所有的对象*/
	Desktop desktop;
	Menu menu;
	Setting setting;
	Theme theme;
	Console_Color console_color;
	Airplane_Mode airplane_mode;
	Games games;
	
	while (true) {
		desktop.show();		//显示桌面选项
		int desktop_index = 0;							//储存选项
		cin >> desktop_index;
		desktop.set_index(desktop_index);
		switch (desktop.get_index())
		{
		case 1://菜单
			while (true) {
				menu.show();
				int menu_index = 0;							//储存菜单选项
				cin >> menu_index;
				menu.set_index(menu_index);
				//用if可以break while
				if (!menu.get_index()) break;
				else {
					switch (menu.get_index()) {
					case 1://meida
						break;
					case 2://brower
					case 3://games
						while (true) {
							games.show();
							int games_index = 0;							//储存游戏选项
							cin >> games_index;
							games.set_index(games_index);
							if (games.get_index() == 0) break;				//实现返回上一级
							else {
								switch (games.get_index()) {
								case 1://猜数字
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
							int setting_index;				//储存设置选项
							cin >> setting_index;
							setting.set_index(setting_index);
							//使用if可以break while实现返回
							if (!setting.get_index()) break;
							else {
								switch (setting.get_index()) {
								case 1://更改主题
									theme.setting_show_type_id();
									break;
								case 2://更改控制台颜色
									console_color.setting_console_color_id();
									break;
								case 3://飞行模式
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
		case 2://联系人

			break;
		case 3://拨号

			break;
		case 0:
			return 0;
			break;
		default:
			cout << "索引错误" << endl;
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