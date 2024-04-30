
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  if(s1 < s2 && s1 < s3){
    cout << s1;
  }
  else if(s2 < s1 && s2 <s3){
    cout << s2;
  }
  else if(s3 < s2 && s3 < s1){
    cout << s3;
  }
  else {
    cout << s1;
  }
}

void exercise_2(double A, double B, double C) {
  double D = (B * B) - (4 * A * C);
  if (A == 0 && B == 0){
  }
  else if ( A == 0){
    cout << -C/B << endl;
  }
  else if(B == 0){
    cout << sqrt(-C/A) << endl;
  }
  else if (D < 0){
  }
  else if(D >= 0){
    double sqrt_D = sqrt(D);
    double x1 = (-B + sqrt_D) / (2 * A);
    double x2 = (-B - sqrt_D) / (2 * A);
    
    if(x1 == x2){
      cout << x1 << endl;
    }
    else{
      cout << x1 << " " << x2 << endl;
    }
  }
}
void exercise_3(int a, int b) {
  if( 0 <= a <= 1000000) && 0 <= b <= 1000000{
    if ( b == 0){
      cout << "impossible" << endl;
    }
    else{
      int result = a / b;
      cout << result << endl;
    }
  }
}


void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  int res = character;
  if(res >= 97 && res < 123){
    cout << "lower-case alphabet" << endl;
  }
  else if(res >= 65 && res < 91){
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
  if(r >= 0){
    double volumen = 4 * 3.14 *(r * r);
    cout << volumen << endl;
  }else if (r < 0){
    cout << "error: radius cannot be negative" << endl;
  }
}

void exercise_8(long int seconds) {
int h;
int m;
if(seconds < 0){
    cout << "Error: Input seconds cannot be negative." << endl;
}
else {
h = seconds/3600;
seconds = seconds%3600;
m = seconds/60;
seconds = seconds%60;
  if(h < 10 && m < 10 && seconds < 10){
    cout << "0" << h << ":" << "0" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m >= 10 && seconds >= 10){
    cout << "0" << h << ":" << m << ":" << seconds << endl; 
}
else if(h < 10 && m >= 10 && seconds < 10){
    cout << "0" << h << ":" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m < 10 && seconds >= 10){
    cout << "0" << h << ":" << "0" << m << ":" << seconds << endl;
}
else if(h >= 10 && m < 10 && seconds < 10){
    cout << h << ":" << "0" << m << ":" << "0" << seconds << endl; 
}
else if(h >= 10 && m >= 10 && seconds < 10){
    cout << h << ":" << m << ":" << "0" << seconds << endl;
}
else{
  cout << h << ":" << m << ":" << seconds << endl;
} 
}

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
                 string color4, int numb4){
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
if(age >= 18 && years_of_experience >= 0 && years_of_experience < 3){
  return "proyect coordinator";
}
else if(age >= 18 && years_of_experience >= 3 && years_of_experience < 5){
  return "proyect manager";
}
else if(age >= 18 && years_of_experience >= 5){
  return "senior proyect manager";
}
else{
  return "not eligible";
}
 return "";
}

string exercise_14(int number_of_docs) {
  if(number_of_docs <= 0){
    return "No se encontraron documentos";
  }
  else if (number_of_docs == 1) {
    return "Se encontro un documento";
  }
  else if (number_of_docs > 1){
    return to_string (number_of_docs) + " documentos encontrados";
  }
  return "";
}



void exercise_15(int a, int b, int c) {
  cout << "los valores son: a = " << a << " b = " << b << "y c = " << c << endl;
  cout << "permutamos: a => b, b => c, c => a" << endl;
  cout << "los valores despues de la permutacion son: a = " << c << "b = " << a << "c = " << endl;

}

void exercise_16(int debut, int fin) {}