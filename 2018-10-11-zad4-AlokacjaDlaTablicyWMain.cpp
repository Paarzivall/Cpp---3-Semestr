#include <iostream>
#include <cstdlib>
#include <time.h>

int main(){
	srand(time(NULL));//ustawienie zarodka 
	
	int rozmiar;
	std::cout << "Podaj rozmiar tablicy:\t";
	std::cin >> rozmiar;
	
	int *tab = new int[rozmiar];//alokacja pamięci
	
	for(int i = 0; i < rozmiar; i++){
		tab[i] = (std::rand()%100)+0;//losowanie liczb losowych
	}
	
	for(int i = 0; i < rozmiar; i++){
		std::cout << tab[i] << std::endl;
	} 
	
	delete []tab;//zwolnienie pamięci
	return 0;
}
