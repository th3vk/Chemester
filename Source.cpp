#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

char* field [8][8]={
{"R","N","B","Q","K","B","N","R"},
{"p","p","p","p","p","p","p","p"},
{" "," "," "," "," "," "," "," "},
{" "," "," "," "," "," "," "," "}, 
{" "," "," "," "," "," "," "," "}, 
{" "," "," "," "," "," "," "," "},
{"p","p","p","p","p","p","p","p"},
{"R","N","B","Q","K","B","N","R"}};

// K=king; Q=queen; R=rook; N=knight; B=bishop; p=pawn

void Launch(){
	system("cls");
	cout<<" a|b|c|d|e|f|g|h "<<endl;;
	system("color 0F");
	for(int i=0;i<8;i++){
		cout<<(i+1)<<' ';
		if (i==3)
		system("color 06");
		
		for (int j=0; j<8;j++){
			cout<<field[i][j]<<"|";
		}
		cout<<endl;
	}
	cout<<" a|b|c|d|e|f|g|h ";
	return;
}

int main(){
	Launch();
	system("pause");
	return 0;
}