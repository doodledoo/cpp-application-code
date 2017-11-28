/*
________________________________________
|                                       |
|       game.cpp                        | 
|                                        \
|       Google-code-in (2k17-18)          \
|                                          \
|                                           \
|       Game - Tic-Tac-Toe                   |
|                                            |	
`---------@@@@@-------------------@@@--------'

*/




#include <iostream>
using namespace std;



int is_winner(char );
void banner_ttt();
int authenticated_index(int );
void show_status_ttt();
void tic_tac_toe();



// Tablica trzymająca '0' lub 'X' na pozycjach podanych przez graczy
//
char a[9] = {'T','T','T','T','T','T','T','T','T'};			




int main()
{
	// zawołanie głównego bloku dla gry Tic-Tac-Toe
	tic_tac_toe();		
}



// główny blok dla gry Tic-Tac-Toe
// Gra zaczyna się tutaj
void tic_tac_toe()
{
	int flag = 0, turn_counter = 1;
	int zero, cross;
	int continue_p2 = 0;


	banner_ttt();


		
		// Pobranie wejścia od użytkowników dopóki jeden z dwóch nie wygra
		while(1)
		{
			// Sprawdzanie czy gracz2 nie nacisnął kontynuacji,
			// jeśli nie, gracz1 ma swoją ture
			//
			if ( continue_p2 != 1 )
			{
				cout<<"Gracz1 -> ";
				// Użytkownik wprowadza pozycję która później jest używana do przechowywania '0' na tej pozycji w tablicy
				cin>>zero;				


					// Sprawdzanie czy liczba wprowadzona przez użytkownika jest poprawną lub nie
					if (( authenticated_index(zero-1)) )
					{	
						++turn_counter;				
						a[zero-1] = '0';				
						show_status_ttt();
						
							if (turn_counter > 4 && is_winner('0'))	
							{
								cout<<"Gratulacje!!\n";
								cout<<"Gracz 1 wygrywa !\n";
								exit(0);
							}
					}
				
					else 
						continue;
					
			}
	
	

			cout<<"Gracz2 -> ";
			cin>>cross;

				// Sprawdzanie czy liczba wprowadzona przez użytkownika jest poprawną lub nie
				if (authenticated_index(cross-1))
				{	
					
					++turn_counter;
					a[cross-1] = 'X';				
					show_status_ttt();
					continue_p2 = 0;					
	
						if (turn_counter > 4  && is_winner('X'))
						{
							cout<<"Gratulacje!!\n";
							cout<<"Gracz 2 wygrywa !\n";
							exit(0);
						}
				}
			
				// jeśli liczba podana przez użytkownika nie jest poprawna
				// kontynuuj pętle w której gracz2 ma swoją ture
				else 
				{
					// ustawienie flagi 'continue_p2' do identyfikacji
					// komendy gracza2 oraz kontynuowania
					// tury gracza2 a nie gracza1
					continue_p2 = 1;
					continue;	
				}
	
		}

}


// Zwraca nie-zerową liczbę jeśli użytkownik który wygra woła funkcję
// i zwraca 0 jeśli użytkownik wołający funkcję nie wygrywa.
//
int is_winner(char ch)
{
	// Kod idzie tutaj
	
		
}



// Banner dla gry Tic-Tac-Toe
void banner_ttt()
{
	cout<<"\n\n";
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
	cout<<"                WITAJ W GRZE TIC-TAC-TOE                   \n";
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
	cout<<"\n";
	cout<<"Jest to gra dla 2 graczy gdzie '0' walczy z 'X' ^_^        \n";
	cout<<"Gracz musi podać pozycję w której on/ona chce              \n";
	cout<<"ustawić '0' lub 'X'\n\n\n";

		// Kod baneru idzie tutaj
}



// Sprawdź czy
// 1. 'Pozycja' podana przez gracza nie jest
// 	  tą samą która była podana wcześniej.
// 2. 'Pozycja' nie jest poza zakresem.
// Zwraca 1 jeśli pozycja jest poprawna, inaczej 0.
//
int authenticated_index(int index)
{
	//Kod idzie tutaj
	

}



// Pokazuje aktualny stan gry
// Jest wołany za każdym razem gdy gracz ma swoją ture
void show_status_ttt()
{
	
	cout<<"\n";
	
	for( int i=0 ; i<9 ; ++i )
	{
		
		if (i != 0 && i%3 == 0 )
		{
			cout<<"\n";
			cout<<"___|___|___\n";
		}	
	
		cout<<" ";

		if ( a[i] == '0' || a[i] == 'X' )
			{
				cout<<(char )a[i]<<" ";
				if (i != 2 && i != 5 && i !=8)
					cout<<"|";
				
			}

			else 
			{
				cout<<"  ";
				if (i != 2 && i !=5 && i != 8)
					cout<<"|";
			}
	}

	cout<<"\n   |   |   \n";

	cout<<"\n";
}





