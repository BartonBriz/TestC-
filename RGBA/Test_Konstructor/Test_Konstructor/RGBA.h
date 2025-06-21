#pragma once

///Напишите класс с именем RGBA, который содержит 4 переменные-члены типа std::uint8_t 
///(подключите заголовочный файл cstdint для доступа к типу std::uint8_t):
/// Присвойте 0 в качестве значения по умолчанию для 
/// m_red, m_green и m_blue, и 255 для m_alpha.
/// Создайте конструктор со списком инициализации членов, 
/// который позволит пользователю передавать значения для 
/// m_red, m_green, m_blue и m_alpha.
/// Напишите функцию print(), которая будет выводить значения переменных-членов.
#include "Header.h"
class RGBA
{
public:
	RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue);

	void print();
private:
	std::uint8_t _red{ 0 };
	std::uint8_t _green{ 0 };
	std::uint8_t _blue{ 0 };
	std::uint8_t _alpha{ 255 };
};

