#include <iostream>

class zespolone{
	private:
		int re, im;
	
	public:
		zespolone(int, int);
		zespolone operator+(zespolone );
		//void drukuj();
		
		friend std::ostream& operator<<(std::ostream&, zespolone);
};

zespolone::zespolone(int m, int n){
	re = m;
	im = n;
}

zespolone zespolone::operator+(zespolone z0){
	int rz, ur;
	rz = re + z0.re;
	ur = im + z0.im;
	
	return zespolone(rz, ur);
}

std::ostream & operator<<(std::ostream& wyjscie, zespolone z1){
	wyjscie<< "(" << z1.re << "," << z1.im << ")" << std::endl;
	return wyjscie;
}
/*
void zespolone::drukuj(){
	std::cout << "Rzeczywista:\t" << re << "\nUrojona:\t" << im << std::endl;
}*/


int main(){
	zespolone z1(1, 2), z2(4, 10), z3(0, 0), z4(0, 0);
	z3 = z1 + z2;
	std::cout << "z3 = z1 + z2\n" << std::endl;
	//z3.drukuj();
	std::cout << z3;
	
	std::cout << "\n\nz4 = z1.operator+(z2)\n" << std::endl;
	z4 = z1.operator+(z2);
	//z4.drukuj();
	std::cout << z4;
	return 0;
}
