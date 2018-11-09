#include <iostream>

class klasa1{
	private://opcjonalnie(bez tego też jest dobrze XD)
		int n1, n2;//to jest prywatne w tej klasie!!
	
	public://deklaracja metod
		klasa1(int, int);//konstruktor klasy(pobiera argumenty ale nie zwraca!!!) nie ma typu przed sobą, nazywa się jak klasa
		klasa1(); //konstruktor bezparametrowy(domyślny)
		void drukuj();//metoda, może się obojętnie jak nazywać i ma typ przed sobą!
		void sortowanie();//dostaje pola n1, n2 w prezencie XD
};

	klasa1::klasa1(int a, int b){  //definicje konstruktora na zewnątrz klasy!!
		n1 = a;
		n2 = b;	
	}
	
	klasa1::klasa1(){
		n1 = 0;
		n2 = 0;	
	}
	
	void klasa1::drukuj(){ // definicja metody również na zewnątrz klasy
		std::cout <<"n1 = " << n1 << "\nn2 = " << n2 << std::endl;	
	}
	
	void klasa1::sortowanie(){
		if(n2 < n1){
			int tmp = n1;
			n1 = n2;
			n2 = tmp;
		}
	}

int main(){
	klasa1 obiekt1(1, 2); //wywołanie konstruktora
	obiekt1.drukuj();
	klasa1 obiekt2;//konstruktor pusty wywołuje się bez parametrów i bez nawiasów!!!
	std::cout << "\n\tTeraz obiekt2" << std::endl;
	obiekt2.drukuj();
	
	std::cout << "\n\tTeraz obiekt3" << std::endl;
	klasa1 obiekt3(4,2);
	obiekt3.sortowanie();
	obiekt3.drukuj();
	
	return 0;	
}
