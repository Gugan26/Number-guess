#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
class game{
    public: 
    void easy();
    void medium();
    void hard();
};
void game::easy(){
    srand(time(0));
    int num = rand() % 100;
    int guessed_number;
    int trying_number;
    cout<<endl<<endl<<"Guess the number between 1 to 100 : ";
    cin>>guessed_number;
    while(guessed_number != num){
        if(guessed_number > num){
            cout<<"It's greater than what I guess"<<endl;
            cout<<"Try to read my mind, Try it:  ";
            cin>>trying_number;
            cout<<endl<<endl;
        }
        else if(guessed_number < num){
            cout<<"It's smaller than what I guess"<<endl;
            cout<<"Try to read my mind, Try it:  ";
            cin>>trying_number;
            cout<<endl<<endl;
        }
        guessed_number = trying_number;
    }
    cout<<"WELL DONE, My boi...."<<endl<<endl<<endl<<endl;
}
void game::medium(){
    srand(time(0));
    int num = rand() % 1000;
    int guessed_number;
    int trying_number;
    cout<<endl<<endl<<"Guess the number between 1 to 1000 : ";
    cin>>guessed_number;
    while(guessed_number != num){
        if(guessed_number > num){
            cout<<"It's greater than what I guess"<<endl;
            cout<<"Try to read my mind, Try it:  ";
            cin>>trying_number;
            cout<<endl<<endl;
        }
        else if(guessed_number < num){
            cout<<"It's smaller than what I guess. "<<endl;
            cout<<"Try to read my mind, Try it:  ";
            cin>>trying_number;
            cout<<endl<<endl;
        }
        guessed_number = trying_number;
    }
    cout<<"WELL DONE, My boi...."<<endl<<endl<<endl<<endl;
}
void game::hard(){
    srand(time(0));
    int num = rand() % 10000;
    int guessed_number;
    int trying_number;
    cout<<endl<<endl<<"Guess the number between 1 to 10000 : ";
    cin>>guessed_number;
    while(guessed_number != num){
        if(guessed_number > num){
            cout<<"It's greater than what I guess. "<<endl;
            cout<<"Try to read my mind, Try it:  ";
            cin>>trying_number;
            cout<<endl<<endl;
        }
        else if(guessed_number < num){
            cout<<"It's smaller than what I guess. "<<endl;
            cout<<"Try to read my mind, Try it:  ";
            cin>>trying_number;
            cout<<endl<<endl;
        }
        guessed_number = trying_number;
    }
    cout<<"WELL DONE, My boi...."<<endl<<endl<<endl<<endl;
}
int main(){
    game g;
    
    int difficulty;
    char continue_game;
    cout<<"\t \t ****** GUESS MY MIND ****** "<<endl<<endl;
    cout<<"\t GAME RULE"<<endl;
    cout<<"I am thinking of a random number. You just need to guess that number."<<endl<<endl;
    
    cout<<"1. Easy"<<endl;
    cout<<"2. Medium"<<endl;
    cout<<"3. Hard"<<endl;
    cout<<"Choose the difficulty of this game: ";
    cin>>difficulty;
    switch(difficulty){
        case 1:{
            g.easy();
            cout<<"Do you like to continue (Y/N) : ";
            cin>>continue_game;
            if(continue_game == 'Y'){
                g.easy();
            }
            else{
                cout<<"Ok... Bye"<<endl;
                break;
            }
        }
        case 2:{
            g.medium();
            cout<<"Do you like to continue (Y/N) : ";
            cin>>continue_game;
            if(continue_game == 'Y'){
                g.medium();
            }
            else{
                cout<<"Ok... Bye"<<endl;
                break;
            }
        }
        case 3:{
            g.hard();
            cout<<"Do you like to continue (Y/N) : ";
            cin>>continue_game;
            if(continue_game == 'Y'){
                g.hard();
            }
            else{
                cout<<"Ok... Bye"<<endl;
                break;
            }
        }
    }
}