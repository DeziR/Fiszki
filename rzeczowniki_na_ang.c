#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int rzeczowniki_na_ang_czy_rowne(char n[1000], char m[1000]){
	int dl=0;
	int flag=0;
	int i;
	dl=strlen(m);
	for(i=0;i<dl;i++){
		if(n[i]!=m[i]){
			flag++;
			break;
		};
	};
	printf("--------------------\n");
	if (flag>0) return 0;
	else return 1;
}

void rzeczowniki_na_ang(){
	char* tab[1000];
	char tab2[1000];
	char x;
	int i=1;
	int l;
	int score=0;
	int bool=0;
	printf("Po pojawieniu sie slowka, wpisz jego tlumaczenie na jezyk angielski. Powodzenia!\n");	
    FILE *fp;
    if ((fp=fopen("rzeczownikinaang.txt", "r"))==NULL)
    {
    printf("Nie mozna otworzyc  pliku!");
    exit(1);
    };
    while(fscanf(fp, "%d", &i) != EOF)
    { 
	 tab[i]=malloc(511);
	 fgets(tab[i],511,fp);
	 i++;
	};
    srand(time(NULL));
    miejsce_skoku:
    do
    {
      l=rand()%300+1;
    } while (l%2==0);
    printf("Przetlumacz na jezyk angielski: ");
    printf("%s", tab[l]);
    scanf("%s", tab2);
    bool=rzeczowniki_na_ang_czy_rowne(tab[l+1],tab2);
    if(bool==1){
		printf("Brawo!\n");
		score++;
		scanf("%c", &x);
	}
	else {
	printf("Niestety nie udalo sie\n");
	printf("Twoj wynik to %d\n", score);
	};
	printf("Jesli chcesz uczyc sie dalej - nacisnij D\n");
	printf("Aby cofnac do poprzedniego menu - nacisnij B\n");
	printf("Jesli chcesz wyjsc - nacisnij Q\n");
	do
	{
	 scanf("%c", &x);
	 switch (x)
	 {
		case 'd':
		  goto miejsce_skoku;
		  break;
		case 'D':
		  goto miejsce_skoku;
		  break;
		case 'b':
		  rzeczowniki();
		  break;
		case 'B':
		  rzeczowniki();
		  break;
		case 'q':
		  printf("Program zamknie sie za 2 sekundy.\n");
		  sleep(2);
		  exit(0);
		  break;
		case 'Q':
		  printf("Program zamknie sie za 2 sekundy.\n");
		  sleep(2);
		  exit(0);
		  break;
		default:
		  printf("Zle wybrales! Wybierz jeszcze raz!\n");
		  break;
	 };
	} while ((x!='q') && (x!='Q') && (x!='b') && (x!='B') && (x!='d') && (x!='D'));
	fclose(fp);
}

 
