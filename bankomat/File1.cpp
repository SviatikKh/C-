# include <conio.h>
#include <iostream.h>

void main()
{
   int vveditSumu = 0;
   cout<<"Vvedit Sumu: (1 do 9999)";
   cin>>vveditSumu;

   if (vveditSumu <=0 || vveditSumu > 9999)
   cout<<"Ne pravelnyj vvid \n";
	else
	  {
		  cout<<"Vy vvely: \n";
		  if ((vveditSumu/1000) % 10 == 1) cout<<"Odna tysiacha ";
		  else if ((vveditSumu/1000) % 10 == 2) cout<<"Dvi tysiachi ";
		  else if ((vveditSumu/1000) % 10 == 3) cout<<"Try tysiachi ";
		  else if ((vveditSumu/1000) % 10 == 4) cout<<"Chotyry tysiachi ";
		  else if ((vveditSumu/1000) % 10 == 5) cout<<"Piat tysiach ";
		  else if ((vveditSumu/1000) % 10 == 6) cout<<"Shist tysiach ";
		  else if ((vveditSumu/1000) % 10 == 7) cout<<"Sim tysiach ";
		  else if ((vveditSumu/1000) % 10 == 8) cout<<"Visim tysiach ";
		  else if ((vveditSumu/1000) % 10 == 9) cout<<"Deviat tysiach ";

		  if ((vveditSumu/100) % 10 == 1) cout<<"sto ";
		  else if ((vveditSumu/100) % 10 == 2) cout<<"dvisti ";
		  else if ((vveditSumu/100) % 10 == 3) cout<<"trysta ";
		  else if ((vveditSumu/100) % 10 == 4) cout<<"chotyrysta ";
		  else if ((vveditSumu/100) % 10 == 5) cout<<"piatsot ";
		  else if ((vveditSumu/100) % 10 == 6) cout<<"shitsot ";
		  else if ((vveditSumu/100) % 10 == 7) cout<<"simsot ";
		  else if ((vveditSumu/100) % 10 == 8) cout<<"visimsot ";
		  else if ((vveditSumu/100) % 10 == 9) cout<<"deviatsot ";

		  if ((vveditSumu/10) % 10 == 1)
		  {
			  if ((vveditSumu/10) % 10 == 0) cout<<"desiat dolariv ";
			  else if ((vveditSumu/10) % 10 == 1) cout<<"odynaciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 2) cout<<"dvanaciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 3) cout<<"trynadciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 4) cout<<"chotyrnadciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 5) cout<<"piatnadciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 6) cout<<"shitnadciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 7) cout<<"simnadciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 8) cout<<"visimnadciat dolariv ";
			  else if ((vveditSumu/10) % 10 == 9) cout<<"deviatnadciat dolariv ";
		   }

		   if ((vveditSumu / 10) % 10 == 2) cout << "dvadciat ";
		else if ((vveditSumu / 10) % 10 == 3) cout << "trydciat ";
		else if ((vveditSumu / 10) % 10 == 4) cout << "sorok ";
		else if ((vveditSumu / 10) % 10 == 5) cout << "piatdesiat ";
		else if ((vveditSumu / 10) % 10 == 6) cout << "shistdesiat ";
		else if ((vveditSumu / 10) % 10 == 7) cout << "simdesiat ";
		else if ((vveditSumu / 10) % 10 == 8) cout << "visimdesiat ";
		else if ((vveditSumu / 10) % 10 == 9) cout << "devianosto ";

	if ((vveditSumu / 10) % 10 != 1)
	{
		if (vveditSumu % 10 == 0) cout << "dolariv";
		else if (vveditSumu % 10 == 1) cout << "odyn dolar ";
		else if (vveditSumu % 10 == 2) cout << "dva dolara ";
		else if (vveditSumu % 10 == 3) cout << "try dolara ";
		else if (vveditSumu % 10 == 4) cout << "chotyry dolara ";
		else if (vveditSumu % 10 == 5) cout << "piat dolariv ";
		else if (vveditSumu % 10 == 6) cout << "shist dolariv ";
		else if (vveditSumu % 10 == 7) cout << "sim dolariv ";
		else if (vveditSumu % 10 == 8) cout << "visim dolariv ";
		else cout << "deviat dolariv ";

		  }

	  }

getch();
}


