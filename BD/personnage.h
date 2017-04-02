#include <QString>

class Personnage
{
	private:
		int num;
		int campagne;
		int partie;
		int joueur;
        QString nom;
        QString prenom;
		int age;
        QString description;
        QString equipement;
        QString sexe;
	public:
        Personnage();
        QString getTitre();
};
