#include "Pet.h"
#define ARRAY_SIZE 2

int main(int argc, const char* argv[]){
  pet *pets[ARRAY_SIZE]; //array of pets

  //intializing pets into pet array
  pets[0] = new pet("Fido", 10, "dog", 30.0);
  pets[1] = new pet("Garfield", 8, "cat", 15.0);

  //Printing each characteristic of the pets
  for(int i = 0; i < ARRAY_SIZE; ++i){
    cout << pets[i]->getName() << " " <<
    pets[i]->getAge() << " " <<
    pets[i]->getType() << " " <<
    pets[i]->getWeight() << endl;
    delete pets[i];
  }
}
