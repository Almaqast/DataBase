#include <iostream>
#include <string> //��� ������ �� �������� 
#include <fstream>  //��� ������ � ���������� ��������� ��������
#include <iomanip> //��� ������ � ���������� �������������� 
using namespace std;
int state_Menu; //�������� �������� ����
	void mainMenu(){
		cout<<" ����\n";
		cout<<" 1. ���� ������\n";
		cout<<" 2. ������ �� ����\n";
		cout<<" 3. ��������\n";
		cout<<" 4. ��������������\n";
		cout<<" 5. �����\n";
		cout<<" 6. ����������\n";
		cout<<" 7. ����������\n";
		cout<<" 8. ��������\n";
		cout<<" 0. �����\n";
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
			cout<<"����� �� ��������� ������� F1" <<"�������� � ���� ������� F2"<<endl;
			if ( VK_F1 ){
				break;
			}
			if (VK_F2){
				state_menu();
			}
		}
		
	}
}
