#include <iostream>

void sortuj(int*, int*);
void sortuj_ref(int&, int&);

int main(){
	int x, y;
	std::cout << "Podaj pierwsza liczbe:\t";
	std::cin >> x;
	
	std::cout << "Podaj druga liczbe:\t";
	std::cin >> y;
	
	sortuj(&x, &y);
	
	std::cout <<"\n\t\tLiczby po posortowaniu:\n\t\t\t" << x << "\t" << y << std::endl;
	
	std::cout << "Podaj pierwsza liczbe(referencyjnie):\t";
	std::cin >> x;
	
	std::cout << "Podaj druga liczbe(referencyjnie):\t";
	std::cin >> y;
	
	sortuj_ref(x, y);
	std::cout <<"\n\t\tLiczby po posortowaniu(referencyjnie):\n\t\t\t" << x << "\t" << y << std::endl;
	return 0;	
}

void sortuj(int *x, int *y){
	int tmp;
	if(*x > *y){
		tmp = *x;
		*x = *y;
		*y = tmp;
	}	 
}

void sortuj_ref(int &x, int &y){
	int tmp;
	if(x > y){
		tmp = x;
		x = y;
		y = tmp;
	}	 
}
