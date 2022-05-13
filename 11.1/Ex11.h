#ifndef EX_11
#define EX_11

#include <iostream>
using namespace std;

class Keyboard
{
public:
	Keyboard();
	Keyboard(bool tp);
	virtual void print();
	~Keyboard();
private:
	bool tap;
};

class Screen
{
public:
	Screen();
	Screen(bool onf, double diag, int d);
	virtual void print();
	~Screen();
private:
	bool on_off;
	double diagonal;
	int dpi;
};

class Laptop :public Keyboard, public Screen
{
public:
	Laptop();
	Laptop(bool tp, bool onf, double diag, int d, bool opcl);
	void print() override;
	~Laptop();
private:
	bool open_close;
};

class PC :public Keyboard, public Screen
{
public:
	PC();
	PC(bool tp, bool onf, double diag, int d, int c);
	void print() override;
	~PC();
private:
	int core;
};

class Phone :public Keyboard, public Screen
{
public:
	Phone();
	Phone(bool tp, bool onf, double diag, int d, bool con);
	void print() override;
	~Phone();
private:
	bool connection;
};

#endif