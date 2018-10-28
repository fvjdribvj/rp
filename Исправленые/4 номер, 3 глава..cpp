#include <iostream>

using namespace std;

  int main()
{
  long all_seconds;
  long const coef_sec_in_day = 86400;
  long const coef_sec_in_hour = 3600;
  long const coef_sec_in_min = 60;
  do
{
  cout << "Enter the number of seconds: ";
  cin >> all_seconds;
} 
  while(all_seconds < 0);
  double days = all_seconds / coef_sec_in_day;
  int balance_of_days = all_seconds - (days * coef_sec_in_day);
  double hours = balance_of_days / coef_sec_in_hour;
  int balance_of_hours = balance_of_days - (hours * coef_sec_in_hour);
  double minutes = balance_of_hours / coef_sec_in_min;
  int seconds = balance_of_hours - (minutes * coef_sec_in_min);
  cout << all_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
  system("pause");
  return 0;
}