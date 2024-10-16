// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int begin;
    vector<int> answers;
    int answerNum;
    int answerTotal = 0;

    //instructions
    cout << "Answer some questions for me and I will put you in the house where you belong!\nEnter the corresponding number for the answer you choose." << endl;
 
    cout<< "Ready to continue? (Enter 1 for yes and 0 for no)"<< endl;
    cin >> begin;
 
    if (begin == 1){
    cout << "Which trait do you most identify?\n1 - Brave\n2 - Clever\n3 - Loyal\n4- Cunning" << endl;
        //Format for all questions for better readability
        /*Which trait do you most identify?
            1 - Brave
            2 - Clever
            3 - Loyal
            4- Cunning
        */
    
    cin >> answerNum;
    answers.push_back(answerNum); //push answer into vector
    
    cout << "Your friend is being picked on. What do you do?\n1 - Rush in without thinking and defend them!\n2 - Quickly formulate a brilliant plan to help them\n3 - Run and get a teacher - they'll be able to help more than you \n4 - Consider carefully...what do you get out of this?" << endl;
        /*Your friend is being picked on. What do you do?
            1 - Rush in without thinking and defend them!
            2 - Quickly formulate a brilliant plan to help them
            3 - Run and get a teacher - they'll be able to help more than you 
            4 - Consider carefully...what do you get out of this?
        */
    
    cin >> answerNum;
    answers.push_back(answerNum);
    
    cout << "Which of these would be the best pet for you?\n1- A hippogriff: fierce, fast, and fearless\n2 - An owl or phoenix: something clever\n3 - A dog or cat: something loyal and kind\n4 - A snake or a lizard" << endl;
        /*Which of these would be the best pet for you?
            1- A hippogriff: fierce, fast, and fearless
            2 - An owl or phoenix: something clever
            3 - A dog or cat: something loyal and kind
            4 - A snake or a lizard
        */
    
    cin >> answerNum;
    answers.push_back(answerNum);
    
    cout << "What would your family say is your worst trait?\n1 - Reckless. You don't think before you act\n2 - A bit of a know-it-all\n3 - You're too nice for your own good\n4 - Worst trait? You have no bad traits" << endl;
        /* What would your family say is your worst trait?
            1 - Reckless. You don't think before you act
            2 - A bit of a know-it-all
            3 - You're too nice for your own good
            4 - Worst trait? You have no bad traits
        */
    
    cin >> answerNum;
    answers.push_back(answerNum);
    
    cout << "If you could have any superpower, what would it be?\n1 - Super strength or invincibility\n2 - Power of foresight so you know what's coming\n3 - Invisibility\n4 - Mind control so everyone will do what you say" << endl;
        /*If you could have any superpower, what would it be?
            1 - Super strength or invincibility
            2 - Power of foresight so you know what's coming
            3 - Invisibility
            4 - Mind control so everyone will do what you say
        */
    
    cin >> answerNum;
    answers.push_back(answerNum);
    
    // Calculates the mode of the vector to determine which house the user belongs in
    // Ex: if user's answers consist mostly of 1's, they belong in Gryffindor
    int previous=0;
    int current=0; 
    int mode=0;
    for(int i=0; i<answers.size(); i++){
       for(int j=0; j<answers.size(); j++){
           if(answers[j] == answers[i]){
               current++;
           }
           if(current > mode){
               mode = answers[i];
               previous = current;
               current = 0;
           }
           
           
       }
       current = 0;
    }
    
    if(mode == 1){
        cout << "You belong to Gryffindor!" << endl;
    }
    else if(mode == 2){
        cout << "You belong to Ravenclaw!" << endl;
    }
    else if(mode == 3){
        cout << "You belong to HufflePuff!" << endl;
    }
    else if(mode == 4){
        cout << "You belong to Slytherin!" << endl;
    }
   
 }
 else if(begin == 0){
     cout << "Suit yourself!";
 }

 

    return 0;
}
