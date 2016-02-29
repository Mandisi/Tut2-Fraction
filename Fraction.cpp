#include<iostream>
#include<cmath>

using namespace std;

int main{

	class Fraction{


	private:
		int num, denom;	//Numerator and the denominator set private


	public:

		void getNumDenom(, );	//setting  memmber functions public
		void setNumDenom(, );
		add();
		subtract();
		multiply();
		divide();
		print();

	};
	Fraction faraction(int num, int denom){//constructor function
		num = numerator;
		denom = denominator;
	}
	Fraction ~fraction(){
		num = 0;
		denom = 0;
	}
	int Fraction getNumDenom(int num, int denom){

		return result
	}

	void Fraction setNumDenom(int num, int denom){

		numerator = num;
		denominator = denominator;
	}
	Fraction add(Fraction value){
		Fraction result;
		return Fraction(num*value.num + denom*value.denom);
	}

	Fraction subract(Fraction value){
		return Fraction(num*value.num - denom*value.denom);
	}

	Fraction multiply(Fraction value){
		return Fraction(num*value.num, denom*value.denom);
	}

	Fraction divide(Fraction value){
		return Fraction(num*value.num, denom*value.denom);

	}

	Fraction print(){
		for (int i = 1; i < denom; i++){
			while ((num%i == 0) && (denom%i == 0)){

				num /= i;
				denom /= i;
			}

		}
	else if (denom > num){
		for (int i = 1; i < num; i++){
			while ((num%i == 0) && (denom%i == 0)){
				num /= i;
				denom /= i;

			}



		}


	}

	cout << "result" << num << / << denom << endl;

	}









}
