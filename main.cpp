#include <iostream>
#include <string> 

using namespace std;

#define START_INDEX 1
#define END_INDEX 20

void fizzBuzzer(int);

int main(int argc, char **argv)
{
    for( int i = START_INDEX; i <= END_INDEX; i++)
        fizzBuzzer(i);
    cout << endl;
	return 0;
}

void fizzBuzzer(int number)
{
    if (number % 15 == 0){
        cout << "fizzbuzz ";
    } else if (number % 5 == 0) {
        cout << "buzz ";        
    } else if(number % 3 == 0) {
        cout << "fizz ";
    } else {
        cout << number << " ";
    }
}