#include <iostream>
#include <fstream>
using namespace std;

//one theme is sports team
class MemoryMatchGame{
    
private:
    bool statusOfGame;
    char difficutylevel;
    int r1Value, c1Value, r2Value, c2Value;
    string mmmatrix[4][4];
    int menuinput;
    string author;
    //difficulty level
    int dLevel;
  string states[50] = {"AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DE", "FL", "GA", "HI", "ID", "IL", "IN", "IA", "KS", "KY", "LA", "ME", "MD", "MA", "MI", "MN", "MS", "MO", "MT", "NE", "NV", "NH", "NJ", "NM", "NY", "NC", "ND", "OH", "OK", "OR", "PA", "RI","SC", "SD", "TN", "TX", "UT","VT", "VA", "WA", "WV", "WI", "WY" };
public:
    
    MemoryMatchGame()
    {
        author = "Victor Delaplaine";
    }
    
    //our running function
    
    void start()
    {
        
        switch (menuOption())
        {
            case 1:
                //void gameMenu diffuclty
                gameMenu();
            
                break;
            case 2:
                //instruction
                instruction();
                break;
            case 3:
                exit(EXIT_FAILURE);
                break;
            default:
                cout << "please enter a valid option\n";
                start();
                break;
        }
        
        
    }
    
    
    
    void gameMenu()
    {
        
        cout << "Select the difficulty level " << endl;
        cout << "++++++++++++++++++++++++++++++++++++\n";
        cout << "1. Easy grid (4x4)\n";
        cout << "2. Medium grid (6x6)\n";
        cout << "3. Hard grid (8x8)\n";
        cout << "4. Main Menu\n";
        //read
        cin >> dLevel;
        
        //switch
        switch(dLevel)
        {
                //case easy
            case 1:
                //Random time
                srand((unsigned)time(NULL));
                
                //Loop
                for (int rr=0; rr<4; rr++)
                {
                    //Loop
                    for (int cc=0; cc<4; cc++)
                    {
                        //Initialize a random matrix
                        mmmatrix[rr][cc]=states[rand()%8+1];
                    }
                    
                    //Print newline
                    cout<<endl;
                }
                
                //Print
                cout<<"    1  2  3  4\n";
                
                //Print
                cout<<" ";
                
                //Loop
                for (int ii=0; ii<=8; ii++)
                {
                    //Print
                    cout<<"--";
                }
                
                //Print newline
                cout<<endl;
                
                //Loop
                for (int rr=0; rr<4; rr++)
                {
                    //Print
                    cout<<rr+1<<" | ";
                    
                    //Loop
                    for (int cc=0; cc<4; cc++)
                    {
                        //Print
                        cout<<"*  ";
                    }
                    
                    //Print newline
                    cout<<endl;
                }
                
                //Print newline
                cout<<endl;
                
                //Function call
                easyLoop();
                
                //End of case easy
                break;
            //medium
            case 2:
                //Random time
                srand((unsigned)time(NULL));
                
                //Loop
                for (int rr=0; rr<6; rr++)
                {
                    //Loop
                    for (int cc=0; cc<6; cc++)
                    {
                        //Initialize a random matrix
                        mmmatrix[rr][cc]= states[rand()%12+1];
                    }
                    
                    //Print newline
                    cout<<endl;
                }
                
                //Print
                cout<<"    1  2  3  4  5  6\n";
                
                //Print
                cout<<" ";
                
                //Loop
                for (int ii=0; ii<=12; ii++)
                {
                    //Print
                    cout<<"--";
                }
                
                //Print newline
                cout<<endl;
                
                //Loop
                for (int rr=0; rr<6; rr++)
                {
                    //Print
                    cout<<rr+1<<" | ";
                    
                    //Loop
                    for (int cc=0; cc<6; cc++)
                    {
                        //Print
                        cout<<"*  ";
                    }
                    
                    //Print newline
                    cout<<endl;
                }
                
                //Print newline
                cout<<endl;
                
                //Function call
                mediumLoop();
                
                //End of case moderate
                break;

            case 3:
                //Random time
                srand((unsigned)time(NULL));
                
                //Loop
                for (int rr=0; rr<8; rr++)
                {
                    //Loop
                    for (int cc=0; cc<8; cc++)
                    {
                        //Initialize a random matrix
                        mmmatrix[rr][cc]=states[rand()%16+1];
                    }
                    
                    //Print newline
                    cout<<endl;
                }
                
                //Print
                cout<<"    1  2  3  4  5  6  7  8\n";
                
                //Print
                cout<<" ";
                
                //Loop
                for (int ii=0; ii<=16; ii++)
                {
                    //Print
                    cout<<"--";
                }
                
                //Print newline
                cout<<endl;
                
                //Loop
                for (int rr=0; rr<8; rr++)
                {
                    //Print
                    cout<<rr+1<<" | ";
                    
                    //Loop
                    for (int cc=0; cc<8; cc++)
                    {
                        //Print
                        cout<<"*  ";
                    }
                    
                    //Print newline
                    cout<<endl;
                }
                
                //Print newline
                cout<<endl;
                
                //Function call
                difficultLoop();
                
                //End of case difficult
                break;
            case 4:
                cout << "... Returning the main menu\n";
                start();
            default:
                cout << "please enter in a valid option\n";
                gameMenu();
                
        }
        
    }
    
    
    
    
    
