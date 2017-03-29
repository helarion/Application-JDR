#ifndef Attribut_H
#define Attribut_H

#include <QVariant>
#include <QString>

class Attribut
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        QString titre;
        quint16 type;
        bool preset;
    public:
        Attribut (QString s_nom,quint16 s_type,bool s_preset);	// Constructeur par défaut public
        Attribut (const Attribut & copie); // Constructeur de copie public
        Attribut (QString titre);
        Attribut();
        ~Attribut ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Attribut dans la console
        void Save();
        void Load(QString titre);
        quint16 getNum();
        QString getNom();
        quint16 getType();
        bool getPreset();
};

#endif
