#ifndef VALEUR_H
#define VALEUR_H


class valeur
{
private:
int valx;
int valy;

public:
    valeur();
    int positionx();
    int positiony();
    void augmentex(int a);

    void diminuex(int a);
    void augmentey(int a);

    void diminuey(int a);


};

#endif // VALEUR_H
