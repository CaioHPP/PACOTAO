/*
APS DE PROG
ALUNO: CAIO HENRIQUE PEDROSO PEDRO
RA:1602950
ENGENHARIA ELETRÔNICA
PROF: LUCIO VALENTIN 
*/
#ifndef GUI_h
#define GUI_h

#include <string>
#include <stdio.h>

#include "..\\BDClass\\BDFisica.h"
#include "..\\BDClass\\BDAluno.h"
#include "..\\BDClass\\BDJuridica.h"

#include "..\\Classes\\Fisica.h"
#include "..\\Classes\\Aluno.h"
#include "..\\Classes\\Juridica.h"

using namespace std;
class GUI{
private:
	void mostraNomeAtributoParaColetar(string nomeAtributo);
	string obtemValorAtributoString(string nomeAtributo);
	int obtemValorAtributoInt(string nomeAtributo);

	void buscarF();
	void buscarJ();
	void buscarA();

	string ExisteCpf(string cpf);
	string ExisteCnpj(string cnpj);
	int ExisteId(int Id);

	void menuRemocaoF(Fisica f);
	void menuRemocaoJ(Juridica j);
	void menuRemocaoA(Aluno a);

	void menuAlterarF(Fisica f);
	void menuAlterarJ(Juridica j);
	void menuAlterarA(Aluno a);

	void MostraDadosF(Fisica * f);
	void MostraDadosJ(Juridica * j);
	void MostraDadosA(Aluno * a);
public: 
	GUI();
	void menu();
	char obtemEscolha();
	void cadF();
	void cadJ();
	void cadA();
	void showBuscas();
};

#endif