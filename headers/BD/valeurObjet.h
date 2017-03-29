#ifndef ValeurObjet_H
#define ValeurObjet_H

#include <QVariant>
#include <QString>

class ValeurObjet
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        QString titre;
        quint16 type;
        bool preset;
    public:
        ValeurObjet (QString s_nom,quint16 s_type,bool s_preset);	// Constructeur par défaut public
        ValeurObjet (const ValeurObjet & copie); // Constructeur de copie public
        ValeurObjet (QString titre);
        ValeurObjet();
        ~ValeurObjet ();				// Destructeur public
        void afficher () const;	// Affiche les informations du ValeurObjet dans la console
        void Save();
        void Load(QString titre);
        quint16 getNum();
        QString getNom();
        quint16 getType();
        bool getPreset();
};

#endif
