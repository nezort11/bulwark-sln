#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "UIBase.h"
#include "UIScreen.h"

// ��������������� c���������� �����, �������� UI � ���������� ����������������� � ���� 
// �� ����� �������� ��� ���� �������

class UIManager
{
private:
	static std::vector<UIScreen*> screens;     // ������ ��� ��������� ������ UI
						
	static UIBase* overAll, *dragAll;            // � ����� - ��� ����������� � ��� ��� ������
public:											 

	static void update();						 // ��������� �������� UI ������
    static void draw(sf::RenderTarget &target);  // ������ �������� UI ������

	static UIBase* getMouseOver();
	static UIBase* getMouseDrag();
	static void addScreen(UIScreen *screen);
	static void deleteScreen(unsigned int index);
	static void deleteScreen(UIScreen* screen);

	static void addControl(unsigned int screenIndex, UIBase *controlAdress);
	static void deleteControl(unsigned int screenIndex, unsigned int controlIndex);
private:

	static void updateDrag();
};