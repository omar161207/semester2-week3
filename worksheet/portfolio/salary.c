
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:omar mohamed
 * ID:201994442
 */

 int main( void ) {

    // define and initialise variables for the problem data 
      double salary = 36250;
      double NI_rate = 0.08;
      double tax_rate = 0.15;
      double NI_contribution = 0.0;
      double tax_contribution = 0.0;
      double taxable_income = 0.0;
      double take_home_salary = 0.0;
    // calculate the deductions and final take-home salary
      NI_contribution = salary * NI_rate;
      taxable_income = salary - NI_contribution;

      if (taxable_income <= 12500){
        take_home_salary = taxable_income;
      }
      else{
        tax_contribution = (taxable_income - 12500) * tax_rate;
        take_home_salary = taxable_income - tax_contribution;
      }
    
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }