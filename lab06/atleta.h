class Atleta
{
private:
    int tentativas_;
    int acertos_;
    float percentual_;

    void calcular();
public:
    void exibir();
    Atleta acumular(int tentativas, int acertos);
};

inline void Atleta::calcular()
{
    if (tentativas_ != 0)
        percentual_ = 100.0f * acertos_ / tentativas_;
    else
        percentual_ = 0;
}