#include <iostream>
#include "Film.h"
int main() {
    Film *One = new Film();
    Film *Two = new Film();
    DramaGenre *typeDrama = new DramaGenre();
    HorrorGenre *typeHorror = new HorrorGenre();
    FantasyGenre *typeFantasy= new FantasyGenre();

    cout << endl << endl << " One:" << endl;

    One->addGenre(typeHorror);
    One->addGenre(typeDrama);
    One->performallGenre();

    cout << endl << endl << " Two:" << endl;
    Two->addGenre(typeDrama);
    Two->addGenre(typeFantasy);
    Two->performallGenre();
}
