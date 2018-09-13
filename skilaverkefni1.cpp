// Kypler Lloyd Espiritu
// Skilaverkefni 1

#include <iostream>
#include <bitset>
#include <stdlib.h>
#include <limits>


using namespace std;

void checkDataType();
int insertChoice();
int val;
int tala;
bool run = true;
bool validation = false;

int main()
{

  cout << "Talnakerfisbreytir" << endl;

  do
  {
    while(!validation) // True
    {
      cout << endl;
      cout << "1 - Breyta í tvíundakerfið" << endl;
      cout << "2 - Breyta í áttundakerfi?ð" << endl;
      cout << "3 - Breyta í sextándakerfið" << endl;
      cout << "0 - Hætta" << endl;
      cout << "-----------------" << endl;
      cout << "Veldu aðgerð: ";
      cin >> val;
      cout << endl;

      if (cin.fail()) // Ef maður slær inn vitluasa data týpu
        checkDataType();
      else
        break;
    }

    switch(val){
      case 1: // Tíundakerfi
        while(!validation)
        {
          insertChoice();
          if (cin.fail())
            checkDataType();
          else
            break;
        }
        if (tala <= 255) // Ef tala er minni en 255
          cout << "Talan " << tala << " er " << bitset<8>(tala) << " í tvíundakerfinu." << endl;
        else
          cout << "Talan " << tala << " er " << bitset<32>(tala) << " í tvíundakerfinu." << endl; 
        break;

      case 2: // Áttundakerfi
        while(!validation)
        {
          insertChoice();
          if (cin.fail())
            checkDataType();
          else
            break;
        }
        cout << "Talan " << tala << " er " << oct << tala << " í áttundakerfinu." << endl;
        break;

      case 3: // Sextándakerfi
        while(!validation)
        {
          insertChoice();
          if (cin.fail())
            checkDataType();
          else
            break;
        }
        cout << "Talan " << tala << " er " << hex << tala << " í sextándakerfinu." << endl;
        break;
      
      case 0: // Hætta
        run = false;
        break;
      
      default: // Ef þú slærð inn allt annað en það sem var beðið þér um
        cout << "Villa" << endl;
        break;
    }
  } while(run == true);

  return 0;
}

void checkDataType() // Fall sem hagar sem error handler þegar maður slær inn ranga data týpu
{
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
  cout << "Vitlaus data týpa" << endl;
  cout << endl;
  validation = false;
  return;
}

int insertChoice() // Frekar skiljanlegt fall
{
  cout << "Sláðu inn tölu: ";
  cin >> tala;
  cout << endl;
  return 0;
}

