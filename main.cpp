#include "fizzBuzzer.h" 

#define START_INDEX 1
#define END_INDEX 20

int main()
{
    fizzBuzzer *fb = new fizzBuzzer();
    
    for( int i = START_INDEX; i <= END_INDEX; i++)
        fb->fizzBuzzerImplementer(i);
    fb->fizzBuzzerCountPrinter();
    
	delete fb;
	return 0;
}