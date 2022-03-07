#include<iostream>
#include<vector>
#include <random>


// Author:Asu Simla Ayduran
// ID: 260822715

using namespace std;
enum Rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum Type {CLUBS, DIAMONDS, HEARTS, SPADES};

class Card  {
public:
    Card(Rank rA,Type tY);
    ~Card() {};
    int getValue() const;
    void displayCard() const;
    Rank getRank() const {
    return ra; 
    }
    Type getType() const {
    return su; 
    }
private:
    Rank ra;
    Type su;

};
Card::Card(Rank rA,Type tY) {
    this -> ra = rA;
    this -> su= tY;
    };

// Initilize value.Assign the number of each rank
// Every rank get there own number value and JACK QUEEN and KING will get 10
int Card::getValue() const{
    
     int value = 0;
    Rank ra = this->ra;
    switch(ra) {
    case ACE:
        value =1;
        break;
    case TWO:
        value = 2;
        break;
    case THREE:
        value =3;
        break;
    case FOUR:
        value =4;
        break;
    case FIVE: 
        value =5;
        break;
    case SIX:
        value =6;
        break;
    case SEVEN:
        value =7;
        break;
    case EIGHT:
        value =8;
        break;
    case NINE:
        value =9;
        break;
    case TEN:
        value =10;
        break;
    case JACK:  
        value =10;
        break;  
    case QUEEN:
        value =10;
        break;
    case KING:
        value=10;
        break;
    };
    return value; 
}

// Take every rank and assign their type to them then print
void Card::displayCard() const{ 
    Rank ra = this->ra;
    switch(ra) {
        case ACE:
        if(su == SPADES) {
            cout << "1" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "1" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "1" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "1" << "D ";
            break;
        }
        case TWO:
        if(su == SPADES) {
            cout << "2" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "2" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "2" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "2" << "D ";
            break;
        }
         case THREE:
        if(su == SPADES) {
            cout << "3" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "3" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "3" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "3" << "D ";
            break;
        }
        case FOUR:
        if(su == SPADES) {
            cout << "4" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "4" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "4" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "4" << "D ";
            break;
        }
        case FIVE:
        if(su == SPADES) {
            cout << "5" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "5" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "5" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "5" << "D ";
            break;
        }
        case SIX:
        if(su == SPADES) {
            cout << "6" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "6" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "6" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "6" << "D ";
            break;
        }
        case SEVEN:
        if(su == SPADES) {
            cout << "7" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "7" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "7" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "7" << "D ";
            break;
        }
        case EIGHT:
        if(su == SPADES) {
            cout << "8" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "8" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "8" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "8" << "D ";
            break;
        }
        case NINE:
        if(su == SPADES) {
            cout << "9" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "9" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "9" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "9" << "D ";
            break;
        }
        case TEN:
        if(su == SPADES) {
            cout << "10" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "10" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "10" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "10" << "D ";
            break;
        }
        case JACK:
        if(su == SPADES) {
            cout << "J" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "J" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "J" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "J" << "D ";
            break;
        }
        case QUEEN:
        if(su == SPADES) {
            cout << "Q" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "Q" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "Q" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "Q" << "D ";
            break;
        }
        case KING:
        if(su == SPADES) {
            cout << "K" << "S ";
            break;
        }
        if(su == HEARTS) {
            cout << "K" << "H ";
            break;
        }
        if(su == CLUBS) {
            cout << "K" << "C ";
            break;
        }
        if(su == DIAMONDS) {
            cout << "K" << "D ";
            break;
        }
    } 
}

class Hand{
public:
     Hand(){};
    virtual ~Hand() {};   // best practice to make it virtual since it's inherited
    void add(Card cAdd) {
     handCards.push_back(cAdd); //Using vector methode push back to put newly drawn card at the end of each players hand
    }
    void getHand() const;
    void clear() {
    handCards.clear(); // Method to clear the players hand
    }
    int getTotal() const; 

private:
    vector<Card> handCards;
};


// Go through the hand and show all the cards
 // display the one at index
void Hand::getHand() const
{ 
    int sizeDeck = handCards.size();
    for(int index =0; index < sizeDeck; index++)
    {
        this ->handCards[index].displayCard();
        cout << " ";
    } 
}

int Hand::getTotal() const{ 
//After we get the some of the players hand we check for the ACE
// If there is an ACE in the players hand we check if the hand pass
// the sum 21,if it does the values of ACE will be 1 instead of 11
    if (handCards.empty()) {
        return 0;
    }
     int sum = 0;
    int aceValue = 0;
    int index =0;
   while(index < handCards.size()){
        int val = handCards.at(index).getValue();
        if(val == 1){
            aceValue++;
        } else{
         sum = sum + val;
        }
        index++;
    }
for(int i = aceValue; i > 0; i--) {
    if(sum + 11 > 21) {          
     aceValue--;
    sum = sum + 1;
    } else {                        
     aceValue = 0;
     sum = sum + 11;
                }
            }
    return sum;
    
}

class Deck{
public:
    vector<Card> pDeck;
    Deck() {};
    ~Deck(){};
    void Populate();
    void shuffle();
    void deal(Hand& rHand);
};

