#include <iostream>
#include <vector>
#include "ttt_functions.hpp"
using namespace std;
/* below while set inputs = to inputs_list
and change argument and parameters to accept inputs*/
int main() {
	vector<char> input = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};
	vector<int> inputs;
	int p_input;
	int p_two_input;
	
	game_board(input);
	
	cout << "Input a number from 1-9 with numbers on the box going from left to right order.\n";
	
	for(int i = 0;;){
		cout << "Player 1 which box do you select?\n";
		cin >> p_input;
		
		//check if p_input has already in input list
		while(input_list(p_input, 0, inputs) == 0){
			cout << "You cannot choose that option as it has already been chosen. Choose again: \n";
			cin >> p_two_input;
		}
		inputs.push_back(p_input);
		
		input[p_input-1] = 'x';
		game_board(input);
		i++;
		
		//result check
		if(result(input) == 1){
			cout << "Player 1 wins!\n";
			break;
		}
		
		//player 2
		if(i>8){
			break;
		}
		
		
		cout << "Player 2 which box do you select?\n";
		cin >> p_two_input;
		
		//check if p_two_input is already in list
		while(input_list(0, p_two_input, inputs) == 0){
			cout << "You cannot choose that option as it has already been chosen. Choose again: \n";
			cin >> p_two_input;
		}
		inputs.push_back(p_two_input);
		
		input[p_two_input-1] = 'o';
		game_board(input);
		i++;
		
		//result check
		if(result(input) == 1){
			cout << "Player 2 wins!\n";
			break;
		}
	}
	
	
	return 0;
}
