#include <iostream>

class kwadrat{
	private:
		float bok;
	
	public:
		kwadrat(float);
		float pole_powierzchni();
};

kwadrat::kwadrat(float x){
	bok = x;
}

float kwadrat::pole_powierzchni(){
	return bok * bok;
}

int main(){
	float x;
	
	std::cout << "Podaj bok kwadratu:\t";
	std::cin >> x;
	
	kwadrat obiekt(x);
	std::cout << "Pole powierzchni kwadratu o boku: "<< x << " wynosi: " << obiekt.pole_powierzchni() << std::endl;
	
	return 0;
}
