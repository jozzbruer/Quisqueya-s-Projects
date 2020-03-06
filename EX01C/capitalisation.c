/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capitalisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 21:45:19 by jquince           #+#    #+#             */
/*   Updated: 2020/03/05 19:53:48 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



void ft_menu(){

    printf  ("====================================================================\n");
    printf ( " Pressez 1 pour calculer la valeur acquise\n" );
    printf (" Pressez 2 pour calculer le placement initial\n");
    printf ( " Pressez 3 pour calculer le Terme du pret\n");
    printf ( " Pressez 4 pour calculer les interets du placement\n");
    printf ( "====================================================================\n");

}

int check_input(int i){
    return (i == 1 || i == 2 || i == 3 || i == 4);
}

void ft_valeur_acquise(){
    int somme_initiale;
    int temps; 
    double pourcentage_de_placement;
    double somme_finale;

    printf ("Entrer la somme initiale: ") ;
    scanf ("%i", &somme_initiale);

    // while (somme_initiale <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("Vous avez fais une erreure, rentrer a nouvau la somme initiale: ") ;
    //     scanf ("%i",&somme_initiale);
    // }

    printf ( "Entrer le temps de votre placement en Nombre annee: ") ;
    scanf ("%i", &temps);

    // while (temps <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("Vous avez fais une erreure, rentrer a nouvau le temps de votre placement: " );
    //     scanf ("%d", &temps);
    // }

    printf ("Entrer le pourcentage de placement: ") ;
    scanf ("%lf", &pourcentage_de_placement);

    // while (pourcentage_de_placement <= 0 || pourcentage_de_placement > 1 )
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ( "Vous avez fais une erreure, rentrer a nouvau votre pourcentage: ") ;
    //     scanf ("%lf", &pourcentage_de_placement);
    // }

    somme_finale = somme_initiale * pow((1 + pourcentage_de_placement), temps);

    printf("La somme finale est: %lf Gourdes", somme_finale);
    
}

void ft_placement_initial(){
    double somme_initiale;
    int temps; 
    double pourcentage_de_placement;
    double somme_finale;

    printf ("Entrer la somme finale: ") ;
    scanf ("%lf", &somme_finale);

    // while (somme_finale <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("Vous avez fais une erreure, rentrer a nouvau la somme finale: " );
    //     scanf ("%lf", &somme_finale);
    // }

    printf ("%s", "Entrer le temps de votre placement en Nombre annee: ") ;
    scanf ("%d", &temps);

    // while (temps <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("%s", "Vous avez fais une erreure, rentrer a nouvau le temps de votre placement: ") ;
    //     scanf ("%d", &temps);
    // }

    printf ("%s", "Entrer le pourcentage de placement: ") ;
    scanf ("%lf", &pourcentage_de_placement);

    // while (pourcentage_de_placement <= 0 || pourcentage_de_placement > 1 )
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("Vous avez fais une erreure, rentrer a nouvau votre pourcentage: ") ;
    //     scanf ("%lf", &pourcentage_de_placement);
    // }

    somme_initiale = somme_finale * pow((1 + pourcentage_de_placement), - temps);

    printf ("La valeure initiale est: %lf Gourdes", somme_initiale);
}


void ft_terme_du_pret(){
    double somme_initiale;
    int temps; 
    double pourcentage_de_placement;
    double somme_finale;

    printf ("%s", "Entrer la somme initiale: " );
    scanf ("%lf",&somme_initiale);

    // while (somme_initiale <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("Vous avez fais une erreure, rentrer a nouvau la somme initiale: ") ;
    //     scanf ("%lf",&somme_initiale);
    // }

    printf ("%s", "Entrer la somme finale: " );
    scanf ("%lf",&somme_finale);

    // while (somme_finale <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("%s", "Vous avez fais une erreure, rentrer a nouvau la somme finale: ") ;
    //     scanf ("%lf",&somme_finale);
    // }


    printf ("%s", "Entrer le pourcentage de placement: ") ;
     scanf ("%lf",&pourcentage_de_placement);

    // while (pourcentage_de_placement <= 0 || pourcentage_de_placement > 1 )
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("%s", "Vous avez fais une erreure, rentrer a nouvau votre pourcentage: " );
    //     scanf ("%lf",&pourcentage_de_placement);
    // }
    double logSomF = log(somme_finale);
    double logSomI = log(somme_initiale);
    double logPourc = log(1 + pourcentage_de_placement);
    temps = (logSomF + logSomI) / logPourc;

    printf ("La valeure initiale est: %i An(s)" , temps);
    
}

void ft_interet_de_placement(){
    double somme_initiale;
    float temps; 
    double pourcentage_de_placement;
    double somme_finale;

    printf ("%s", "Entrer la somme initiale: ") ;
    scanf ("%lf",&somme_initiale);

    // while (somme_initiale <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("%s", "Vous avez fais une erreure, rentrer a nouvau la somme initiale: " );
    //     scanf ("%lf",&somme_initiale);
    // }

    printf ("%s", "Entrer la somme finale: ") ;
    scanf ("%lf",&somme_finale);

    // while (somme_finale <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("%s", "Vous avez fais une erreure, rentrer a nouvau la somme finale: " );
    //     scanf ("%lf",&somme_finale);
    // }


    printf ("%s", "Entrer le temps de votre placement en Nombre annee: ") ;
    scanf ("%f", &temps);

    // while (temps <= 0)
    // {
    //     system("clear"); // If you have a windows computer use System("cls")
    //     printf ("%s", "Vous avez fais une erreure, rentrer a nouvau le temps de votre placement: ") ;
    //     scanf ("%f", &temps);
    // }
   double resulSom = somme_finale/somme_initiale;
   float tmps = 1/temps;
   pourcentage_de_placement = pow(resulSom, tmps) ;

    printf ("Le pourcentage de placement est: %lf", (pourcentage_de_placement - 1) * 100);

}

int main(){
    int choice;
        ft_menu();
        printf ("Pressez le chiffre de vrotre choix: ") ;
        scanf ("%d",&choice);
    //  while (!check_input(choice)){
    //      system("clear"); // If you use a windows computer replace "clear" by "cls"
    //      ft_menu();
    //     printf ("Erreur, vous avez entrez un mauvais chiffre \n");
    //     printf ( "Pressez le chiffre de votre ch");
    //     scanf ("%d",&choice);
    // }
    
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