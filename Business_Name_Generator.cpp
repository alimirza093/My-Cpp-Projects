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
    srand(time(0));
    int random_number = rand() % 100 + 1;
    return random_number;
}
int main()
{

    string firstName, secondName, thirdName;
    if (RandomNumber() >= 1 && RandomNumber() <= 33)
    {
        firstName = "Crazy";
    }
    else if (RandomNumber() >= 34 && RandomNumber() <= 66)
    {
        firstName = "Amazing";
    }
    else
    {
        firstName = "Fire";
    }
    if(RandomNumber() >= 1 && RandomNumber() <= 33)
    {
        secondName = "Engine";
    }
    else if (RandomNumber() >= 34 && RandomNumber() <= 66)
    {
        secondName = "Foods";
    }
    else
    {
        secondName = "Garments";
    }
    if(RandomNumber() >= 1 && RandomNumber() <= 33)
    {
        thirdName = "Bros";
    }
    else if (RandomNumber() >= 34 && RandomNumber() <= 66)
    {
        thirdName = "Limited";
    }
    else
    {
        thirdName = "Hub";
    }
    cout << "Business Name: " << firstName << " " << secondName << " " << thirdName << endl;
    return 0;
}