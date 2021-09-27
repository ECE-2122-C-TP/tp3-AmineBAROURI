#include <stdio.h>
int main()
{

/*  EXERCICE 1
int exercice1()
{
    int entier1 = 0 , entier2 = 0 ;
    printf ( "Entrez svp la valeur de votre premier entier: \n " ) ;
    scanf( "%d" , &entier1 ) ;
    printf ( " Entrez svp la valeur de votre deuxieme entier: \n " ) ;
    scanf ( " %d " , &entier2 ) ;
    if ( entier1 < entier2 )
    {
        printf ( " La plus grande valeur est %d " , entier2 ) ;
    }
    if ( entier1 = entier2 )
    {
        printf ( " La plus grande valeur est %d " , entier2 ) ;
    }
    if ( entier1 > entier2 )
    {
        printf ( " La plus grande valeur est %d " , entier1 ) ;
    }
}*/


/* EXERCICE 2
int exercice2()
{
    int longeurdurectangle = 0 , largeurdurectangle = 0 ;
    printf ( " Entrez svp la valeur de la largeur de votre rectangle: \n " ) ;
    scanf ( " %d ", &largeurdurectangle );
    printf ( " Entrez svp la valeur de la longeur de votre rectangle: \n " ) ;
    scanf ( "%d" , &longeurdurectangle ) ;
    printf ( " L'aire du rectangle est %d \n " , longeurdurectangle*largeurdurectangle ) ;
    printf ( " Le perimetre du rectangle est %d \n " , ( longeurdurectangle*2 ) +( largeurdurectangle*2 ) ) ;
}*/

/* EXERCICE 3
int exercice3()
{
    int valeur = 0 ;
    const int cst = 3 ;
    printf ( " Entrez svp la valeur : \n " ) ;
    scanf ( " %d " , &valeur ) ;
    if ( valeur%cst == 0 )
    {
        printf ( " Cette valeur est divisible par 3 \n " ) ;
        if ( valeur >= 10 )
        {
            printf ( " Cette valeur est superieur ou egal à 10 \n " ) ;
        }
        else
        {
            printf ( " Cette valeur n'est pas superieur ou égal à 10 \n " ) ;
        }
    }
    else
    {
        printf ( " Cette valeur n'est pas divisible par 3 \n " ) ;
        if ( valeur >= 10 )
        {
            printf ( " Cette valeur est superieur ou egal à 10 \n " ) ;
        }
        else
        {
            printf ( " Cette valeur n'est pas superieur ou égal à 10 \n " ) ;
        }
    }
}*/


/* EXERCICE 4
int exercice4()
{
    int age = 0 ;
    int etudiant = 0 ;
    printf ( " Entrez svp votre âge : \n " ) ;
    scanf( " %d " , &age ) ;
    if ( age >= 0 && age < 12 )
    {
        printf ( "Vous bénificiez du tarif enfant qui est de 4 euros \n " ) ;
    }
    else if ( age >= 12 && age <= 17 )
    {
        printf ( " Vous bénificiez du tarif jeune qui est de 6 euros \n " ) ;
    }
    else if ( age >= 17 && age <= 27 )
    {
        printf ( " Etes vous étudiant ? oui : 1 , non : 0 : \n " ) ;
        scanf ( "%d" , &etudiant ) ;
        if ( etudiant == 1 )
        {
                printf ( " Vous bénificiez du tarif jeune qui est de 6 euros \n " ) ;
        }
        else if ( etudiant == 0 )
        {
                printf ( " Vous bénificiez du tarif plein qui est de 9 euros \n " ) ;
        }
    }
    else if ( age >= 12 && age <= 27 )
    {
        printf ( "Vous bénificiez du tarif jeune qui est de 6 euros \n " ) ;
    }
    else if ( age >= 65 )
    {
        printf ( " Vous bénificiez du tarif sénior qui est de 6 euros \n " ) ;
    }
    else
    {
        printf ( "Vous bénificiez du tarif plein qui est de 9 euros \n " ) ;
    }
}*/

/*  EXERCICE 5
int exercice5()
{
    int numerodeboisson = 0 ;
    printf ( " Entrez svp votre numéro de boisson désiré : \n " ) ;
    scanf( " %d " , &numerodeboisson ) ;
    if ( numerodeboisson == 1 )
    {
        printf ( "La boisson sélectionné est : Coca-cola \n " ) ;
    }
    else if ( numerodeboisson == 2 )
    {
        printf( " La boisson sélectionné est : Fanta \n " ) ;
    }
    else if ( numerodeboisson == 3 )
    {
        printf ( "La boisson sélectionné est : Sprite \n " ) ;
    }
    else if ( numerodeboisson == 10 )
    {
        printf ( "La boisson sélectionné est : Café \n " ) ;
    }
    else if ( numerodeboisson == 11 )
    {
        printf ( " La boisson sélectionné est : thé \n " ) ;
    }
    else
    {
        printf ( " ERREUR : La boisson sélectionné n'existe pas \n " ) ;
    }
}*/

/* EXERCICE 6
int exercice6()
{
    float note1 = 0 ;
    float note2 = 0 ;
    float note3 = 0 ;
    printf ( " Entrez svp votre premiere note comprise entre 0 et 20 : \n " ) ;
    printf ( " Entrez svp votre deuxieme note comprise entre 0 et 20 : \n " ) ;
    printf ( " Entrez svp votre troisieme note comprise entre 0 et 20 : \n " ) ;
    scanf ( "%f" , &note1 ) ;
    scanf ( "%f" , &note2 ) ;
    scanf ( "%f" , &note3 ) ;
    while ( note1 < 0 || note1 > 20 )
    {
        printf ( " ERREUR : Entrez svp votre premiere note comprise entre 0 et 20 : \n " ) ;
        scanf ( " %f " , &note1 ) ;
    }
    while ( note2 < 0 || note2 > 20 )
    {
        printf ( " ERREUR : Entrez svp votre deuxieme note comprise entre 0 et 20 : \n " ) ;
        scanf ( "%f" , &note2 ) ;
    }
    while ( note3 < 0 || note3 > 20 )
    {
        printf ( " ERREUR : Entrez svp votre troisième note comprise entre 0 et 20 : \n " ) ;
        scanf ( " %f " , &note3 ) ;
    }
    printf ( " La moyenne de vos 3 notes est : %f " , ( note1 + note2 + note3 ) / 3 ) ;
}*/

/*  EXERCICE 7
int exercice7()
{
    int nbdeclasse = 0 ;
    int nbparclasse = 0 ;
    int i = 0 ;
    int nbtotal = 0 ;
    printf ( " Entrez svp le nombre de classe : \n" ) ;
    scanf ( "%d" , &nbdeclasse ) ;
    for ( i = 1 ; i <= nbdeclasse ; i++ )
    {
        printf ( " Entrez svp le nombre d'élève dans la classe %d : \n" , i) ;
        scanf( "%d" , &nbparclasse ) ;
        nbtotal = nbtotal + nbparclasse ;

    }
    printf ( "Le nombre total d'élève : %d" , nbtotal ) ;
}*/

/*  EXERCICE 8
int exercice8()
{
    int valeur = 0 ;
    printf ( "Entrez svp une valeur qui est à la fois multiple de 2 et de 7 : \n" ) ;
    scanf (" %d " , &valeur ) ;
    while ( valeur % 2 != 0 || valeur % 7 != 0 )
    {
        printf (" Erreur : Entrez svp une valeur qui est à la fois mulmtiple de 2 et de 7 : \n") ;
        scanf (" %d " , &valeur ) ;
    }
    printf (" Votre valeur est à la fois un multiple de 7 et de 2 %d : \n") ;
}*/

/* EXERCICE 9
int exercice9()
{
    int nbpierre = 0 ;
    int a = 1 ;
    int b = 0 ;
    printf ( " Entrez svp votre nombre de pierre : \n " ) ;
    scanf (" %d " , &nbpierre ) ;
    if ( nbpierre == a*a+b )
    {
        printf ( " On peux construire %d étages avec vos pierres : \n " , a ) ;
    }
    else
    {
        while ( nbpierre >= a*a+b )
        {
            b = b + a*a ;
            a = a + 1 ;
        }
    }
    printf ( " On peux construire %d étages avec vos pierres : \n " , a ) ;
}*/

/* EXERCICE 10
int exercice10()
{
    int valeur = 0 ;
    int sommethermespositif = 0 ;
    int compteur = 0 ;
    float moyenne = 0 ;
    printf ( " Entrez une valeur : \n " ) ;
    scanf (" %d " , &valeur ) ;
    sommethermespositif == valeur ;
    while ( valeur >= 0 )
    {
        printf ( " Entrez une nouvelle valeur : \n " ) ;
        scanf (" %d " , &valeur ) ;
        sommethermespositif = sommethermespositif + valeur ;
        compteur = compteur + 1 ;
    }
    if ( valeur < 0)
    {
        moyenne == sommethermespositif / compteur ;
    }
    printf ( " La moyenne de cette série de valeur est %f : \n " , moyenne ) ;
} */

}







