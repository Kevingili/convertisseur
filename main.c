#include <stdio.h>
#include <stdlib.h>

int main()
{
     int choixMenu;
     int h, m, s;
     float tempC, tempF;
     float distKM, distMI;
     float volumeL, volumeG;
     char choix;

     do
     {

         printf("=== Convertisseur ===\n\n");
         printf("Choisir de convertir:\n");
         printf("1. une horaire (H,M,S) en duree en secondes\n");
         printf("2. une duree en secondes en horaire (H,M,S)\n");
         printf("3. une temperature en degre C, en degre Farenheit\n");
         printf("4. une temperature en degre Farenheit, en degre C\n");
         printf("5. une distance en kms, en miles\n");
         printf("6. une distance en milles, en kilometres\n");
         printf("7. un volume en litres, en gallois\n");
         printf("8. un volume gallons, en litres\n");
         printf("\nVotre choix ? ");
         scanf("%d", &choixMenu);
         printf("\n");
         switch (choixMenu)
         {
             case 1:
                 printf("Saisir heure(s)\n");
                 scanf("%d", &h);
                 printf("Saisir minute(s)\n");
                 scanf("%d", &m);
                 printf("Saisir seconde(s)\n");
                 scanf("%d", &s);

                 printf("%d h, %d min, %d sec = %d secondes", h, m, s, h*60*60+m*60+s);
                 break;

             case 2:
                 printf("Saisir secondes\n");
                 scanf("%d", &s);

                 printf("%d secondes = %d h, %d min, %d sec", s, s/60/60, s%3600/60, s-(3600*s/60/60)+(60*s%3600/60));
                 break;

             case 3:
                printf("saisir la temperature en degre C\n");
                scanf("%f", &tempC);

                printf("%1.2f degre C = %1.2f degre F", tempC, 1.8*tempC+32);
                break;

             case 4:
                printf("saisir la temperature en degre F\n");
                scanf("%f",&tempF);

                printf("%1.2f degre F = %1.2f degre C", tempF, (5.0/9.0)*tempF-160.0/9.0);
                break;

             case 5:
                printf("saisir une distance en km\n");
                scanf("%f", &distKM);

                printf("%1.2f km = %1.2f miles", distKM, distKM*0.6214);
                break;

             case 6:
                printf("saisir une distance en milles\n");
                scanf("%f", &distMI);

                printf("%1.2f mi = %1.2f km",distMI, distMI*1.609344);
                break;

             case 7:
                printf("saisir un volume en litres\n");
                scanf("%f", &volumeL);

                printf("%1.2f L = %1.2f G", volumeL, volumeL*0.264172052);
                break;

             case 8:
                printf("saisir un volume en gallons\n");
                scanf("%f", &volumeG);

                printf("%1.2f G = %1.2f L", volumeG, volumeG*3.78541178);
                break;
         }

         printf("\n\nune autre conversion? (o/n)\n\n");
         scanf("%s", &choix);
     }   while (choix == 'o');

    return 0;
}
