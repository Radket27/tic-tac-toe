/* program name: tic */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int SI(char tablica[3][3]){
	int koniec = 0;
	int losowa;
	while(koniec == 0){
		srand(time(NULL));
    	losowa = rand() % 9;
		switch(losowa){
			case 0:
			if((tablica[0][0] == 88) || (tablica[0][0] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 1:
			if((tablica[0][1] == 88) || (tablica[0][1] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 2:
			if((tablica[0][2] == 88) || (tablica[0][2] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 3:
			if((tablica[1][0] == 88) || (tablica[1][0] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 4:
			if((tablica[1][1] == 88) || (tablica[1][1] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 5:
			if((tablica[1][2] == 88) || (tablica[1][2] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 6:
			if((tablica[2][0] == 88) || (tablica[2][0] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 7:
			if((tablica[2][1] == 88) || (tablica[2][1] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
			case 8:
			if((tablica[2][2] == 88) || (tablica[2][2] == 79)){
			}
			else{
				koniec = 1;
			}
			break;
		}
		if(((tablica[0][0] == 88) || (tablica[0][0] == 79))&&
		((tablica[0][1]==88) || (tablica[0][1] == 79))&&
		((tablica[0][2]==88) || (tablica[0][2] == 79))&&
		((tablica[1][0]==88) || (tablica[1][0] == 79))&&
		((tablica[1][1]==88) || (tablica[1][1] == 79))&&
		((tablica[1][2]==88) || (tablica[1][2] == 79))&&
		((tablica[2][0]==88) || (tablica[2][0] == 79))&&
		((tablica[2][1]==88) || (tablica[2][1] == 79))&&
		((tablica[2][2]==88) || (tablica[2][2] == 79))){
		break;
		}
		

	}
	return losowa;
}


int main(void){
	char a1 = 48;
	int gracz1 = 0 ,gracz2 = 0, tryb1=0;
	char tablica[3][3];
	for(int i = 0;i<3;i++){
		tablica[i][0] = a1;
		a1++;
		tablica[i][1] = a1;
		a1++;
		tablica[i][2] = a1;
		a1++;
	}

	printf("Wybierz tryb gry\n");
	printf("2 graczy(2), 1 gracz(1)\n");
	scanf("%i",&tryb1);
	printf("----------\n");
	
	
	if(tryb1 == 2){
		for(int i = 0;i<99;i++){
		printf("|%c|%c|%c|\n",tablica[0][0],tablica[0][1],tablica[0][2]);
		printf("|%c|%c|%c|\n",tablica[1][0],tablica[1][1],tablica[1][2]);
		printf("|%c|%c|%c|\n",tablica[2][0],tablica[2][1],tablica[2][2]);
		printf("----------\n");
		/* część do gracz1, gracz2 */
		printf("Podaj swój ruch gracz1\n");
		scanf("%i",&gracz1);
		
		/* jeśli 10 to zajęte miejsce */
		switch(gracz1){
			case 0:
			if((tablica[0][0] == 88) || (tablica[0][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][0] = 88;
			}
			break;
			case 1:
			if((tablica[0][1] == 88) || (tablica[0][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][1] = 88;
			}
			break;
			case 2:
			if((tablica[0][2] == 88) || (tablica[0][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][2] = 88;
			}
			break;
			case 3:
			if((tablica[1][0] == 88) || (tablica[1][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][0] = 88;
			}
			break;
			case 4:
			if((tablica[1][1] == 88) || (tablica[1][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][1] = 88;
			}
			break;
			case 5:
			if((tablica[1][2] == 88) || (tablica[1][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][2] = 88;
			}
			break;
			case 6:
			if((tablica[2][0] == 88) || (tablica[2][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][0] = 88;
			}
			break;
			case 7:
			if((tablica[2][1] == 88) || (tablica[2][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][1] = 88;
			}
			break;
			case 8:
			if((tablica[2][2] == 88) || (tablica[2][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][2] = 88;
			}
			break;
		}
		/* sprawdzenie czy wynik jest wygrany */
		if((tablica[0][0] == 88) && (tablica[0][1] == 88) && (tablica[0][2] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}
		if((tablica[1][0] == 88) && (tablica[1][1] == 88) && (tablica[1][2] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}
		if((tablica[2][0] == 88) && (tablica[2][1] == 88) && (tablica[2][2] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}
		if((tablica[0][0] == 88) && (tablica[1][0] == 88) && (tablica[2][0] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}
		if((tablica[0][1] == 88) && (tablica[1][1] == 88) && (tablica[2][1] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}
		if((tablica[0][2] == 88) && (tablica[1][2] == 88) && (tablica[2][2] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}
		if((tablica[0][0] == 88) && (tablica[1][1] == 88) && (tablica[2][2] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}
		if((tablica[0][2] == 88) && (tablica[1][1] == 88) && (tablica[2][0] == 88)){
			printf("wygrana dla gracza1!!\n");
			i = 100;
		}


		printf("|%c|%c|%c|\n",tablica[0][0],tablica[0][1],tablica[0][2]);
		printf("|%c|%c|%c|\n",tablica[1][0],tablica[1][1],tablica[1][2]);
		printf("|%c|%c|%c|\n",tablica[2][0],tablica[2][1],tablica[2][2]);
		printf("----------\n");
		printf("Podaj swój ruch gracz2\n");
		scanf("%i",&gracz2);


		/* gracz 2*/
		switch(gracz2){
			case 0:
			if((tablica[0][0] == 88) || (tablica[0][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][0] = 79;
			}
			break;
			case 1:
			if((tablica[0][1] == 88) || (tablica[0][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][1] = 79;
			}
			break;
			case 2:
			if((tablica[0][2] == 88) || (tablica[0][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][2] = 79;
			}
			break;
			case 3:
			if((tablica[1][0] == 88) || (tablica[1][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][0] = 79;
			}
			break;
			case 4:
			if((tablica[1][1] == 88) || (tablica[1][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][1] = 79;
			}
			break;
			case 5:
			if((tablica[1][2] == 88) || (tablica[1][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][2] = 79;
			}
			break;
			case 6:
			if((tablica[2][0] == 88) || (tablica[2][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][0] = 79;
			}
			break;
			case 7:
			if((tablica[2][1] == 88) || (tablica[2][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][1] = 79;
			}
			break;
			case 8:
			if((tablica[2][2] == 88) || (tablica[2][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][2] = 79;
			}
			break;
		}

		
		/* gracz2 czy wygrał */
		if((tablica[0][0] == 79) && (tablica[0][1] == 79) && (tablica[0][2] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}
		if((tablica[1][0] == 79) && (tablica[1][1] == 79) && (tablica[1][2] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}
		if((tablica[2][0] == 79) && (tablica[2][1] == 79) && (tablica[2][2] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}
		if((tablica[0][0] == 79) && (tablica[1][0] == 79) && (tablica[2][0] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}
		if((tablica[0][1] == 79) && (tablica[1][1] == 79) && (tablica[2][1] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}
		if((tablica[0][2] == 79) && (tablica[1][2] == 79) && (tablica[2][2] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}
		if((tablica[0][0] == 79) && (tablica[1][1] == 79) && (tablica[2][2] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}
		if((tablica[0][2] == 79) && (tablica[1][1] == 79) && (tablica[2][0] == 79)){
			printf("wygrana dla gracza2!!\n");
			i = 100;
		}

		/* sprawdzenie czy zostało jeszcze miejsce wolne */
		if(((tablica[0][0] == 88) || (tablica[0][0] == 79))&&
		((tablica[0][1]==88) || (tablica[0][1] == 79))&&
		((tablica[0][2]==88) || (tablica[0][2] == 79))&&
		((tablica[1][0]==88) || (tablica[1][0] == 79))&&
		((tablica[1][1]==88) || (tablica[1][1] == 79))&&
		((tablica[1][2]==88) || (tablica[1][2] == 79))&&
		((tablica[2][0]==88) || (tablica[2][0] == 79))&&
		((tablica[2][1]==88) || (tablica[2][1] == 79))&&
		((tablica[2][2]==88) || (tablica[2][2] == 79))){
		printf("Remis\n");
		break;
		}
		}
	}
	else if(tryb1 == 1){
		for(int i = 0;i<99;i++){
		printf("|%c|%c|%c|\n",tablica[0][0],tablica[0][1],tablica[0][2]);
		printf("|%c|%c|%c|\n",tablica[1][0],tablica[1][1],tablica[1][2]);
		printf("|%c|%c|%c|\n",tablica[2][0],tablica[2][1],tablica[2][2]);
		printf("----------\n");
		/* część do gracz1, gracz2 */
		printf("Podaj swój ruch\n");
		scanf("%i",&gracz1);
		
		/* jeśli 10 to zajęte miejsce */
		switch(gracz1){
			case 0:
			if((tablica[0][0] == 88) || (tablica[0][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][0] = 88;
			}
			break;
			case 1:
			if((tablica[0][1] == 88) || (tablica[0][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][1] = 88;
			}
			break;
			case 2:
			if((tablica[0][2] == 88) || (tablica[0][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[0][2] = 88;
			}
			break;
			case 3:
			if((tablica[1][0] == 88) || (tablica[1][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][0] = 88;
			}
			break;
			case 4:
			if((tablica[1][1] == 88) || (tablica[1][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][1] = 88;
			}
			break;
			case 5:
			if((tablica[1][2] == 88) || (tablica[1][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[1][2] = 88;
			}
			break;
			case 6:
			if((tablica[2][0] == 88) || (tablica[2][0] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][0] = 88;
			}
			break;
			case 7:
			if((tablica[2][1] == 88) || (tablica[2][1] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][1] = 88;
			}
			break;
			case 8:
			if((tablica[2][2] == 88) || (tablica[2][2] == 79)){
				printf("Miejsce jest zajęte!\n");
			}
			else{
				tablica[2][2] = 88;
			}
			break;
		}
		/* sprawdzenie czy wynik jest wygrany */
		if((tablica[0][0] == 88) && (tablica[0][1] == 88) && (tablica[0][2] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		if((tablica[1][0] == 88) && (tablica[1][1] == 88) && (tablica[1][2] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		if((tablica[2][0] == 88) && (tablica[2][1] == 88) && (tablica[2][2] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		if((tablica[0][0] == 88) && (tablica[1][0] == 88) && (tablica[2][0] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		if((tablica[0][1] == 88) && (tablica[1][1] == 88) && (tablica[2][1] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		if((tablica[0][2] == 88) && (tablica[1][2] == 88) && (tablica[2][2] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		if((tablica[0][0] == 88) && (tablica[1][1] == 88) && (tablica[2][2] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		if((tablica[0][2] == 88) && (tablica[1][1] == 88) && (tablica[2][0] == 88)){
			printf("wygrana\n");
			i = 100;
		}
		gracz2 = SI(tablica);
		/* gracz 2*/
		switch(gracz2){
			case 0:
			if((tablica[0][0] == 88) || (tablica[0][0] == 79)){
			}
			else{
				tablica[0][0] = 79;
			}
			break;
			case 1:
			if((tablica[0][1] == 88) || (tablica[0][1] == 79)){
			}
			else{
				tablica[0][1] = 79;
			}
			break;
			case 2:
			if((tablica[0][2] == 88) || (tablica[0][2] == 79)){
			}
			else{
				tablica[0][2] = 79;
			}
			break;
			case 3:
			if((tablica[1][0] == 88) || (tablica[1][0] == 79)){
			}
			else{
				tablica[1][0] = 79;
			}
			break;
			case 4:
			if((tablica[1][1] == 88) || (tablica[1][1] == 79)){
			}
			else{
				tablica[1][1] = 79;
			}
			break;
			case 5:
			if((tablica[1][2] == 88) || (tablica[1][2] == 79)){
			}
			else{
				tablica[1][2] = 79;
			}
			break;
			case 6:
			if((tablica[2][0] == 88) || (tablica[2][0] == 79)){
			}
			else{
				tablica[2][0] = 79;
			}
			break;
			case 7:
			if((tablica[2][1] == 88) || (tablica[2][1] == 79)){
			}
			else{
				tablica[2][1] = 79;
			}
			break;
			case 8:
			if((tablica[2][2] == 88) || (tablica[2][2] == 79)){
			}
			else{
				tablica[2][2] = 79;
			}
			break;
		}

		
		/* gracz2 czy wygrał */
		if((tablica[0][0] == 79) && (tablica[0][1] == 79) && (tablica[0][2] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}
		if((tablica[1][0] == 79) && (tablica[1][1] == 79) && (tablica[1][2] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}
		if((tablica[2][0] == 79) && (tablica[2][1] == 79) && (tablica[2][2] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}
		if((tablica[0][0] == 79) && (tablica[1][0] == 79) && (tablica[2][0] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}
		if((tablica[0][1] == 79) && (tablica[1][1] == 79) && (tablica[2][1] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}
		if((tablica[0][2] == 79) && (tablica[1][2] == 79) && (tablica[2][2] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}
		if((tablica[0][0] == 79) && (tablica[1][1] == 79) && (tablica[2][2] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}
		if((tablica[0][2] == 79) && (tablica[1][1] == 79) && (tablica[2][0] == 79)){
			printf("przegrana rozgrywka\n");
			i = 100;
		}

		/* sprawdzenie czy zostało jeszcze miejsce wolne */
		if(((tablica[0][0] == 88) || (tablica[0][0] == 79))&&
		((tablica[0][1]==88) || (tablica[0][1] == 79))&&
		((tablica[0][2]==88) || (tablica[0][2] == 79))&&
		((tablica[1][0]==88) || (tablica[1][0] == 79))&&
		((tablica[1][1]==88) || (tablica[1][1] == 79))&&
		((tablica[1][2]==88) || (tablica[1][2] == 79))&&
		((tablica[2][0]==88) || (tablica[2][0] == 79))&&
		((tablica[2][1]==88) || (tablica[2][1] == 79))&&
		((tablica[2][2]==88) || (tablica[2][2] == 79))){
		printf("Remis\n");
		break;
		}
		}






		

	}
	else{
		printf("Nie prawidłowa wartość!!\n");
		return 1;
	}
	
return 0;
}
