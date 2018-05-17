#ifndef LIVRO_HPP_INCLUDED
#define LIVRO_HPP_INCLUDED

using namespace std;

class Livro : public Midia {
    private:
        string editora;
        string isbn;

    public:
        Livro();
        int qtdlivros;
        void setEditora(string editora);
        void setIsbn(string isbn);
        string getEditora();
        string getIsbn();
        void aumentarlivros();
        void diminuirlivros();
};

#endif // LIVRO_HPP_INCLUDED
