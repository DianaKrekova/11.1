#include "Ex11.h"

Keyboard::Keyboard()
{
	tap = 0;
}

Keyboard::Keyboard(bool tp)
{
	tap = tp;
}

Keyboard::~Keyboard()
{
}

void Keyboard::print()
{
	if (tap) {
		cout << "Typing on the keyboard\n";
	}
	else cout << "Doesn't type on the keyboard\n";
}


Screen::Screen()
{
	on_off = 0;
	diagonal = 0;
	dpi = 0;
}

Screen::Screen(bool onf, double diag, int d)
{
	on_off = onf;
	diagonal = diag;
	dpi = d;
}
void Screen::print()
{
	if (on_off) {
		cout << "The screen is on\n";
	}
	else cout << "The screen is off\n";
	cout << "The diagonal is : " << diagonal << " inches\n";
	cout << "dpi: " << dpi << endl;
}

Screen::~Screen()
{
}

Laptop::Laptop()
{
	open_close = 0;
}


Laptop::Laptop(bool tp, bool onf, double diag, int d, bool opcl) :Keyboard(tp), Screen(onf, diag, d)
{
	open_close = opcl;
	cout << "Laptop exist!\n";
}

void Laptop::print()
{
	Keyboard::print();
	Screen::print();
	if (open_close) {
		cout << "Laptop open\n";
	}
	else cout << "Laptop close\n";
}

Laptop::~Laptop()
{
}

PC::PC()
{
	core = 0;
}

PC::PC(bool tp, bool onf, double diag, int d, int c) :Keyboard(tp), Screen(onf, diag, d)
{
	if (c >= 0 && c <= 16) {
		core = c;
		cout << "PC exist!\n";
	}
	else cout << "PC doesn't exist(\n";
}

void PC::print()
{
	Keyboard::print();
	Screen::print();
	if (core >= 0 && core <= 16) {
		cout << "Core numbers: " << core << endl;
	}
	else cout << "Core numbers: " << 0 << endl;
}

PC::~PC()
{
}


Phone::Phone()
{
	connection = 0;
}

Phone::Phone(bool tp, bool onf, double diag, int d, bool con) :Keyboard(tp), Screen(onf, diag, d)
{
	connection = con;
	cout << "Phone exist!\n";
}

void Phone::print()
{
	Keyboard::print();
	Screen::print();
	if (connection) {
		cout << "Åhe connection is established\n";
	}
	else cout << "Connection is unavailable\n";
}

Phone::~Phone() {

}