//Nicorici Adrian, 08.03.2014
// Sa se afiseze toti divizorii unui numar dat.

#include <iostream>
using namespace std;

int main(){
	int numar,contor;
	cout << "Introduceti un numar: " << endl;
	cin >> numar;
	cout << "Divizorii numarului " << numar << " sunt" << endl;
	for(contor =1 ;contor <=numar;contor++){
		if(numar%contor == 0){
			cout << contor  << endl;
		}
	}

	system("pause");
	return 0;
}