#ifndef ElementObjet_H
#define ElementObjet_H

#include <QVariant>
#include <QString>

class ElementObjet
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        bool preset;
    public:
        ElementObjet (QString s_nom,bool s_preset);	// Constructeur par défaut public
        ElementObjet (const ElementObjet & copie); // Constructeur de copie public
        ElementObjet (quint16 index);
        ~ElementObjet ();				// Destructeur public
        void afficher () const;	// Affiche les informations du ElementObjet dans la console
        void Save();
        void Load(quint16 index);
        quint16 getNum();
        bool getPreset();
        Jeu* getJeu();
};

#endif
