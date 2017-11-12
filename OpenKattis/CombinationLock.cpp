#include <bits/stdc++.h>

/**
 * 
 * Author: Muhammad Fathir Irhas
 * OpenKattis - Combination Lock
 *  
 */ 

int main() {

    int init_pos , comb1, comb2, comb3;

    while(true){
        int total_degree = 0;
        std::cin >> init_pos >> comb1 >> comb2 >> comb3;
        if(init_pos==0 && comb1==0 && comb2==0 && comb3==0){
            break;
        }

        total_degree += 720; //turn the dial clockwise 2 full turns
        total_degree += (init_pos*9 - comb1*9 + 360)%360; //get the shortest degree to first combination(clockwise)
        total_degree += 360; //turn the dial counter-clockwise 11 full turn
        total_degree += (comb2*9 - comb1*9 + 360)%360; //'cause counter-clockwise, then we get the shortest degree from destination.
        total_degree += (comb2*9 - comb3*9 + 360)%360; //'cause clockwise, then we get the shortest degree from origin.

        std::cout << total_degree << std::endl;
    }

    return 0;
}