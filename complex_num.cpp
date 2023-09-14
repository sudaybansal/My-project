#include<iostream>
using namespace std;
class Complex{
	private:
		int real;
		int imag;
	public:
		Complex(){}
		Complex(int r,int i):real(r),imag(i){}
		
		Complex addition(Complex &n){
			return	Complex(real+n.real,imag+n.imag);
		}
		Complex subtraction(Complex &n){
			return	Complex(real-n.real,imag-n.imag);
		}
		Complex multiply(Complex &n){
			int real1=real*n.real-imag*n.imag;
			int imag1=imag*n.real+n.imag*real;
			return Complex(real1,imag1);
		}
		void display(){
			cout<<real<<"+ "<<imag<<"*i"<<endl;
		}
};
int main(){
	int a1,a2,b1,b2;
	cout<<"Enter the real and imaginary part"<<endl;
	cin>>a1;
	cin>>b1;
	Complex c1(a1,b1);
	cout<<"Enter the real and imaginary part"<<endl;
	cin>>a2;
	cin>>b2;
	Complex c2(a2,b2);
	Complex c3= c1.addition(c2);
	Complex c4= c1.subtraction(c2);
	Complex c5= c1.multiply(c2);
	cout<<"After addition, number is"<<endl;
	c3.display();
	cout<<"After subtraction, number is"<<endl;
	c4.display();
	cout<<"After multiplication, number is"<<endl;
	c5.display();
	}
