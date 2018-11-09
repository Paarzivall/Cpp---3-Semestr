#include <iostream>
#include <string>

class napis{
	private:
		std::string _napis;//bez using napespace std trzeba przed stringiem wpisać 'std::'
	
	public:
		napis(std::string);// konstruktor parametrowy
		napis(const napis & fnapis);// konstruktor kopiujący
		void drukuj();// metoda drukująca
};

napis::napis(std::string tekst){
	_napis = tekst;
}

napis::napis(const napis & fnapis){
	_napis = fnapis._napis;
}

void napis::drukuj(){
	std::cout << "Wprowadzony napis to:\t" << _napis << std::endl;	
}


int main(){
	std::string tekst;
	std::cout << "Podaj napis:\t";
	std::cin >> tekst;
	
	napis obiekt(tekst);//utworzenie obiektu
	
	obiekt.drukuj();
	
	return 0;	
}
