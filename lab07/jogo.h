#include <string>
using std::string;

// -----------------------------------------------
// Declaracao da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome_;									// nome do jogo
	float preco_;									// pre�o do jogo
	int horas_;										// quantidade de horas jogadas
	float custo_;									// valor por hora jogada
	
	void calcular();								// calcular custo da hora jogada
public:
	Jogo();											// construtor padr�o
	Jogo(const string& titulo,						// construtor da classe
		 float valor = 0, 
		 int tempo = 0);	
	~Jogo();										// destrutor
	
	const Jogo& comparar(const Jogo& jogo) const;

	void atualizar(float valor);					// atualizar pre�o do jogo
	void jogar(int tempo);							// registrar horas jogadas
	void exibir() const;							// mostrar informa��es
	int horas() const;
	float custo() const;
};

// -----------------------------------------------
// Metodos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{
	if (horas_ > 0)
		custo_ = preco_ / horas_;
}

inline int Jogo::horas() const
{
	return horas_;
}

inline float Jogo::custo() const
{
	return custo_;
}

// -----------------------------------------------
// Funções auxiliares
// -----------------------------------------------


const Jogo& maisJogado(const Jogo& jogo1, const Jogo& jogo2);
const Jogo& maisJogado(const Jogo& jogo1, const Jogo& jogo2);
