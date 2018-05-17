#ifndef MIDIA_HPP_INCLUDED
#define MIDIA_HPP_INCLUDED

using namespace std;

class Midia{
    protected:
        string titulo;
        string autor;
        string lancamento;

    public:
        Midia();
        void setTitulo(string titulo);
        void setAutor(string autor);
        void setLancamento(string lancamento);
        string getTitulo();
        string getAutor();
        string getLancamento();
};

#endif // MIDIA_HPP_INCLUDED
