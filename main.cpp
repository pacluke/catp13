
#include<iostream>
#include"Pessoa.h"

int main()
{
    Pessoa *p, a;
    p = new Pessoa();
    std::cout << "MAIN \n";
    delete p;

	return 0;
}
