/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nombrePremier.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:42:16 by jquince           #+#    #+#             */
/*   Updated: 2020/03/08 20:21:52 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctype.h>
#include <math.h>

using namespace std;

void ft_menu(){

    cout << "====================================================================" << endl;
    cout << " Pressez 1 pour savoir si un nombre est premier entre 1 a 50" << endl;
    cout << " Pressez 2 pour trouver tous les nombres premiers entre deux valeurs" << endl;
    cout << "====================================================================" << endl;

}

int check_input(int i){
    return (i == 1 || i == 2 );
}


void isPremier(int n){
    bool isPremier = true;
    int i;
    if (n == 1)
        cout << n << " est premier." << endl;
    else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPremier = false;
                break;
            }
        }   
        if (!isPremier)
            cout << n << " n'est pas premier." << endl;
        else
            cout << n << " est premier." << endl;
    }
}

void isPremierU(int n){
    bool isPremier = true;
    int i;
    if (n == 1)
        cout << n << " est premier." << endl;
    else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPremier = false;
                break;
            }
        }   
        if (!isPremier)
            cout << n << " est premier." << endl;
    }
}

void nbPemier(int val1, int val2){
    int i;
    for (int i = val1; i <= val2; i++)
    {
       isPremierU(i); 
    }
}




int main(){
   int choice;
   int n;
   int val1;
   int val2;
        ft_menu();
        cout << "Pressez le chiffre de vrotre choix: " ;
        cin >> choice;
        
     while (!check_input(choice)){
         system("clear"); // If you use a windows computer replace "clear" by "cls"
         ft_menu();
        cout << "Erreur, vous avez entrez un mauvais chiffre" << endl;
        cout << "Pressez le chiffre de votre choix: ";
        cin >> choice;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    switch (choice)
    {
    case 1:
        cout << "Entrer un nombre: ";
        cin >> n;

        while(n < 1 || n > 50){
        cout << "Erreur, entrer une autre valeur" << endl;
        cout << "Entrez un nombre premier : ";
        cin >> n;
        cin.clear();
        cin.ignore (1000, '\n');
    }
         isPremier(n);
        break;
    
    case 2:
        cout << "Entrer un nombre pour val1: ";
        cin >> val1;

        while( val1 < 1 || val1 > 200 ){
        cout << "Erreur, entrer une autre valeur" << endl;
        cout << "Entrer un nombre pour val1: ";
        cin >> val1;
        cin.clear();
        cin.ignore (1000, '\n');
    }

    cout << "Entrer un nombre pour val2: ";
        cin >> val2;

        while( val2 < 500 || val2 > 1000 ){
        cout << "Erreur, entrer une autre valeur" << endl;
        cout << "Entrer un nombre pour val1: ";
        cin >> val2;
        cin.clear();
        cin.ignore (1000, '\n');
    }

    nbPemier(val1, val2);
        break;
    }

    return (0);
}