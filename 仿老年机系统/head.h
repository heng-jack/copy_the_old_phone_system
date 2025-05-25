#pragma once
#include<iostream>
#include<Windows.h>											//ͨ��Windows�ṩ��API����������ɫ�ͱ�����ɫ
using namespace std;

//void* h = GetStdHandle(STD_OUTPUT_HANDLE);
static HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);					//��ȡ��׼������


class Theme;
class Console_Color;
class Airplane_Mode;

class Id {
	static int show_type_id;								//�������๲���������Ĭ�ϳ�ֵ
	static int text_color_id;								
	static int background_color_id;
	static bool is_airplane_mode;
	static void set_show_type_id(int i) { show_type_id = i; }		//�ṩ��˽�ӿ�
	static void set_text_color_id(int i) { text_color_id = i; }		//�ṩ��˽�ӿ�
	static void set_background_color_id(int i) { background_color_id = i; }		//�ṩ��˽�ӿ�
	static void set_is_airplane_mode(bool i) { is_airplane_mode = i; }		//�ṩ��˽�ӿ�
public:
	friend Theme;
	friend Console_Color;
	friend Airplane_Mode;
	int get_show_type_id() { return show_type_id; }
	int get_text_color_id() { return text_color_id; }
	int get_background_color_id() { return background_color_id; }
	bool get_is_airplane_mode() { return is_airplane_mode; }
};

//int show_type_id = 1;
//int Id::show_type_id = 1;
//��Ҫ���������ļ��и���ֵ������

class Base_Show :  public Id {						
protected:
	int index;
public:
	Base_Show() : index(0) {}
	virtual void show_type_01() = 0;
	virtual void show_type_02() = 0;
	virtual void show_type_03() = 0;
	void setConsoleColor(int text_color, int background_color);
	void show();
	void set_index(int i) { index = i; }
	int get_index() { return index; }
};