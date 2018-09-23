#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>


using namespace std;

int main()
{
       
        int die1PC,die2PC,totalPC,die1HM,die2HM,totalHM;  
        int input;
        cout << "Enter 1 to play: " << endl;
        cin >> input;
        while(input ==1)
        {
            


            srand(time(0));
            die1PC = (rand()%6) + 1;
            die2PC = (rand()%6) + 1;
            totalPC = die1PC + die2PC;
            
            die1HM = (rand()%6) + 1;
            die2HM = (rand()%6) + 1;
            totalHM = die1HM + die2HM;

            Sleep(1000);
            cout << "You rolled: ";
            cout <<totalHM << endl;

            Sleep(1000); 
            cout << "The computer rolled: ";
            cout << totalPC << endl;
             

            if(totalHM > totalPC)
                cout << "You win!" << endl;
            if(totalHM < totalPC)
                cout << "You lose!" << endl;
            if(totalPC == totalHM)
                cout << "Its a tie!" << endl;
            
            int restart;
            Sleep(1000);
            cout << "Press 1 to play again" << endl;
            cin >> restart;

            
            
            

        }
}