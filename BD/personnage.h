#ifndef Personnage_H
#define Personnage_H

#include <QString>

class Personnage
{
	private:
        QString nom;
        QString prenom;
		int age;
        QString description;
        QString sexe;
        QString titre;
	public:
        Personnage();
        Personnage(QString titre);
        Personnage(QString s_nom, QString s_prenom, int s_age, QString s_description, QString s_sexe);
        QString getTitre();
        QString getNom();
        QString getPrenom();
        QString getAge();
        QString getDescription();
        QString getSexe();
        void setNom(QString s_nom);
        void setPrenom(QString s_prenom);
        void setAge(int s_age);
        void setDescription(QString s_description);
        void setSexe(QString s_sexe);
        void afficher();
        void Save();
        void Load(QString titre);
};

#endif
