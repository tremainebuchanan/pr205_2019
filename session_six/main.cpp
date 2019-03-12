//Author: Tremaine Buchanan
//Date: Marcg 12, 2019
//Practise Set Two
//Question 2
//Using the switch/case control structure of C++ develop a menu driven calculator. 
//Allow the user to enter two numbers.
//Upon accepting the two number, print the below menu, 
//the accept a number between 1 – 4 :
//1 – Add two numbers
//2 – Subtract two numbers
//3 – Divide two numbers
//4 – Multiply two numbers
//After accepting the menu item, complete the user’s request. For example, if the user
//selects 1, the two numbers must be added and the output printed with a friendly message
//i.e. “The sum of 10 and 20 is 30”.
/*************************************/ 
#include <iostream>
using namespace std;

int main(){
    int choice = 0;
    int num_one = 0;
    int num_two = 0;
    cout << "Enter number one ->";
    cin >> num_one;
    cout << "Enter number two ->";
    cin >> num_two;
    //Print menu
    cout << "**********************\n";
    cout << "\tMENU\n";
    cout << "**********************\n";
    cout << "1 - Add two numbers\n";
    cout << "2 - Subtract two numbers" << endl;
    cout << "3 - Divide two numebrs" << endl;
    cout << "4 - Multiply two numbers" << endl;
    cin >> choice;

    switch(choice){
        case 1: cout << "The sum of " << num_one << " and " << num_two << " is " << num_one + num_two << endl;
        break;
        case 2: cout << "The difference of " << num_one << " and " << num_two << " is " << num_one - num_two << endl;
        break;
        case 3: cout << "The quotient of " << num_one << " and "<< num_two << " is " << num_one / num_two << endl;
        break;
        case 4: cout << "The product of " << num_one << " and " << num_two << " is " << num_one * num_two << endl;
        break;
        default: cout << "You're choice of " << choice << " does not corresponding any menu items\n";
    }
    return 0;
}