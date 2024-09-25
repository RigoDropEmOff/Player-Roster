#include <stdio.h>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int userInput = 5;
    vector <int> vectorJersey (userInput);
    vector <int> vectorRating (userInput);
    unsigned int i;
    int counter =0;
    int counter1 =0;
    char option;
    int newJersey;
    int newRating;
    
    for(i=0; i < vectorJersey.size(); i++){
        counter ++;
        counter1 ++;
        cout << "Enter Player "<<counter<<"'s"<<" Jersey number: "<<endl;
        cin >> vectorJersey.at(i);
        cout << "Enter Player "<<counter1<<"'s"<<" Rating: "<<endl;
        cin >> vectorRating.at(i);
    }
   /* for(i=0; i < vectorRating.size(); i++){
        counter ++;
        cout << "Enter Player "<<counter<<"'s"<<" Rating: "<<endl;
        cin >> vectorRating.at(i);
    }
    */
    cout << endl;
    cout << "Roster: "<<endl;
    for(i=0; i<vectorJersey.size();i++){
                cout<<"Player "<<i+1<<" --"<<" Jersey Number: "<<vectorJersey.at(i)<<", Rating: "<<vectorRating.at(i)<<endl;
            }
    cout << vectorJersey.size();
    
    //step2
    cout <<endl;
    cout <<"--------------------------"<<endl;
    cout <<"a - Add Player"<<endl;
    cout <<"d - Remove Player"<<endl;
    cout <<"u - Update Player Rating"<<endl;
    cout <<"r - Output Players Above a Rating"<<endl;
    cout <<"o - Ouput Roster"<<endl;
    cout <<"q - Quit"<<endl;
    cout <<"-----Choose An Option-----"<<endl;

    
    while(option != 'q'){
        cin >> option;
        if(option == 'o'){
            cout << "Roster: "<<endl;
            for(i=0; i<vectorJersey.size();i++){
                cout<<"Player "<<i+1<<" --"<<" Jersey Number: "<<vectorJersey.at(i)<<", Rating: "<<vectorRating.at(i)<<endl;
            }
            /*
            cout << "Player 1 --"<<" Jersey Number: "<<vectorJersey.at(0)<<", Rating: "<<vectorRating.at(0)<<endl;
            cout << "Player 2 --"<<" Jersey Number: "<<vectorJersey.at(1)<<", Rating: "<<vectorRating.at(1)<<endl;
            cout << "Player 3 --"<<" Jersey Number: "<<vectorJersey.at(2)<<", Rating: "<<vectorRating.at(2)<<endl;
            cout << "Player 4 --"<<" Jersey Number: "<<vectorJersey.at(3)<<", Rating: "<<vectorRating.at(3)<<endl;
            cout << "Player 5 --"<<" Jersey Number: "<<vectorJersey.at(4)<<", Rating: "<<vectorRating.at(4)<<endl;*/
        }
     
        else if(option == 'a'){
            //userInput += 1;
            cout << "Enter A New Player's Jersey Number: "<< endl;
            cin >> newJersey;
            //vectorJersey.resize(i);
            vectorJersey.push_back(newJersey);
            cout << "Enter the Player's Rating: "<<endl;
            cin >> newRating;
            //vectorRating.resize(i);
            vectorRating.push_back(newRating);
            cout << "Player added successfully!" << endl;
            //cout << vectorRating.size()<<endl;
            //cout << vectorJersey.size()<<endl;
            //cout << vectorJersey.back()<<endl;
            //cout << vectorRating.back();
            }
           else if (option == 'd'){
               int jerseyToDelete;
               cout << "Enter the the player's jersey number you wish to delete: "<<endl;
               cin >>jerseyToDelete;
               
               bool found = false;
               for (int i=0; i < vectorJersey.size(); i++){
                   if(vectorJersey[i] == jerseyToDelete){
                   vectorJersey.erase(vectorJersey.begin()+ i);
                   vectorRating.erase(vectorRating.begin()+ i);
                   found = true;
                   cout << "The player with jersey number "<<jerseyToDelete<<" was deleted from the roster."<<endl;
                   break;
               }
                else if(!found){
                    cout << "The player was not found in the roster."<<endl;
               }
           }
           }
            else if (option == 'u'){
                int updatedJersey;
                int updatedRating;
                cout << "Enter the player's jersey number you want to update: "<<endl;
                cin >> updatedJersey;
                cout << "Enter a new rating for this player:" <<endl;
                cin >>updatedRating;
                bool found2 = false;
                for(int i = 0; i < vectorJersey.size(); i++){
                    if(updatedJersey == vectorJersey[i]){
                        found2 = true;
                        vectorRating[i] = updatedRating;
                        cout << "The player's rating has been updated!"<<endl;
                        break;
                    }
                    else if(!found2){
                        cout << "Player not found."<<endl;
                    }
                }
            }
            else if(option == 'r'){
                int rating;
                cout <<"Input a Rating: "<<endl;
                cin >>rating;
                cout << "Players Above a "<<rating<<" rating:"<<endl;
                    for(i=0; i<vectorJersey.size();i++){
                        if(vectorRating.at(i) > rating){
                             cout<<"Player "<<i+1<<" --"<<" Jersey Number: "<<vectorJersey.at(i)<<", Rating: "<<vectorRating.at(i)<<endl;
                         }
                }
            }
           
           /*else if(option == 'd'){
            int jerseyToDelete;
            cout << "Enter the player's jersey number to delete: ";
            cin >> jerseyToDelete;

            bool found = false;
            for(i = 0; i < vectorJersey.size(); i++) {
                if(vectorJersey[i] == jerseyToDelete) {
                // Remove the player from both vectors
                vectorJersey.erase(vectorJersey.begin() + i);
                vectorRating.erase(vectorRating.begin() + i);
                found = true;
                cout << "Player with jersey number " << jerseyToDelete << " has been removed from the roster." << endl;
                break;  // Exit the loop once we've found and removed the player
        }
    }

            if(!found) {
                cout << "Player with jersey number " << jerseyToDelete << " not found in the roster." << endl;
    }}*/

            
    
       
            
        
    }
    
    

    return 0;
    
}