    int menuOption()
    {
        //reinitalize option
        int option = 0;
        
        cout << "welcome to " << author << "'s Memory Match Game\n";
        cout << "\nMain Menu\n";
        cout << "1. Start Game\n";
        cout << "2. Instructions\n";
        cout << "3. Exit\n";
        cin >> option;
        
        return option;
    }
    
    
    
    
    void instruction()
    {
        
        cout << "instructions:\n" << endl;

        cout << "-----GAME PLAY----" << endl;
        
        cout << "User selects a FIRST square, the theme/face term  in the grid square is replace with correspond stored term, from the 2-dim answer array\n";
        cout << "User selects a SECOND square, the term theme/face in the second grid square is replace with the corresponding stored term, from the 2-dim answer array\n";
        cout << " The computer compares the terms for the two selected squares.\n";
        cout << " If they are the same, the terms remain on the screen and can no longer be selected.\n";
        cout << " If they are different, the term remain the screen for 2, 4 or 6 seconds, depending on user selection at the beginning of the game.  After that elapse time, those two grid terms are replaced with the face/theme term.";

        //go back to the menu
        start();
    }
    
    

    //Method easyLoop
    void easyLoop()
    {
        //Prompt
        cout<<"Enter row and column value for first card: ";
        
        //Read
        cin>>r1Value>>c1Value;
        
        //Prompt
        cout<<"Enter row and column value for second card: ";
        
        //Read
        cin>>r2Value>>c2Value;
        
        //Decrement
        r1Value--;
        
        //Decrement
        c1Value--;
        
        //Decrement
        r2Value--;
        
        //Decrement
        c2Value--;
        
        //Print
        cout<<"   1  2  3  4\n";
        
        //Print
        cout<<" ";
        
        //Loop
        for (int ii=0; ii<=8; ii++)
        {
            //Print
            cout<<"--";
        }
        
        //Print newline
        cout<<endl;
        
        //Loop
        for (int rr=0; rr<4; rr++)
        {
            //Print
            cout<<rr+1<<" | ";
            
            //Loop
            for (int cc=0; cc<4; cc++)
            {
                //Check condition
                if ((rr==r1Value)&&(cc==c1Value))
                {
                    //Print
                    cout<<mmmatrix[rr][cc]<<" ";
                }
                
                //Check condition
                else if((rr==r2Value)&&(cc==c2Value))
                {
                    //Print
                    cout<<mmmatrix[rr][cc]<<" ";
                }
                
                //Otherwise
                else
                {
                    //Print
                    cout<<"*  ";
                }
            }
            
            //Print newline
            cout<<endl;
        }
        
        //Function call
        easyMatch();
    }
    
