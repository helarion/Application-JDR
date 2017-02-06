#ifndef ObjetCol_H
#define ObjetCol_H

#include <QVariant>
#include <QString>
#include "elementObjet.h"

class ObjetCol
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        ElementObjet* elementObjet;
    public:
        ObjetCol (QString s_nom,ElementObjet* s_elementObjet);	// Constructeur par défaut public
        ObjetCol (const ObjetCol & copie); // Constructeur de copie public
        ObjetCol (quint16 index);
        ~ObjetCol ();				// Destructeur public
        void afficher () const;	// Affiche les informations du ObjetCol dans la console
        void Save();
        void Load(quint16 index);
        quint16 getNum();
        QString getNom();
        ElementObjet* getElementObjet();
};

#endif
