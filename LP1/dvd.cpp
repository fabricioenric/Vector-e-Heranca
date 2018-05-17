#include <iostream>
#include <string>
#include "dvd.hpp"

using namespace std;

Dvd::Dvd(){
    this->duracao = "";
    this->classificacao = "";
}

string Dvd::getDuracao(){
    return this->duracao;
}

string Dvd::getClassificacao(){
    return this->classificacao;
}

void Dvd::setDuracao(string duracao){
    this->duracao = duracao;
}

void Dvd::setClassificacao(string classificacao){
    this->classificacao = classificacao;
}

void Dvd::aumentardvds(){
    qtddvds++;
}

void Dvd::diminuirdvds(){
    qtddvds--;
}
