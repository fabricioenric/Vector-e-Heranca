#include <iostream>
#include <string>
#include "livro.hpp"

using namespace std;

Livro::Livro(){
    this->editora = "";
    this->isbn = "";
}

string Livro::getEditora(){
    return this->editora;
}

string Livro::getIsbn(){
    return this->isbn;
}

void Livro::setEditora(string editora){
    this->editora = editora;
}

void Livro::setIsbn(string isbn){
    this->isbn = isbn;
}

void Livro::aumentarlivros(){
    qtdlivros++;
}

void Livro::diminuirlivros(){
    qtdlivros--;
}
