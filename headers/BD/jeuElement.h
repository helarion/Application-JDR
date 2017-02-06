#ifndef JeuElement_H
#define JeuElement_H

#include <QVariant>
#include <QString>
#include "Jeu.h"
#include "element.h"

class JeuElement
{
    private:
        Jeu* jeu;
        Element* element;
    public:
        JeuElement (Jeu* s_jeu, Element* s_element);	// Constructeur par défaut public
        JeuElement (const JeuElement & copie); // Constructeur de copie public
        JeuElement (quint16 index);
        ~JeuElement ();				// Destructeur public
        void afficher () const;	// Affiche les informations du JeuElement dans la console
        void Save();
        void Load(quint16 index);
        Element* getElement();
        Jeu* getJeu();
};

#endif
