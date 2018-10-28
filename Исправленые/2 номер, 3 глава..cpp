#include <iostream>
using namespace std;

  int main()
{
  int ft;
  double inch;
  double pound;
  const int coef_ft_to_inch = 12;
  const double coef_pound_to_kg = 2.2;
  const double coef_m_to_inch = 39.37; 
  cout << "Enter your height in feet and remainder in inches" << endl;
  do
{
  cout << "Growth part in ft_";
  cin >> ft;
} 
  while (ft < 0);
  do
{
  cout << "Growth part in inches_";
  cin >> inch;
} 
  while (inch < 0);
  do
{
  cout << "Enter weight in pounds_";
  cin >> pound;
}
  while (pound < 0);
  double ft_to_inch = ft * coef_ft_to_inch + inch;
  double pound_to_kg = pound / coef_pound_to_kg;
  double inch_to_m = ft_to_inch / coef_m_to_inch;
  double BMI = pound_to_kg / (inch_to_m * inch_to_m);
  cout << "Body mass index = " << BMI << endl;
  system("pause");
  return 0;
}
