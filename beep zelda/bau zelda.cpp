#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
	int intro = 0, intro2 = 0;
	
	while (intro < 4){
		Beep(391, 100);
		Sleep(40);
		
		Beep(440, 100);
		Sleep(40);
		
		Beep(493, 100);
		Sleep(40);
		
		Beep(554, 100);	
		Sleep(40);
		
		intro++;
}

	while (intro2 < 4){
		Beep(415, 100);
		Sleep(40);
		
		Beep(466, 100);
		Sleep(40);
		
		Beep(523, 100);
		Sleep(40);
		
		Beep(587, 100);	
		Sleep(40);
		
		intro2++;
}



	Sleep(200);

	Beep(880, 250);

	Beep(932, 240);

	Beep(987, 340);

	Beep(1046, 990);
	Sleep(60);

	system("pause");
	return 0;
}
