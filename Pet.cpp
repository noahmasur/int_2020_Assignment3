#include "Pet.h"

//default constructor
pet::pet(){
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0.0;
}

//overload constructor
pet::pet(string name, int age, string type, double weight){
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}

string pet::getName(){
  return m_name;
}

int pet::getAge(){
  return m_age;
}

string pet::getType(){
  return m_type;
}

double pet::getWeight(){
  return m_weight;
}

void pet::setName(string name){
  m_name = name;
}

void pet::setAge(int age){
  m_age = age;
}

void pet::setType(string type){
  m_type = type;
}

void pet::setWeight(double weight){
  m_weight = weight;
}
