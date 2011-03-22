#include <iostream>
#include <string>
using namespace std;


void hello();
void turnaround();
void end();
void name_counter();


int main()//menyn (ska flyttas)
{
	int menyval;
	int menu_index = 4;
	while(true)
	{
		cout<<"Meny: \n"
			<<"1. Hello World\n"
			<<"2. Vänd ditt namn\n"
			<<"3. räkna ditt namn\n"
			<<"4. Exit\n"
			<<"Val: ";
		cin>>menyval;
		switch(menyval)
		{
			case 1: system("cls");hello();
			case 2: system("cls");turnaround();
			case 3: system("cls");name_counter();
			case 4: exit(1);
		}
		system("cls");
	}
}
void hello(){
	end();
	cout<<"Hallo World\n";
	end();
}// Print hello world och åter vänder //printar Hello world
void turnaround(){
cout<<"ERROR! BRB!\n";
end();
}
void name_counter(){
	char name[31];
	
	cout<<"Vad heter du?\n";
	(cin>>name).get();
	cout <<"Hej "<<name<<".\n"
		 <<"Ditt namn inne hålller "<<strlen(name)<<" Bokstäver!\n"
		 <<"Variabeln name kan man ha " << sizeof(name) << " bokstäver\n";
	end();
}
void end(){
	cout<<endl;
system("pause");
system("cls");
main();
}


