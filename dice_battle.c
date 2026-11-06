#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dice_roll() {
    int roll_dice;
    roll_dice = rand() % 6 + 1; // find a random value from 1-6
    return roll_dice;
}

void display_player_health(int p1_heath, int p2_health) {
    printf("Player 1 HP: %d\n", p1_heath);
    printf("Player 2 HP: %d\n\n", p2_health);
}

int calculate_damage(int dice1 , int dice2) {
    int sum = dice1 + dice2;
    return sum;
    
}
void check_winner(int p1_sum, int p2_sum ){
    if (p2_sum < p1_sum) {
        printf("Player 2 Wins!");
    }
    else if (p2_sum == p1_sum) {
        printf("It is a draw");
    }
    else {
        printf("Player 1 Wins!");
    }
}


int main(void) {

    srand(time(NULL));

    int player_1_health = 12;
    int player_2_health = 12;
    
    printf("=====Dice Battle=====\n\n");

    printf("Player 1's turn!\n\n");

    

    int player1_dice1 = dice_roll();
    int player1_dice2 = dice_roll();
    int dice_sum_p1 = calculate_damage(player1_dice1, player1_dice2);

    player_2_health -= dice_sum_p1;

    printf("Dice 1: %d\n" , player1_dice1);
    printf("Dice 1: %d\n" , player1_dice2);
    printf("Total damage: %d\n\n", dice_sum_p1);
   

    
    printf("Player 2's turn!\n\n");

    int player2_dice1 = dice_roll();
    int player2_dice2 = dice_roll();

    int dice_sum_p2 = calculate_damage(player2_dice1, player2_dice2);

    printf("Dice 1: %d\n", player2_dice1);
    printf("Dice 2: %d\n", player2_dice2);
    printf("Total damage: %d\n\n", dice_sum_p2);

    player_1_health -= dice_sum_p2;

    check_winner(player_1_health, player_2_health);

    


    return 0;
}