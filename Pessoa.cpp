#include<iostream>
#include"Pessoa.h"

Pessoa::Pessoa(){
	std::cout << __func__ << " sendo chamado. Eu sou o " << this << std::endl;
}

Pessoa::~Pessoa(){
	std::cout << __func__ << " sendo chamado. Eu sou o " << this << std::endl;
}
