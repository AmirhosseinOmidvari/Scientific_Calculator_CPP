#include<iostream>
#include<cmath>
using namespace std;
#define M_PI 3.141592




float addition(float a, float b) {
	return a + b;
}


float subtraction(float a, float b) {
	return a - b;
}


float Power(float a, float b) {
	return pow(a, b);
}


float Multiplication(float a, float b) {
	return a * b;

}


float Division(float a, float b) {
	if (b == 0) {
		cout << "Error: Division by zero is not allowed." << endl;
		return NAN;
	}
	return a / b;
}





float cot(float a) {
	return (1 / tan(a));

}

float sec(float a) {
	return (1 / cos(a));


}

float csc(float a) {
	return (1 / sin(a));


}



float log_in_special_base(float a, float b) {
	return (log10(a) / log10(b));
}


int Factorial(int a) {
	int fact = 1;
	for (int i = a; i > 0; i--) {
		fact *= i;

	}
	return fact;
}

int main()
{
	int n = 1;
	string opr;

	while (n != 0) {

		cout << "Select The Operation You Want ! :" << endl;
		cout << "0.Exit" << endl;
		cout << "1.Addition / subtraction / Multipication / Division /Power" << endl;
		cout << "2.Trigonometric operations (sin / cos / tan / cot / sec / csc / arcsin / arccos / arctan)" << endl;
		cout << "3.logarithm" << endl;
		cout << "4.Factorial" << endl;
		cout << "5.Root" << endl;
		cout << "6.ABS" << endl;
		cout << "7.Floor" << endl;
		cin >> n;


		if (n == 0) {
			cout << "GOOD LUCK ! " << endl;
			break;
		}
		else if (n == 1) {
			cout << "Enter the operation : (example : 2 + 3 )" << endl;
			cout << "NOTICE : please enter a space between numbers and opr!" << endl;
			float a, b;
			cin >> a >> opr >> b;
			if (opr == "+") {
				cout << a << "+" << b << " = " << addition(a, b) << endl;
			}
			else if (opr == "-") {
				cout << a << "-" << b << " = " << subtraction(a, b) << endl;
			}
			else if (opr == "*") {
				cout << a << "*" << b << " = " << Multiplication(a, b) << endl;
			}
			else if (opr == "/") {

				cout << a << "/" << b << " = " << Division(a, b) << endl;

			}
			else if (opr == "^") {
				cout << a << "^" << b << " = " << pow(a, b) << endl;
			}

			else {
				cout << "Invalid Inputs!" << endl;
			}

		}
		else if (n == 2) {
			cout << "Enter the Operation ! : (example: sin 30 = 0.5)" << endl;
			float x;
			string opr;
			cin >> opr >> x;
			if (opr == "sin") {
				cout << "sin(" << x << ") = " << sin(x * M_PI / 180) << endl;
			}
			else if (opr == "cos") {
				cout << "cos(" << x << ") = " << cos(x * M_PI / 180) << endl;
			}
			else if (opr == "tan") {
				cout << "tan(" << x << ") = " << tan(x * M_PI / 180) << endl;
			}
			else if (opr == "cot") {
				cout << "cot(" << x << ") = " << cot(x * M_PI / 180) << endl;
			}
			else if (opr == "sec") {
				cout << "sec(" << x << ") = " << sec(x * M_PI / 180) << endl;
			}
			else if (opr == "csc") {
				cout << "csc(" << x << ") = " << csc(x * M_PI / 180) << endl;
			}
			else if (opr == "arcsin") {
				if (x < -1 || x > 1) {
					cout << "Invalid input! arcsin is defined for -1 <= x <= 1." << endl;
				}
				else {
					cout << "arcsin(" << x << ") = " << asin(x) * 180 / M_PI << " degrees" << endl;
				}
			}
			else if (opr == "arccos") {
				if (x < -1 || x > 1) {
					cout << "Invalid input! arccos is defined for -1 <= x <= 1." << endl;
				}
				else {
					cout << "arccos(" << x << ") = " << acos(x) * 180 / M_PI << " degrees" << endl;
				}
			}
			else if (opr == "arctan") {
				cout << "arctan(" << x << ") = " << atan(x) * 180 / M_PI << " degrees" << endl;
			}
			else if (opr == "arccot") {
				if (x == 0) {
					cout << "arccot(0) is undefined!" << endl;
				}
				else {
					cout << "arccot(" << x << ") = " << (atan(1 / x) * 180 / M_PI) << " degrees" << endl;
				}
			}
			else if (opr == "arcsec") {
				if (fabs(x) < 1) {
					cout << "Invalid input! arcsec is defined for |x| >= 1." << endl;
				}
				else {
					cout << "arcsec(" << x << ") = " << (acos(1 / x) * 180 / M_PI) << " degrees" << endl;
				}
			}
			else if (opr == "arccsc") {
				if (fabs(x) < 1) {
					cout << "Invalid input! arccsc is defined for |x| >= 1." << endl;
				}
				else {
					cout << "arccsc(" << x << ") = " << (asin(1 / x) * 180 / M_PI) << " degrees" << endl;
				}
			}
			else {
				cout << "Unknown operation!" << endl;
			}



		}
		else if (n == 3) {
			cout << "Enter your requested Operation : " << endl;
			int m = 0;
			while (m != 1 && m != 2) {
				cout << "1.Logarithm in base of 10 " << endl;
				cout << "2.Logarithm in desired base" << endl;
				cin >> m;
				float x;
				if (m == 1) {

					cout << "Enter the Number you want to Calculate its Log : " << endl;
					cout << "Notice : Number should be biger than 0 !" << endl;
					cin >> x;
					while (x <= 0) {
						cout << "number could'nt be 0 or less! please enter a valid number! :" << endl;
						cin >> x;

					}
					cout << "Log(" << x << ")" << " = " << log10(x) << endl;

				}
				else if (m == 2) {
					float b;
					cout << "Enter the number you want to Calculate its log : " << endl;
					cin >> x;
					cout << "Enter the base of log : " << endl;
					cin >> b;
					cout << "Log(" << x << ") " << "in base of " << b << " = " << log_in_special_base(x, b) << endl;



				}

				else {
					cout << "INVALID INPUT!" << "PLEASE ENTER A VALID VALUE(1,2)!" << endl;
				}


			}
		}

		else if (n == 4) {
			int a;
			cout << "Enter the number you want to calculate its Factorial : " << endl;
			cout << "Notice : number must be positive value !" << endl;
			cin >> a;
			while (a < 0) {
				cout << "number could not be negative! please enter a valid number! :" << endl;
				cin >> a;
			}
			cout << a << "!" << " = " << Factorial(a) << endl;


		}


		else if (n == 5) {
			float a;
			cout << "Enter the number you want to calculate its Root :" << endl;
			cout << "NOTICE: the number should be biger than 0 !" << endl;
			cin >> a;
			while (a < 0) {
				cout << "number could not be negative! please enter a valid number! :" << endl;
				cin >> a;
			}
			cout << "Root" << "(" << a << ")" << " = " << sqrt(a) << endl;

		}

		else if (n == 6) {
			float a;
			cout << "Enter the number you want to calculate its absolute value :" << endl;
			cin >> a;
			cout << "ABS" << "(" << a << ")" << " = " << abs(a) << endl;
		}

		else if (n == 7) {
			float a;
			cout << "Enter the number you want to calculate its Bracket :" << endl;
			cin >> a;
			cout << "Floor" << "(" << a << ")" << " = " << floor(a) << endl;
		}

		else {
			cout << "Invalid input! please enter a number between 0-7 :" << endl;
		}


		cout << endl << endl;
	}


	return 0;
}