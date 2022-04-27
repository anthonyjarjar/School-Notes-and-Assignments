#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>
#include <random>

class Deck {
    private:
        const std::vector <std::string> value = {"2", "3", "4", "5", "6", "7", "8", "9", "10"};
        const std::vector <std::string> face = {"Jack", "Queen", "King", "Ace"};
        const std::vector <std::string> suit = {"Clubs", "Spades", "Diamonds", "Hearts"};

        std::vector <std::string> Deck;

    public:
        std::vector <std::string> cardDeck(){ 
            std::vector <std::string> Deck;

            for(int i{0}; i < 4; i++){
                int n{0};
                for(int j{0}; j < 9; j++){
                    Deck.push_back(value[j] + " " + suit[i]);
                    for(int x{0}; x < 4; ++x){
                        if(n < 4){
                            Deck.push_back(face[n] + " " + suit[i]);
                            ++n;
                        }
                    }
                }
            } 
            return Deck;
        }

        std::vector <std::string> shuffle(){
            std::vector <std::string> deck = cardDeck();
            srand(time(0));
            int n = 52;
        
            for (int i=0; i < n ;i++){
                int r = i + (rand() % (52 - i));
                std::swap(deck[i], deck[r]);
            }

            return deck;
        }
};

class CardGame {
    private:
        Deck deck;
        std::vector <std::string> shuffled = deck.shuffle();
        std::vector <std::string> dealer, currentHand;

        int pot, cash, bet;

    public:
        int scoreKeeper(std::vector <std::string> hand){
            int k = 0;
            char J {'J'}, Q {'Q'}, K {'K'}, A {'A'};

            int value {0};

            for(std::string cards : hand){

                int currentValue;

                std::stringstream ss;
                std::string card = hand[k];
                
                ss << card[0];
                ss >> currentValue;
                
                if(currentValue == 0){
                    if((card[0] == J) || (card[0] == Q) || (card[0] == K)){
                        value += 10;
                    }else if(card[0] == A){
                        if(value <= 21){
                            value += 11;
                            if(value > 21){
                                value -= 11;
                                value += 1;
                            }
                        }else{
                            value += 1;
                        }
                    }else{
                        std::cout << "Error" << std::endl;
                    }
                }else if(currentValue == 1){
                    value += 10;
                }else{
                    value += currentValue;
                }
                ++k;
            }
            return value;
        }

        std::vector <std::string> hit(std::vector <std::string> &deck, std::vector <std::string> player){
            char choice;

            do{
                srand(time(0));
                std::cout << "Would you like to hit (y/n), if n you will automatically stand: ";
                std::cin >> choice;
                std::cout << std::endl;

                int i = deck.size() - 52;


                if(choice == 'y'){
                    int k = 0;

                    for(std::string cards : player){
                        std::cout << player[k] << std::endl;
                        ++k;
                    }

                    int playerDeal = i + (rand() % (deck.size() - i));

                    player.push_back(deck[playerDeal]);

                    std::swap(deck[playerDeal], deck.back());
                    deck.pop_back();

                    for(std::string cards : player){
                        std::cout << player[k] << std::endl;
                        ++k;
                    }
                    std::cout << "Player Total: " << std::endl << scoreKeeper(player) << std::endl;
                    
                    if(scoreKeeper(player) > 21){
                        std::cout << "You lose" << std::endl;
                        break;
                    }else if(scoreKeeper(player) == 21){
                        std::cout << "You have a blackjack!, You win!" << std::endl;
                        break;
                    }
                }else{
                    std::cout << "You chose to stand, now for the house to play." << std::endl;
                    break;
                }
            }while(choice == 'y');
            
            return player;
        }

        void housePlay(std::vector <std::string> &deck, std::vector <std::string> house, std::vector <std::string> player){
            player = hit(deck, currentHand);
            
            if(scoreKeeper(player) > 21){
                std::cout << std::endl << "The house says: 'Better luck next time'\n";
            }else if(scoreKeeper(player) == 21){
                std::cout << std::endl << "The house says: 'Nice job'\n";
            }else if(scoreKeeper(house) > scoreKeeper(player)){
                int k = 0;

                for(std::string cards : dealer){
                    std::cout << dealer[k] << std::endl;
                    ++k;
                }
                std::cout << "The house has a score of " << scoreKeeper(house) << " they win! \n";
            }else if(scoreKeeper(player) == scoreKeeper(house)){
                std::cout << "It's a standoff" << std::endl;
            }else{
                do{
                    int k{0};
                    int i = deck.size() - 52;

                    srand(time(0));
                    std::cout << std::endl << "Time for the dealer to play\n";

                    for(std::string cards : house){
                        std::cout << house[k] << std::endl;
                        ++k;
                    }

                    int houseDeal = i + (rand() % (deck.size() - i));

                    house.push_back(deck[houseDeal]);

                    std::swap(deck[houseDeal], deck.back());
                    deck.pop_back();

                    for(std::string cards : house){
                        std::cout << house[k] << std::endl;
                        ++k;
                    }

                    std::cout << scoreKeeper(house) << std::endl;

                }while(scoreKeeper(player) > scoreKeeper(house));
            }

            if(scoreKeeper(player) < scoreKeeper(house) && scoreKeeper(house) <= 21){
                std::cout << "House wins! \n";
            }else if(scoreKeeper(house) > 21 && scoreKeeper(player) > 21){
                std::cout << "Both of you busted \n";
            }else if(scoreKeeper(house) > 21 && scoreKeeper(player) < 21){
                std::cout << "House busted, Player wins! \n";
            }else{
                std::cout << std::endl;
            }
        }

        void deal(){
            srand(time(0));
            int n = 52;
            int k = 0;

            for(int i; i < 3; ++i){
                int houseDeal = i + (rand() % (52 - i));
                
                dealer.push_back(shuffled[houseDeal]);

                std::swap(shuffled[houseDeal], shuffled.back());
                shuffled.pop_back();
                
            }

            for(int i; i < 3; ++i){
                int playerDeal = i + (rand() % (52 - i));
                
                currentHand.push_back(shuffled[playerDeal]);

                std::swap(shuffled[playerDeal], shuffled.back());
                shuffled.pop_back();
            }

            std::cout << "Dealer's Hand" << std::endl;
            for(std::string cards : dealer){
                if(dealer[0] == dealer[k]){
                    std::cout << "Hidden Card" << std::endl;
                }else{
                    std::cout << dealer[k] << std::endl;
                }
                ++k;
            }

            std::cout << std::endl;

            k = 0;

            std::cout << "Player's hand" << std::endl;
            for(std::string cards : currentHand){
                std::cout << currentHand[k] << std::endl;
                ++k;
            }

            std::cout << "\nPlayer total: "<< std::endl << scoreKeeper(currentHand) << std::endl;

            std::cout << "\nNow for the rounds to commence \n" << std::endl;

            housePlay(shuffled, dealer, currentHand);
        }


        void playGame(){
            deal();
        }


};

int main(){

    CardGame play;

    play.playGame();

    return 0;
}