#pragma once
#include<iostream>
#include<Windows.h>											//通过Windows提供的API更改字体颜色和背景颜色
using namespace std;

//void* h = GetStdHandle(STD_OUTPUT_HANDLE);
static HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);					//获取标准输出句柄


class Theme;
class Console_Color;
class Airplane_Mode;

class Id {
	static int show_type_id;								//所有子类共享，在下面给默认初值
	static int text_color_id;								
	static int background_color_id;
	static bool is_airplane_mode;
	static void set_show_type_id(int i) { show_type_id = i; }		//提供隐私接口
	static void set_text_color_id(int i) { text_color_id = i; }		//提供隐私接口
	static void set_background_color_id(int i) { background_color_id = i; }		//提供隐私接口
	static void set_is_airplane_mode(bool i) { is_airplane_mode = i; }		//提供隐私接口
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
//需要在主函数文件中赋初值？？？

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