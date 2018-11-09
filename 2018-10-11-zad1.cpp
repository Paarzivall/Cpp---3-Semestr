#include <iostream>

class klasa_tab{
	private:
		int tab[9];
		
	public:
		klasa_tab(int[9]);// to jest konstruktor ;)
		void drukuj();// tutaj mamy metodę :D
		bool szukaj(int);//ooo... tutaj też mamy metodę XD
};

klasa_tab::klasa_tab(int t[9]){//tutaj jest ciało konstruktora
	for(int i = 0; i < 9; i++)
		tab[i] = t[i];
	std::cout << "konstruktor" << std::endl;
}

void klasa_tab::drukuj(){//tutaj jest ciało metody (ładne prawda? XDD)
	for(int j = 0; j < 9; j++)
		std::cout << tab[j] << "  ";
}

bool klasa_tab::szukaj(int n){//tutaj też mamy ciało metody (chyba jeszcze ładniejsze niż to wyżej XDD)
	for(int i = 0; i < 9; i++){
		if(tab[i] == n)
			return true;
	}
	
	return false;
}

int main(){
	int tablica[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	klasa_tab obiekt(tablica);// tutaj tworzymy obiekt ;)
	obiekt.drukuj();//tutaj wywołujemy metodę drukuj
	
	int x = 0;
	std::cout << "\nPodaj liczbe ktora chcesz znalezc:\t";
	std::cin >> x;
	bool a = obiekt.szukaj(x);// wywołujemy metodę szukaj :)
	
	if(a != true)
		std::cout << "\n\t\tPodana liczba nie znajduje sie w tablicy" << std::endl;
	else
		std::cout << "\n\t\tPodana liczba znajduje sie w tablicy" << std::endl;
	return 0;
}
