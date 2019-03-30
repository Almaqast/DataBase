#include <iostream>
#include <string> //для работы со строками 
#include <fstream>  //для работы с потоковыми файловысм классами
#include <iomanip> //для работы с потоковыми манипуляторами 
using namespace std;
int state_Menu; //создание главного меню
	void mainMenu(){
		cout<<" Меню\n";
		cout<<" 1. Ввод данных\n";
		cout<<" 2. Ввывод на экра\n";
		cout<<" 3. Удаление\n";
		cout<<" 4. Редактирование\n";
		cout<<" 5. Поиск\n";
		cout<<" 6. Сортировка\n";
		cout<<" 7. Сохранение\n";
		cout<<" 8. Загрузка\n";
		cout<<" 0. Выход\n";
		cout<<" >>>>>";
		cin>>state_Menu;
	};
	
void table(){
	const int ROWS = 100;
	const int COLS = 4;
	int arr[ROWS][COLS];
	
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			arr[i][j] = 
		}
	}
}
int main() {
	
	setlocale(LC_ALL, "rus");
	
	mainMenu();

	while ( state_Menu != 0 ){
		
		if ( state_Menu == 1){
			
		}
		
		if ( state_Menu == 2){
			
		}
		
		if ( state_Menu == 3){
			
		}
		
		if ( state_Menu == 4){
			
		}
		
		if ( state_Menu == 5){
			
		}
		
		if ( state_Menu == 6){
			
		}
		
		if ( state_Menu == 7){
			
		}
		
		if ( state_Menu == 8){
			
		}
		
		if ( state_Menu == 9){
			
		}
		
		if ( state_Menu == 0){
			system('cls');
			cout<<"выйти из программы нажмите F1" <<"Вернутся в меню нажмите F2"<<endl;
			if ( VK_F1 ){
				break;
			}
			if (VK_F2){
				state_menu();
			}
		}
		
	}
}
