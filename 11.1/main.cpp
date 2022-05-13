#include "Ex11.h"

int main() {
	setlocale(0, "");
	Laptop L(1, 1, 40, 230, 1);
	L.print();
	PC P(1, 0, 50, 720, 17);
	P.print();
	Phone Ph(0, 1, 10, 150, 0);
	Ph.print();
}