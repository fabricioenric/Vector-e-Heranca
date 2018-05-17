#ifndef DVD_HPP_INCLUDED
#define DVD_HPP_INCLUDED

using namespace std;

class Dvd : public Midia {
    private:
        string duracao;
        string classificacao;

    public:
        Dvd();
        int qtddvds;
        void setDuracao(string duracao);
        void setClassificacao(string classificacao);
        string getDuracao();
        string getClassificacao();
        void aumentardvds();
        void diminuirdvds();
};

#endif // DVD_HPP_INCLUDED
