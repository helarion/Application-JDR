#ifndef Element_H
#define Element_H

#include <QVariant>
#include <QString>

class Element
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        quint16 type;
    public:
        Element (QString s_nom,quint16 s_type);	// Constructeur par défaut public
        Element (const Element & copie); // Constructeur de copie public
        Element (quint16 index);
        ~Element ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Element dans la console
        void Save();
        void Load(quint16 index);
        quint16 getNum();
        QString getNom();
        quint16 getType();
};

#endif
