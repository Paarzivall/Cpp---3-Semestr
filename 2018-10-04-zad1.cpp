#include <iostream>

void czwartaPotega(float *);
void czwartaPotega_ref(float &); //wywołanie referencyjne <- bardziej porządane

int main(){
	float x;
	std::cout << "Podaj liczbe ktorej potege chcesz obliczyc:\t";
	std::cin >> x;
	czwartaPotega(&x);
	std::cout << "Liczba podniesiona do 4 potegi to: "<< x << std::endl;
	
	std::cout << "\nPodaj liczbe ktorej potege chcesz obliczyc(referencyjnie):\t";
	std::cin >> x;
	czwartaPotega_ref(x);
	std::cout << "Liczba podniesiona do 4 potegi (referencyjnie) to: "<< x << std::endl;
	
	return 0;	
}

void czwartaPotega(float *x){
	*x = *x* *x* *x* *x;
}

void czwartaPotega_ref(float &x){
	x = x*x*x*x;	
}
