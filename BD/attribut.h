#ifndef Attribut_H
#define Attribut_H

#include <QVariant>
#include <QString>

class Attribut
{
    private:
        QString nom;
        QString titre;
        int type;
        bool preset;
    public:
        Attribut (QString s_nom,int s_type,bool s_preset);	// Constructeur par défaut public
        Attribut (const Attribut & copie); // Constructeur de copie public
        Attribut (QString titre);
        Attribut();
        ~Attribut ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Attribut dans la console
        void Save();
        void Load(QString nomFichier);
        QString getNom();
        int getType();
        QString getTitre();
        bool getPreset();
        void setNom(QString nom);
        void setType(int type);
        void setPreset(bool preset);
};

#endif
