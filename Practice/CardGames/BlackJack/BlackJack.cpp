#include <iostream>
#include <cstdlib>
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
        void deal(){
            srand(time(0));
            int n = 52;
            int k = 0;

            for(int i; i < 3; ++i){
                int houseDeal = i + (rand() % (52 - i));
                int playerDeal = i + (rand() % (52 - i));

                dealer.push_back(shuffled[houseDeal]);
                currentHand.push_back(shuffled[playerDeal]);
            }
        
            for(std::string cards : dealer){
                
                if((dealer[k] == dealer[k + 1]) || (dealer[k] == currentHand[k]) || (dealer[k] == currentHand[k + 1])){
                    dealer[k] = shuffled[rand() % 51 + 0];
                }else{
                    dealer[k] = dealer[k];
                }

                std::cout << dealer[k] << std::endl;
                ++k;
            }

            std::cout << std::endl;
            k = 0;

            for(std::string cards : currentHand){
                if((currentHand[k] == currentHand[k + 1]) || (currentHand[k] == dealer[k]) || (currentHand[k] == dealer[k + 1])){
                    currentHand[k] = shuffled[rand() % 51 + 0];
                }else{
                    currentHand[k] = currentHand[k];
                }

                std::cout << currentHand[k] << std::endl;
                ++k;
            }
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