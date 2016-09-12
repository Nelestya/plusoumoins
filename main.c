#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game()
{
  const int MIN = 1;
  int MAX;
  int nombremyst;
  int entrer;
  char lettre;
  int compteur;

  printf("choisissez votre niveau de difficulté \n\n");
  printf("1 - entre 1 et 100\n\n");
  printf("2 - entre 1 et 1000\n\n");
  printf("3 - entre 1 et 10000\n\n");
  scanf("%d", &entrer);
  switch(entrer)
    {
    case 1:
      MAX = 100;
      break;
    case 2:
      MAX = 1000;
      break;
      case 3:
      MAX = 10000;
      break;
    default:
      printf("veuillez taper un numéro entre 1 et 3 \n\n");
      game();
      break;
    }
  nombremyst = (rand() % (MAX - MIN + 1)) + MIN;

  do
    {
      printf("Quel est le nombre mystere?\n");
      scanf("%d", &entrer);
      compteur++;
      if (nombremyst > entrer)
	{
	  printf("c\'est plus \n\n");
	}
      else if (nombremyst < entrer)
	{
	  printf("c\'est moins \n\n");
	}
      else
	{
	  printf("Bravo, vous avez trouvé le nombre mystère en %d coups\n", compteur);
	}
    } while(entrer != nombremyst);
  printf("voulez vous faire une nouvelle partie? (1/0) \n\n");
  scanf("%d", &lettre);
  if(lettre)
    game();
  else
    return 0;
}

int main()
{
  srand(time(NULL));
  game();
  return 0;
}
