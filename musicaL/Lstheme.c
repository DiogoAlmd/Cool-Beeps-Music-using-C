#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int beep = 1;
    /*
    Beep( 261 ,150); //d�
    Beep (293, 150);//r�
    Beep (329, 150);//mi
    Beep (349, 150);//f�
    Beep (392, 150);//sol
    Beep (440, 150);//l�
    Beep (493, 150);//si
    */
do
{
Beep (392, 150);//sol
Sleep(50);
Beep (329, 150);//mi
Sleep(50);
Beep (440, 150);//l�
Sleep(50);
Beep (329, 150);//mi
Sleep(50);
Beep (370, 150);//f�#
Sleep(50);
Beep (392, 150);//sol
Sleep(50);
Beep (329, 150);//mi
Sleep(50);
Beep (493, 150);//si
Sleep(50);
Beep (440, 150);//l�
Sleep(50);
Beep (392, 150);//sol
Sleep(50);
Beep (370, 150);//f�#
Sleep(50);
Beep (329, 150);//mi
Sleep(50);
Beep (293, 150);//r�
Sleep(50);
}while(beep=1);

return 0;
}
