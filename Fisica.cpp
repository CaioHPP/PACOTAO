/*
APS DE PROG
ALUNO: CAIO HENRIQUE PEDROSO PEDRO
RA:1602950
ENGENHARIA ELETRÔNICA
PROF: LUCIO VALENTIN 
*/
#include "Classes\\Fisica.h"


Fisica::Fisica(){};

Fisica::Fisica(int i):Pessoa(i){}

string Fisica::getCpf(){return this->cpf;}
void Fisica::setCpf(string cpf){ this->cpf = cpf;}

int Fisica::getIdade(){ return this->idade; }
void Fisica::setIdade(int idade){
	if(idade > 120) this->idade = 120; else this->idade = idade;
}


string Fisica::toString(){
	stringstream ss;
	ss.str("");
	ss << getId() << ";" << getCpf() << ";" << getIdade();
	return ss.str(); 
}


