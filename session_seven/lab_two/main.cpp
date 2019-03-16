//Author: Tremaine Buchanan
//Session Seven
//Lab Two
#include <iostream>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float average = 0;
    int number = 0;
    do
    {
        cin >> number;        
        if( number > 0){
            count = count + 1;
            sum = sum + number;
        } 
    } while (number > 0);    
    cout << "\nThe average is " << sum / count << endl;
    return 0;    
}