//Author: Tremaine Buchanan
//Session Seven
//Lab One
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    float average = 0;
    int count;
    int number = 0;
    for(count = 0; count < 10; count = count + 1 ){
        cout << "Enter number " << count + 1 << "--> ";
        cin >> number;
        sum = sum + number;
    }
    cout << "The average of the numbers entered is " << sum / count << endl;
    return 0;
}