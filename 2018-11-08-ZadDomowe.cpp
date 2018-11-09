#include <iostream>
#include <cassert>

class dane{
	private:
		int *tab;
		
	public:
		dane(int[10]);//konstruktor
		dane(const dane & wzor);//konstruktor kopiujący
		void drukuj();//metoda drukująca 
		~dane();//destruktor
}; 

dane::dane(int t[10]){/*ciało konstruktora*/
	tab = new int[10];
	assert(tab);
	for(int i = 0; i < 10; i++)
		tab[i] = t[i];
}

dane::dane(const dane & wzorzec){/*ciało konstruktora kopiującego*/
	tab = new int[10];//tworzy miejsce dla tablicy
	assert(tab);
	for(int i = 0; i < 10; i++)
		tab[i] = wzorzec.tab[i];
}

void dane::drukuj(){/*ciało metody*/
	for(int j = 0; j < 10; j++)
		std::cout << tab[j] << " ";
}

dane::~dane(){/*ciało destruktora*/
	delete []tab;
}

int main(){
	int tablica[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	dane obiekt1(tablica);
	dane obiekt2(obiekt1);
	
	std::cout << "\tObiekt 1\n";
	obiekt1.drukuj();
	std::cout << "\n\tObiekt 2 - konstruktor kopiujacy\n";
	obiekt2.drukuj();
	
	return 0;
}
