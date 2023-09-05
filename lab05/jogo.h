#include <string>
using std::string;

// -----------------------------------------------
// Declara��o da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome_;                                        // nome do jogo
	float preco_;                                        // pre�o do jogo
	int horas_;                                          // quantidade de horas jogadas
	float custo_;                                        // valor por hora jogada
	
	void calcular();                                    // calcular custo da hora jogada
	
public:
	Jogo(const string& nome, float preco);			// construtor da classe
	void atualizar(float preco);                        // atualizar pre�o do jogo
	void jogar(int horas);                              // registrar horas jogadas
	void exibir();                                      // mostrar informa��es
};

// -----------------------------------------------
// M�todos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{
	if (horas_ > 0)
		custo_ = preco_ / horas_;
}

// -----------------------------------------------