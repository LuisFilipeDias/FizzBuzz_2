#include "fizzBuzzer.h"

static int counter[] = {0, 0, 0, 0, 0};
const static string keywords[5] = {"fizz", "buzz" , "fizzbuzz", "lucky", "integer"};    
    
fizzBuzzer::fizzBuzzer()
{
}

void fizzBuzzer::fizzBuzzerCountPrinter()
{
    for( int i = 0; i < 5; i++)
        cout << keywords[i] << ": " << counter[i] << endl;
}
    
void fizzBuzzer::fizzBuzzerImplementer(int number)
{
    int c_number = number;
        
    while(c_number != 0){
        if(c_number % 10 == 3){
            cout << keywords[3] << " ";
            counter[3] ++;
            return;
        }
        c_number = c_number / 10;
    }
    if (number % 15 == 0){
        cout << keywords[2] << " ";
        counter[2] ++;
    } else if (number % 5 == 0) {
        cout << keywords[1] << " ";
        counter[1] ++;        
    } else if(number % 3 == 0) {
        cout << keywords[0] << " ";
        counter[0] ++;
    } else {
        cout << number << " ";
        counter[4] ++;
    }
}