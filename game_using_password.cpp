#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;


const string filename = "password.txt";

void createPassword(void)
{
    ofstream outfile(filename);
    if (outfile.is_open())
    {
        string enterpass, confirmpass;
    confirm:
        cout << "Enter Password" << endl;
        cin >> enterpass;
        cout << "Confirm Password" << endl;
        cin >> confirmpass;
        if (enterpass == confirmpass)
        {
            outfile << enterpass;
            outfile.close();
            cout << "Password has been set" << endl;
        }
        else
        {
            cout << "Enter same password in confirm section" << endl;
            goto confirm;
        }
    }
    else
    {
        cout << "Error for opening file" << endl;
    }
}

bool verifyPassword()
{
    string storedPass, enteredPass;
    ifstream infile(filename);
    if (infile.is_open())
    {
        getline(infile, storedPass);
        infile.close();
    }
    else
    {
        cout << "Error for opening file" << endl;
        return false;
    }

    cout << "Enter Password" << endl;
    cin >> enteredPass;

    return enteredPass == storedPass;
}

void numberGuessGame(void){
    int usernum , randnum ;
    int tries = 1;
    srand(time(0));
    randnum = rand() % 100 + 1;
    do
    {
    // cout <<randnum << endl;
    cout<<"Enter Number"<<endl;
    cin>>usernum;
    if (usernum<randnum)
    {
        cout<<"Please Enter a big Number"<<endl;
        tries++;
    }
    else if(usernum>randnum){

        cout<<"Please Enter a small Number"<<endl;
        tries++;
    }
    else{
        cout<<"Game over!!"<<endl<<"You Guess number in "<<tries<<" tries"<<endl;
    }
    
    } while (usernum!=randnum);
    
}

int main()
{

    ifstream ifile(filename);
    if (!ifile)
    {
        cout << "New User" << endl
             << "Let's Create Password" << endl;
        createPassword();
    }
    else
    {
        ifile.close();
    }
    int count = 0;
    int max_attemp = 5;
    do
    {
        if (verifyPassword())
        {
            cout << "Welcome" << endl
                 << "Now you can play game" << endl;
            numberGuessGame();
            break;
        }
        else
        {
            cout << "Incorrect Password" << endl;
            count++;
            if (count == max_attemp)
            {
                cout << "You can't play game because you entered worng password many time" << endl;
                break;
            }
        }

    } while (count < max_attemp);

    return 0;
}

