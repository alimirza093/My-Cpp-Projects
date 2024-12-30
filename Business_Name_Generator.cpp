/*First name
Crazy
Amazing
Fire

Second Name
Engine
Foods
Garments

Third Name
Bros
Limted
Hub
*/

/*First name
Crazy
Amazing
Fire

Second Name
Engine
Foods
Garments

Third Name
Bros
Limted
Hub
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int RandomNumber()
{
    int random_number = rand() % 100 + 1;
    return random_number;
}
int main()
{
    srand(time(0));
    string first, second, third;
    int rnum = RandomNumber();
    if(rnum>=1 && rnum<=33){
    first = "Crazy";
    }
    else if(rnum>=34 && rnum<=66){
    first = "Amazing";
    }
    else{
    first = "Fire";
    }
    rnum = RandomNumber();
    if (rnum >= 1 && rnum <= 33)
    {
        second = "Engine";
    }
    else if (rnum >= 34 && rnum <= 66)
    {
        second = "Foods";
    }
    else
    {
        second = "Garments";
    }
    rnum = RandomNumber();
    if (rnum >= 1 && rnum <= 33)
    {
        third = "Bros";
    }
    else if (rnum >= 34 && rnum <= 66)
    {
        third = "Limited";
    }
    else
    {
        third = "Hub";
    }

    cout << "Business Name: " << first << " " << second << " " << third << endl;
    
    
    return 0;
}