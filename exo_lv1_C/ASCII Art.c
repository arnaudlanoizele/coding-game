#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    int largeur;
    int hauteur;
    scanf("%d %d", &largeur, &hauteur);
    getchar(); // Consomme le retour à la ligne laissé par scanf

    char texte[200];
    fgets(texte, sizeof(texte), stdin); // Pour lire une ligne entiere espace compris
    texte[strcspn(texte, "\n")] = '\0';

    char ligne[27 * largeur + 2];

    for (int i = 0; i < hauteur; i++)
    {
        fgets(ligne, sizeof(ligne), stdin);

            for (int j = 0; texte[j] != '\0'; j++)
            {
                char lettre = toupper((unsigned char)texte[j]);
                int indice;
                
                if (lettre >= 'A' && lettre <= 'Z')
                {
                    indice = lettre - 'A';
                }
                else
                {
                    indice = 26;
                }

                int debut = indice * largeur;

                for (int k = 0; k < largeur; k++)
                {
                    printf("%c", ligne[debut + k]);
                }

            }
        printf("\n");
    }

    return 0;
}