// Make up the deck from 52 unique card
void Deck::Populate(){
    pDeck.clear();
    for (int a = ACE;a <= KING;a++)
    {
        for (int b = CLUBS; b <= SPADES; b++)
        {
            pDeck.push_back(Card(static_cast<Rank>(a), static_cast<Type>(b)));
        }
        
    } 
}

// Shuffle 52 cards of the deck 
void Deck::shuffle(){
    random_device rand;
    std::shuffle(begin(pDeck),end(pDeck),rand); 
}


void Deck::deal(Hand& rHand) {
     int deckSize = pDeck.size();
    // Add the card from deck to the hand
    rHand.add(pDeck[deckSize-1]);  
    // Since every card is unique, remove the card from the deck
    pDeck.erase(pDeck.end()-1); 
} 

class AbstractPlayer: public Hand{

public:
AbstractPlayer() {};
virtual ~AbstractPlayer() {};  //Destructor is virtual since the class will be inherited
virtual bool isDrawing() const = 0; //pure virtual
bool isBusted() {
    return getTotal() > 21;
}
};

class HumanPlayer: public AbstractPlayer{
public:
HumanPlayer() {};
~HumanPlayer() {};
    bool isDrawing() const;
    void announce(char a) const;
    void showAll() const;
};

// Compare players input with our keyword (in this case y) to proceede to draw
bool HumanPlayer::isDrawing() const {
  cout << "Do you want to draw? (y/n):";
  char input;
  cin >> input;
  bool anotherDraw = (input == 'y');
  return anotherDraw; 
}


// According to the outcome,announce the winner,loser,draw (push)
void HumanPlayer::announce(char conclusion) const{
    if(conclusion == 'c' ){
       cout << "Casino wins. " << endl;
    } else if(conclusion == 'p' ){
         cout << "Player wins. " << endl;
    } else if(conclusion == 'n') {
        cout << "Push: No one wins. " << endl;
    }
}

void HumanPlayer::showAll() const {
    cout << "Player: ";
     getHand();
    cout << "[" << getTotal() << "]" << endl;
} 


class ComputerPlayer: public AbstractPlayer{
public:
ComputerPlayer() {};
 ~ComputerPlayer() {};
    bool isDrawing() const;
    void showAll() const;
    
};
// Draw until the sum reaches less than or equal to 16
bool ComputerPlayer::isDrawing() const {
    return getTotal() < 17;
}

void ComputerPlayer::showAll() const {
    cout << "Casino: ";
    getHand();
    cout << "[" << getTotal() << "]" << endl;
}

class BlackJackGame {
public:
BlackJackGame() {};
virtual ~BlackJackGame() {}; 
int play();
ComputerPlayer getCasino() const {
    return m_casino;
}
HumanPlayer getPlayer() const {
    return player;
}
private:
    Deck m_deck;
    HumanPlayer player;
    ComputerPlayer m_casino;
};


int BlackJackGame::play(){

    HumanPlayer player = this->player;
    ComputerPlayer casino = this->m_casino;
    Deck deck = this->m_deck;
    
    // Shuffle and fill the deck
    m_deck.Populate();
    m_deck.shuffle();
    // Give one card to Casino 2 cards to the player and show them
    m_deck.deal(m_casino);

    m_casino.showAll();

    m_deck.deal(player);
    m_deck.deal(player);

    player.showAll();
    // Assign y as the draw command
    char input= 'y';
    // Ask the player to draw a card or not if the player didn't bust (player's card pass the sum of 21)
    while (player.isDrawing()) {
        if(input == 'n') {
           return 0;
        }
        else  if (input == 'y') {
            m_deck.deal(player);
            player.showAll();

            if (player.isBusted()) {
                cout << "Player busts." << endl;
                cout << "Casino wins." << endl;
                 m_casino.clear();
            return 0;
            }
       }
    }

    while (m_casino.isDrawing()) {
        if (player.isBusted()) {
          return 0;
        }
        m_deck.deal(m_casino);
        m_casino.showAll();

        if (m_casino.isBusted()) {
            cout << "Casino busts." << endl;
            cout <<"Player wins." << endl; 
             m_casino.clear();
          return 0;
        }
    }
    
      if (!player.isBusted()) {
        if (player.getTotal() == m_casino.getTotal())
        {
         //Push
         player.announce('n');
        }
        else if (player.getTotal() > m_casino.getTotal()) {
        //Player wins
        player.announce('p');
         }
        else if(player.getTotal() < m_casino.getTotal()) {
        //Casino wins
        player.announce('c');
        } 
    }
    player.clear();
    m_casino.clear();
    return 0;


}
 
int main() {
    cout << "\tWelcome to the Blackjack game!" << endl << endl;

    BlackJackGame game;

    //The main loop of the game
    bool playAgain = true;
    char answer = 'y';
    while (playAgain) 
    {
        game.play();

        // Check whether the player would like to play another round
        cout << "Would you like another round? (y/n): ";
        cin >> answer;
        cout << endl << endl;
        playAgain =(answer == 'y' ? true : false);


    }

    cout<< "Game over!";
    return 0;
}