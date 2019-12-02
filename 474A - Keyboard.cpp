#include <iostream>
#include <string>
using namespace std;
int main() {
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction;
    cin>>direction;
    string input;
    cin>>input;
    for (int i=0; i<input.length(); i++)
    {
        if (direction == 'R'){
            int x = keyboard.find(input[i]);
            input[i] = keyboard[x-1];
        }
        else if (direction == 'L'){
            int x = keyboard.find(input[i]);
            input[i] = keyboard[x+1];
        }
    } 
    cout<<input;
    return 0;
}