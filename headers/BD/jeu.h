#ifndef jeu_H
#define jeu_H

#include <QVariant>
#include <QString>


class jeu
{
    public:
        jeu (const QString s_nom = "",const QString s_adrTheme = "");	// Constructeur par défaut public
        jeu (const jeu & copie); // Constructeur de copie public
        ~jeu ();				// Destructeur public
        void afficher () const;	// Affiche les informations du jeu dans la console
        static void initJeuSystem ();
        void Save();
        void Load();
        quint16 getNum();
        QString getNom();
        QString getTheme();
	private:
        static quint16 increment;
        quint16 num;
        QString nom;
        QString adrTheme;

        friend QDataStream & operator << (QDataStream &, const jeu &);
        friend QDataStream & operator >> (QDataStream &, jeu &);
};

Q_DECLARE_METATYPE(jeu)
QDataStream & operator << (QDataStream & out, const jeu & valeur);
QDataStream & operator >> (QDataStream & in, jeu & valeur);

#endif
