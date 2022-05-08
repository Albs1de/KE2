namespace MyMath
{


typedef double f64_t;
class Complex
{
private:
	f64_t f64Real_;
	f64_t f64Img_;

public:
	
	Complex(f64_t f64Real_ = 0.0, f64_t f64Img_ = 0.0);
	~Complex();
	f64_t f64Get64Real(void);
	void vSetf64Real(f64_t f64Realnew);
	f64_t f64Getf64Img(void);
	void vSetf64Img(f64_t f64Imgnew);
	f64_t f64GetAbs(void);
	f64_t f64GetArg(void);
	void vPrintComplexNumber(void);
};

}