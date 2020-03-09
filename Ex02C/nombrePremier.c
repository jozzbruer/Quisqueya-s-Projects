/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nombrePremier.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:42:16 by jquince           #+#    #+#             */
/*   Updated: 2020/03/08 20:21:00 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>



void ft_menu(){

    printf( "====================================================================\n" );
    printf( " Pressez 1 pour savoir si un nombre est premier entre 1 a 50\n" );
    printf( " Pressez 2 pour trouver tous les nombres premiers entre deux valeurs\n" );
    printf( "====================================================================\n" );

}

int check_input(int i){
    return (i == 1 || i == 2 );
}


void isPremier(int n){
    bool isPremier = true;
    int i;
    if (n == 1)
        printf("%i est premier\n", n );
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
            printf("%i n'est pas premier\n", n );
        else
            printf("%i est premier", n );
    }
}


void isPremierU(int n){
    bool isPremier = true;
    int i;
    if (n == 1)
        printf("%i est premier\n", n );
    else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPremier = false;
                break;
            }
        }   
        if (isPremier)
            printf("%i est premier\n", n );
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
   char *choice;
    int input;
   int n;
   int val1;
   int val2;
        ft_menu();
           printf ("Pressez le chiffre de vrotre choix: ") ;
        scanf ("%s",choice);
        input = atoi(choice);
     while (!check_input(input)){
         system("clear"); // If you use a windows computer replace "clear" by "cls"
        ft_menu();
        printf (" Erreur, vous avez entrez un mauvais chiffre \n\n");
        printf ( "Pressez le chiffre de votre choix: ");
        scanf ("%s",choice);
        input = atoi(choice);
    }

    switch (input)
    {
    case 1:
        printf( "Entrer un nombre: ");
        scanf("%i", &n);

        while(n < 1 || n > 50){
        printf( "Erreur, entrer une autre valeur" );
        printf( "Entrez un nombre premier : ");
        scanf("%i", &n);
    }
         isPremier(n);
        break;
    
    case 2:
        printf( "Entrer un nombre pour val1: ");
         scanf("%i", &val1);

        while( val1 < 1 || val1 > 200 ){
        printf( "Erreur, entrer une autre valeur" );
        printf( "Entrer un nombre pour val1: ");
         scanf("%i", &val1);
    }

    printf( "Entrer un nombre pour val2: ");
       scanf("%i", &val2);

        while( val2 < 500 || val2 > 1000 ){
        printf( "Erreur, entrer une autre valeur" );
        printf( "Entrer un nombre pour val1: ");
        scanf("%i", &val2);
    }

    nbPemier(val1, val2);
        break;
    }

    return (0);
}