    //Method mediumLoop()
    void mediumLoop()
    {
        //Prompt
        cout<<"Enter row and column value for first card: ";
        
        //Read
        cin>>r1Value>>c1Value;
        
        //Prompt
        cout<<"Enter row and column value for second card: ";
        
        //Read
        cin>>r2Value>>c2Value;
        
        //Decrement
        r1Value--;
        
        //Decrement
        c1Value--;
        
        //Decrement
        r2Value--;
        
        //Decrement
        c2Value--;
        
        //Print
        cout<<"   1  2  3  4  5  6\n";
        
        //Print
        cout<<" ";
        
        //Loop
        for (int ii=0; ii<=12; ii++)
        {
            //Print
            cout<<"--";
        }
        
        //Print newline
        cout<<endl;
        
        //Loop
        for (int rr=0; rr<6; rr++)
        {
            //Print
            cout<<rr+1<<" | ";
            
            //Loop
            for (int cc=0; cc<6; cc++)
            {
                //Check condition
                if ((rr==r1Value)&&(cc==c1Value))
                {
                    //Print
                    cout<<mmmatrix[rr][cc]<<" ";
                }
                
                //Check condition
                else if((rr==r2Value)&&(cc==c2Value))
                {
                    //Print
                    cout<<mmmatrix[rr][cc]<<" ";
                }
                
                //Otherwise
                else
                {
                    //Print
                    cout<<"*  ";
                }
            }
            
            //Print newline
            cout<<endl;
        }
        
        //Function call
        mediumMatch();
    }
    
    //Method difficultLoop()
    void difficultLoop()
    {
        //Prompt
        cout<<"Enter row and column value for first card: ";
        
        //Read
        cin>>r1Value>>c1Value;
        
        //Prompt
        cout<<"Enter row and column value for second card: ";
        
        //Read
        cin>>r2Value>>c2Value;
        
        //Decrement
        r1Value--;
        
        //Decrement
        c1Value--;
        
        //Decrement
        r2Value--;
        
        //Decrement
        c2Value--;
        
        //Print
        cout<<"   1  2  3  4  5  6  7  8\n";
        
        //Print
        cout<<" ";
        
        //Loop
        for (int ii=0; ii<=16; ii++)
        {
            //Print
            cout<<"--";
        }
        
        //Print newline
        cout<<endl;
        
        //Loop
        for (int rr=0; rr<8; rr++)
        {
            //Print
            cout<<rr+1<<" | ";
            
            //Loop
            for (int cc=0; cc<8; cc++)
            {
                //Check condition
                if ((rr==r1Value)&&(cc==c1Value))
                {
                    //Print
                    cout<<mmmatrix[rr][cc]<<" ";
                }
                else if((rr==r2Value)&&(cc==c2Value))
                {
                    //Print
                    cout<<mmmatrix[rr][cc]<<" ";
                }
                
                //Otherwise
                else
                {
                    //Print
                    cout<<"*  ";
                }
            }
            
            //Print newline
            cout<<endl;
        }
        
        //Function call
        difficultMatch();
    }
    
    //Method easyMatch()
    void easyMatch()
    {
        //Check condition
        if (mmmatrix[r1Value][c1Value]==mmmatrix[r2Value][c2Value])
        {
            //Print
            cout << "Match!" << endl;
            
            //Function call
            easyLoop();
        }
        
        //Otherwise
        else
        {
            //Print
            cout << "No match!" << endl;
            
            //Function call
            easyLoop();
        }
    }
    
    //Method mediumMatch()
    void mediumMatch()
    {
        //Check condition
        if (mmmatrix[r1Value][c1Value]==mmmatrix[r2Value][c2Value])
        {
            //Print
            cout << "Match!" << endl;
            
            //Function call
            mediumLoop();
        }
        
        //Otherwise
        else
        {
            //Print
            cout << "No match!" << endl;
            
            //Function call
            mediumLoop();
        }
    }
    
    //Method difficultMatch()
    void difficultMatch()
    {
        //Check condition
        if (mmmatrix[r1Value][c1Value]==mmmatrix[r2Value][c2Value])
        {
            //Print
            cout << "Match!" << endl;
            
            //Function call
            difficultLoop();
        }
        
        //Otherwise
        else
        {
            //Print
            cout << "No match!" << endl;
            
            //Function call
            difficultLoop();
        }
    }
};




int main()
{
    MemoryMatchGame Game1;
    Game1.start();
    
    return 0;
}

