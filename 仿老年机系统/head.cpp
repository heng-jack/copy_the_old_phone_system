#include"head.h"

void Base_Show::setConsoleColor(int text_color_id, int background_color_id) {
    // ������ɫ����ֵ
    int color = (background_color_id << 4) | text_color_id;
    SetConsoleTextAttribute(h, color);
}

void Base_Show::show() {
	system("cls");				//չʾǰ����
	setConsoleColor(get_text_color_id(), get_background_color_id());
	switch (get_show_type_id())
	{
	case 1:
		show_type_01();
		break;
	case 2:
		show_type_02();
		break;
	case 3:
		show_type_03();
		break;
	default:
		cout << "��������" << endl;
		break;
	}
}