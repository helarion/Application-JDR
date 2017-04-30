#ifndef Personnage_H
#define Personnage_H

#include <QString>

#include "BD/campagne.h"

class Personnage
{
	private:
        QString nom;
        QString prenom;
		int age;
        QString description;
        QString sexe;
        QString titre;
        Campagne campagne;
        QString titreCampagne;
        QVector<QString> valeurAttribut;
	public:
        Personnage();
        Personnage(QString titre);
        Personnage(QString s_nom, QString s_prenom, int s_age,
                   QString s_description, QString s_sexe,
                   Campagne s_campagne, QVector<QString> s_valeurAttribut);
        QString getTitre();
        QString getNom();
        QString getPrenom();
        int getAge();
        QString getDescription();
        QString getSexe();
        QVector<QString> getValeurAttribut();
        QVector<QString> getValeurInformation();
        QVector<QString> getValeurValeur();
        QVector<QString> getValeurCompetence();
        void setValeurAttribut(QVector<QString> list);
        void setValeurValeur(QVector<QString> list);
        void setValeurCompetence(QVector<QString> list);
        void setValeurInformation(QVector<QString> list);
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
