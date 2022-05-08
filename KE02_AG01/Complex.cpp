#include <iostream>
#include "Complex.h"
#define _USE_MATH_DEFINES
#include <cmath>

typedef double f64_t;
f64_t f64Phi = atan(1) * 4;
f64_t MyMath::Complex::f64Get64Real(void)
{
	return f64Real_;
}

void MyMath::Complex::vSetf64Real(f64_t f64Realnew)
{
	f64Real_ = f64Realnew;
}

f64_t MyMath::Complex::f64Getf64Img(void)
{
	return f64Img_;
}

void MyMath::Complex::vSetf64Img(f64_t f64Imgnew)
{
	f64Img_ = f64Imgnew;
}

f64_t MyMath::Complex::f64GetAbs(void)
{
	//f64_t f64Real = abs(f64Real_);
	//f64_t f64Img = abs(f64Img_);
	//f64_t f64Result = f64Real + f64Img;
	//Complex cm1(f64Real_, f64Img_);
	//abs(cm1);
	//f64_t f64Real_;
	//f64_t f64Img_;
	f64_t f64RealPow = pow(f64Real_, 2);
	f64_t f64ImgPow = pow(f64Img_, 2);
	f64_t f64Result = sqrt(f64RealPow + f64ImgPow);
	return f64Result;
}

f64_t MyMath::Complex::f64GetArg(void)
{
	f64_t f64Result = (atan2(f64Img_, f64Real_)) * (180/ f64Phi);
	return f64Result;
}

void MyMath::Complex::vPrintComplexNumber(void)
{
	//TODO
	//Kein using namespace std; verwenden!
	
	std::cout << "Cartesian Coordinates: " << f64Real_ << " + j(" << f64Img_ << ") | ";
	std::cout << "Polar Coordinates: " << Complex::f64GetAbs() << " * exp(j(" << Complex::f64GetArg() << "))" << std::endl;
}


MyMath::Complex::Complex(f64_t f64Real_, f64_t f64Img_)
{
	this->f64Real_ = f64Real_;
	this->f64Img_ = f64Img_;
}

MyMath::Complex::~Complex()
{

}