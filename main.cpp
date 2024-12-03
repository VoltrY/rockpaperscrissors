#include <iostream>
#include <ctime>
char playerChoice();
char computerChoice();
void checkWhoWin();
char showChoice();
void showChoice(char player);
void checkWhoWin(char player, char computer);

int main() {
    char player = playerChoice();
    char computer = computerChoice();


    std::cout << "Your choice is: ";
    showChoice(player);
    std::cout << "Computer choice is: ";
    showChoice(computer);
    checkWhoWin(player, computer);

    return 0;
}
char playerChoice() {
    char player;
    std::cout << "*********************" << std::endl;
    std::cout << "Rock Paper Scissors game!" << std::endl;
    do {
        std::cout << "*********************" << std::endl;
        std::cout << "Rock for 'r'" << std::endl;
        std::cout << "Paper for 'p'" << std::endl;
        std::cout << "Scissors for 's'" << std::endl;
        std::cout << "Please enter your choice :";
        std::cin >> player;
    }while (player !='r' && player !='p' && player !='s');
    std::cout << "---------------------" << std::endl;
    return player;
}
char computerChoice() {
    char computer;
    char computerc;
    srand(time(NULL));
    computerc = rand() % 3 + 1;
    switch (computerc) {
        case 1:
            computer = 'r';
        case 2:
            computer = 'p';
        case 3:
            computer = 's';
    }
    return computer;
}
void showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock" << std::endl; break;
        case 'p':
            std::cout << "Paper" << std::endl; break;
        case 's':
            std::cout << "Scissors" << std::endl; break;
    }
}
void checkWhoWin(char player, char computer) {
    switch (player) {
        case 'r':
            switch (computer) {
                case 'r': std::cout << "Tie" << std::endl; break;
                case 's': std::cout << "You win" << std::endl; break;
                case 'p': std::cout << "Computer wins" << std::endl; break;
            }
            break;
        case 'p':
            switch (computer) {
                case 'r': std::cout << "You win" << std::endl; break;
                case 's': std::cout << "Computer wins" << std::endl; break;
                case 'p': std::cout << "Tie!" << std::endl; break;
            }
            break;
        case 's':
            switch (computer) {
                case 'r': std::cout << "Computer Wins!" << std::endl; break;
                case 's': std::cout << "Tie!" << std::endl; break;
                case 'p':  std::cout << "You win!" << std::endl; break;
            }
            break;

    }

}