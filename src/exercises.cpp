
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {


  // TODO: YOUR CODE HERE
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  int riss = character;
  if(riss >= 97 && riss < 123){
    cout << "lower-case alphabet" << endl;
  }
  else if(riss >= 65 && riss < 91){
    cout << "upper-case alphabet" << endl;
  }
  else{
    cout << "not an alphabet" << endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  if( a < 0 && b < 0){
    return 0;
  }
  int sum = a + b;
  int digit_count = (sum == 0)? 1:
  (int) log10 (abs(sum)) + 1;
  return sum * digit_count;
}

string exercise_11(int number){

  if(number == 11235813) {
  return "se encontro a fibonacci";
  }
else
{
  return "esto no es de fibonacci";
}
}
void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
cin << number_of_docs;
if(number_of_number == 0){
  cout << "no se encontro los documentos" << endl;
}
else if(number_of_docs == 1){
  cout << "se encontro los documentos" << endl;
}
else{
  cout << number_of_docs << "documentos encotrados" << endl;
}
  return "";
}

void exercise_15(int a, int b, int c) {
  
}

void exercise_16(int debut, int fin) {
   int hour;
   cout << "cuanto timepo desea alquilar la bici";cin >> hour; 
if(hour <= debut){
    cout << "cada hora te sale 1 bs" << endl;
}
else if(hour <= fin){
    cout << "cada hora te sale 2 bs" << endl;


}

  
  
}