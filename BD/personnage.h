#ifndef Personnage_H
#define Personnage_H

#include <QString>

#include "BD/Partie.h"

class Personnage
{
	private:
        QString joueur;
        QString nom;
        QString prenom;
		int age;
        QString description;
        QString background;
        QString invArmure;
        QString invArme;
        QString invObjet;
        QString sexe;
        QString titre;
        Partie partie;
        QString titrePartie;
        QVector<QString> valeurAttribut;
	public:
        Personnage();
        Personnage(QString titre);
        Personnage(QString s_joueur, QString s_nom, QString s_prenom, int s_age,
                   QString s_description, QString s_background, QString s_invArmure,
                   QString s_invArme, QString s_invObjet,QString s_sexe,
                   Partie s_partie, QVector<QString> s_valeurAttribut);
        QString getTitre();
        QString getNom();
        QString getPrenom();
        QString getJoueur();
        QString getBackground();
        QString getInvArme();
        QString getInvArmure();
        QString getInvObjet();
        int getAge();
        QString getDescription();
        QString getSexe();
        Partie getPartie();
        QVector<QString> getValeurAttribut();
        void setValeurAttribut(QVector<QString> list);
        void setNom(QString s_nom);
        void setPrenom(QString s_prenom);
        void setAge(int s_age);
        void setJoueur(QString s_joueur);
        void setDescription(QString s_description);
        void setSexe(QString s_sexe);
        void setPartie(Partie s_partie);
        void setInvObjet(QString s_invObjet);
        void setInvArmure(QString s_invArmure);
        void setInvArme(QString s_invArme);
        void setBackground(QString s_background);
        void afficher();
        void Save();
        void Load(QString titre);
};

#endif
