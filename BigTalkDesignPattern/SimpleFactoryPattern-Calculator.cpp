#include <iostream>
#include <exception>
#include <string>
using namespace std;

namespace OperationLibrary
{
	class Operation {
	protected:
		double numA, numB;
	public:
		/*Operation(double a, double b) :numA(a), numB(b) {};*/
		void setValue(double a, double b) {
			numA = a;
			numB = b;
		}
		virtual double getResult()const = 0;
	};

	class Add :public Operation {
	public:
		//Add(double a, double b) :Operation(a,b) {}
		double getResult()const {
			return numA + numB;
		}
	};
	class Div :public Operation {
	public:
		//Div(double a, double b) :Operation(a, b) {}
		double getResult()const {
			try {
				return numA/numB;
			}catch(exception& e){
				cout << e.what() << endl;
			}
		}
	};
	class OperationSimpleFactory {
	public:
		static Operation* createOperate(const string& oper)
		{
			if (oper == "+")
				return new Add();
			if (oper == "/")
				return new Div();
		}
	};
}
int main() {
	/*OperationLibrary::Add a(3.0, 4.0);
	cout << a.getResult() << endl;
	OperationLibrary::Div b(2.0, 4.0);
	cout << b.getResult() << endl;
	OperationLibrary::Div c(3.0, 0);
	cout << c.getResult() << endl;*/

	OperationLibrary::Operation* d = OperationLibrary::OperationSimpleFactory::createOperate("+");
	d->setValue(3, 4);
	cout << d->getResult() << endl;
	getchar();
	return 0;
}