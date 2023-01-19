#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


int main(){

char tecla;

/*
do  = Beep(261, 700);
re  = Beep(293, 700);
mi  = Beep(329, 700);
fa  = Beep(349, 700);
sol = Beep(392, 700);
la  = Beep(440, 700);
si  = Beep(493, 700);
*/

do{
	if (toupper(tecla) == 'A'){
		Beep(261, 300);
	}
	else if (toupper(tecla) == 'S'){
		Beep(293, 300);
	}				
	else if (toupper(tecla) == 'D'){
		Beep(329, 300);
	}
	else if (toupper(tecla) == 'F'){
		Beep(330, 300);
	}
	else if (toupper(tecla) == 'G'){
		Beep(392, 300);
	}
	else if (toupper(tecla) == 'H'){
		Beep(440, 300);
	}
	else if (toupper(tecla) == 'J'){
		Beep(493, 300);
	}
	tecla = getch();
} while (tecla != 27);


system("pause");
return 0;
}
