#ifndef AttributObjet_H
#define AttributObjet_H

#include "headers/BD/attribut.h"

#include <QVector>
#include <QVariant>
#include <QString>

class AttributObjet
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        bool preset;
        QVector<Attribut> listAttributs;
    public:
        AttributObjet (QString s_nom,bool s_preset);	// Constructeur par défaut public
        AttributObjet (const AttributObjet & copie); // Constructeur de copie public
        AttributObjet (quint16 index);
        ~AttributObjet ();				// Destructeur public
        void afficher () const;	// Affiche les informations du AttributObjet dans la console
        void Save();
        void Load(quint16 index);
        quint16 getNum();
        bool getPreset();
        QString getTitre();
        QVector<Attribut> getListAttributs();
};

#endif
