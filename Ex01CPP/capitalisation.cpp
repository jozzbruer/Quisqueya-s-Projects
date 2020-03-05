/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capitalisation.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 21:45:19 by jquince           #+#    #+#             */
/*   Updated: 2020/03/04 20:00:21 by jquince          ###   ########.fr       */
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
    cout << " Pressez 1 pour calculer la valeur acquise" << endl;
    cout << " Pressez 2 pour calculer le placement initial" << endl;
    cout << " Pressez 3 pour calculer le Terme du pret" << endl;
    cout << " Pressez 4 pour calculer les interets du placement" << endl;
    cout << "====================================================================" << endl;

}

int check_input(int i){
    return (i == 1 || i == 2 || i == 3 || i == 4);
}

void ft_valeur_acquise(){
    int somme_initiale;
    int temps; 
    double pourcentage_de_placement;
    double somme_finale;

    cout << "Entrer la somme initiale: " ;
    cin >> somme_initiale;

    while (somme_initiale <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau la somme initiale: " ;
        cin >> somme_initiale;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Entrer le temps de votre placement en Nombre annee: " ;
    cin >> temps;

    while (temps <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau le temps de votre placement: " ;
        cin >> temps;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Entrer le pourcentage de placement: " ;
    cin >> pourcentage_de_placement;

    while (pourcentage_de_placement <= 0 || pourcentage_de_placement > 1 )
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau votre pourcentage: " ;
        cin >> pourcentage_de_placement;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    somme_finale = somme_initiale * pow((1 + pourcentage_de_placement), temps);

    cout << "La valeure acquise est: " << somme_finale << " Gourdes" << endl;
    
}

void ft_placement_initial(){
    double somme_initiale;
    int temps; 
    double pourcentage_de_placement;
    double somme_finale;

    cout << "Entrer la somme finale: " ;
    cin >> somme_finale;

    while (somme_finale <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau la somme finale: " ;
        cin >> somme_finale;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Entrer le temps de votre placement en Nombre annee: " ;
    cin >> temps;

    while (temps <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau le temps de votre placement: " ;
        cin >> temps;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Entrer le pourcentage de placement: " ;
    cin >> pourcentage_de_placement;

    while (pourcentage_de_placement <= 0 || pourcentage_de_placement > 1 )
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau votre pourcentage: " ;
        cin >> pourcentage_de_placement;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    somme_initiale = somme_finale * pow((1 + pourcentage_de_placement), -temps);

    cout << "La valeure initiale est: " << somme_initiale << " Gourdes" << endl;
}


void ft_terme_du_pret(){
    double somme_initiale;
    int temps; 
    double pourcentage_de_placement;
    double somme_finale;

    cout << "Entrer la somme initiale: " ;
    cin >> somme_initiale;

    while (somme_initiale <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau la somme initiale: " ;
        cin >> somme_initiale;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Entrer la somme finale: " ;
    cin >> somme_finale;

    while (somme_finale <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau la somme finale: " ;
        cin >> somme_finale;
        cin.clear();
        cin.ignore(1000, '\n');
    }


    cout << "Entrer le pourcentage de placement: " ;
    cin >> pourcentage_de_placement;

    while (pourcentage_de_placement <= 0 || pourcentage_de_placement > 1 )
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau votre pourcentage: " ;
        cin >> pourcentage_de_placement;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    double logSomF = log(somme_finale);
    double logSomI = log(somme_initiale);
    double logPourc = log(1 + pourcentage_de_placement);
    temps = (logSomF + logSomI) / logPourc;

    cout << "La valeure initiale est: " << temps << " An(s)" << endl;
    
}

void ft_interet_de_placement(){
    double somme_initiale;
    float temps; 
    double pourcentage_de_placement;
    double somme_finale;

    cout << "Entrer la somme initiale: " ;
    cin >> somme_initiale;

    while (somme_initiale <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau la somme initiale: " ;
        cin >> somme_initiale;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Entrer la somme finale: " ;
    cin >> somme_finale;

    while (somme_finale <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau la somme finale: " ;
        cin >> somme_finale;
        cin.clear();
        cin.ignore(1000, '\n');
    }


    cout << "Entrer le temps de votre placement en Nombre annee: " ;
    cin >> temps;

    while (temps <= 0)
    {
        system("clear"); // If you have a windows computer use System("cls")
        cout << "Vous avez fais une erreure, rentrer a nouvau le temps de votre placement: " ;
        cin >> temps;
        cin.clear();
        cin.ignore(1000, '\n');
    }
   double resulSom = somme_finale/somme_initiale;
   float tmps = 1/temps;
   pourcentage_de_placement = pow(resulSom, tmps) ;

    cout << "Le pourcentage de placement est: " << (pourcentage_de_placement - 1) * 100  << " %" << endl;

}

int main(){
    int choice;
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
         /* code */
         ft_valeur_acquise();
         break;
     case 2:
        ft_placement_initial();
        break;
     case 3:
        ft_terme_du_pret();
        break;
     case 4:
         ft_interet_de_placement();
         break;
     }
    
    return 0; 
}