#include <iostream>
#include "Complex.h"



	int main(void)
	{
		MyMath::Complex Z1(-1.0,-1.0);

		std::cout << "Real: " << Z1.f64Get64Real();
		std::cout << " | Img: " << Z1.f64Getf64Img() << std::endl;

		std:: cout << "Betrag: " << Z1.f64GetAbs();
		std:: cout << " | Grad: " << Z1.f64GetArg() << std::endl;

		Z1.vPrintComplexNumber();
	}
