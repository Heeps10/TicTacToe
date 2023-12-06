#include <iostream>
#include <vector>
#include "ttt_functions.hpp"
//─
using namespace std;

void game_board(vector<char> input){
    cout << " " << input[0] << " | " << input[1] << " | " << input[2] << endl;
    cout << "───────────\n";
    cout << " " << input[3] << " | " << input[4] << " | " << input[5] << endl;;
    cout << "───────────\n";
    cout << " " << input[6] << " | " << input[7] << " | " << input[8] << "\n\n";
}
int result(vector<char> input){
    // logic for who wins game
    
    if(input[0] == 'x' && input[1] == 'x' && input[2] == 'x'){
        return 1;
    } else if (input[3] == 'x' && input[4]  == 'x' && input[5] == 'x'){
        return 1;
    } else if (input[6] == 'x' && input[7] == 'x' && input[8] == 'x'){
        return 1;
    } else if (input[0] == 'x' && input[3] == 'x' && input[6] == 'x'){
        return 1;
    } else if (input[1] == 'x' && input[4] == 'x' && input[7] == 'x'){
        return 1;
    } else if (input[2] == 'x' && input[5] == 'x' && input[8] == 'x'){
        return 1;
    } else if (input[0] == 'x' && input[4] == 'x' && input[8] == 'x'){
        return 1;
    } else if (input[2] == 'x' && input[4] == 'x' && input[6] == 'x'){
        return 1;
    }
    
    if(input[0] == 'o' && input[1] == 'o' && input[2] == 'o'){
        return 1;
    } else if (input[3] == 'o' && input[4] == 'o' && input[5] == 'o'){
        return 1;
    } else if (input[6] == 'o' && input[7] == 'o' && input[8] == 'o'){
        return 1;
    } else if (input[0] == 'o' && input[3] == 'o' && input[6] == 'o'){
        return 1;
    } else if (input[1] == 'o' && input[4] == 'o' && input[7] == 'o'){
        return 1;
    } else if (input[2] == 'o' && input[5] == 'o' && input[8] == 'o'){
        return 1;
    } else if (input[0] == 'o' && input[4] == 'o' && input[8] == 'o'){
        return 1;
    } else if (input[2] == 'o' && input[4] == 'o' && input[6] == 'o'){
        return 1;
    }
    
    return 0;
}


int input_list(int p_input, int p_two_input, vector<int> inputs){

    if(inputs.size() == 0){
        return p_input;
    }
    
    for(int i = 0; i < inputs.size(); i++){
        if(p_input == inputs[i] || p_two_input == inputs[i]){
            return 0;
        }
    }
    
    if(p_input == 0){
        return p_two_input;
    } else{
        return p_input;
    }
    
    
    return 1;
}
