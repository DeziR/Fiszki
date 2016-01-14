#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "przymiotniki_na_pol.c"
#include "przymiotniki_na_pol.h"
#include "przymiotniki_na_ang.c"
#include "przymiotniki_na_ang.h"

void przymiotniki(){
	char x;
	do
	{
	 system("clear");
	 printf("Wybrales przymiotniki\n");
	 printf("Aby tlumaczyc slowka na jezyk polski - nacisnij 1\n");
	 printf("Aby tlumaczyc slowka na jezyk angielski - nacisnij 2\n");
	 printf("Aby cofnac do poprzedniego menu - nacisnij B\n");
	 printf("Aby wylaczyc program - nacisnij Q\n");
	 scanf("%c", &x);
	 switch (x)
	 {
		case '1':
		  przymiotniki_na_pol();
		  break;
		case '2':
		  przymiotniki_na_ang();
		  break;
		case 'b':
		  menu();
		  break;
		case 'B':
		  menu();
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
	 }
 }while ((x!='1') && (x!='2') && (x!='q') && (x!='Q') && (x!='b') && (x!='B'));
}

