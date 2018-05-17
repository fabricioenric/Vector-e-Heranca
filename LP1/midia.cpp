#include <iostream>
#include <string>
#include "midia.hpp"

using namespace std;

Midia::Midia(){
    this->titulo = "";
    this->autor = "";
    this->lancamento = "";
}

string Midia::getTitulo(){
    return this->titulo;
}

string Midia::getAutor(){
    return this->autor;
}

string Midia::getLancamento(){
    return this->lancamento;
}

void Midia::setTitulo(string titulo){
    this->titulo = titulo;
}

void Midia::setAutor(string autor){
    this->autor = autor;
}

void Midia::setLancamento(string lancamento){
    this->lancamento = lancamento;
}
