// Kaden Hurlimann
// assignment one paystub
// started 9/7
// completed 9/14
//
// Problem statement
//
// Create a person’s weekly pay stub based on hourly pay, hours, and mileage reimbursement.
// Determine their gross wage and net pay if they pay for health insurance and 17% in taxes (after health insurance).  
// Then it should add the mileage reimbursement to their wage at a rate of $.35 per mile. 
// Your program should accept the following information: 
// employee name (first and last as a single line), hours worked, hourly pay, 
// insurance cost, starting odometer reading, and ending odometer reading.
// It should output a pay stub 
// http://www.pay-stubs.com/sample-pay-stub/ Links to an external site. 
// with the employees name, hours, hourly pay, gross pay, net pay (after taxes and health insurance),
// reimbursement, and total pay (net pay and reimbursement).




#include <iostream>
#include <string>
#include <cstdlib>                                                 // initilize
#include <ctime>
#include <iomanip>
using namespace std ;

//struct Below
    struct idData {
        string company;                                       // only used struct
        string street;                                        // does nothing important just purely for the requirement
        int employeeID;                                       // but is still used
        int checkNumber;
        int addressNumber;
        
    };
int main()
    {
       idData employeeOne;                                   // initiate only used struct
        employeeOne.company = "Hank's tire and food";
        string firstName = "bill";                                 // first and last as two sepperate variables
        string lastName = "thom";                                  // so we can read it as two words "bill thom"
        employeeOne.street = "East Avenue";
        employeeOne.addressNumber = 6309;
        int hoursWorked  = 0;
        double insuranceCost = 0;
        int odometerStart = 0;                                     // initializing needed variables
        int odometerEnd = 0;
        int socialSecurity1 = 142;
        int socialSecurity2 = 67;
        int socialSecurity3 = 2645;
        employeeOne.employeeID = 93641;
        employeeOne.checkNumber = 64837;
        const double mileageReimbursementRate = 0.35;              // marked as constant because it should never change
        int totalMiles = 0;
        double hourlyPay = 0.0 ;
        double mileageReimbursement = 0.0;
        double ytdGross = 0.0;
        double ytdDeductions = 0.0;
        double ytdNetPay = 0.0;                                    // all variables initialized as 0 incase some how the user manages to skip an input
        double currentTotal = 0.0;                                 // there are a lot of unused variables to leave options open and easily add items if I needed to
        double currentDeductions = 0.0;
        double netPay = 0.0;
        double finalTotal = 0.0;
        double medTax = 0.0;
        double fedTax = 0.0;
        double afterMed = 0.0;
        const double fedTaxDeduction = 0.17;                       // also unchanging and marked as constant
        double totalTax = 0.0;
        double afterTax = 0.0;
        
        
        cout << endl << "  Welcome to paystub calc." << endl;
        cout << "Please enter first and last name in this format:" << endl << endl;                                  // informing user
        cout << "First Last" << endl;
        cin >> firstName >> lastName;
        
        cout << endl << endl <<"Please enter the number of hours you've worked." << endl;                      // prompting user for info
        cin >> hoursWorked;
        
        cout << endl << endl << "Please enter your hourly wage as a number in dollars." << endl;               // prompting user for info
        cout << "for example 14.25 is 14 dollars and 25 cents." << endl;
        cin >> hourlyPay;
        
        cout << endl << endl << "Please enter your insurance cost percentage in decimal format. example: 0.12 = 12%" << endl;
        cin >> insuranceCost;
        
        cout << endl << endl << "Please enter starting odometer reading and ending odometer reading." << endl; // promting user for info
        cout << "example 95300 97561" << endl;
        cin >> odometerStart >> odometerEnd;
        
        
        
        
        
        //Math goes below
        
        mileageReimbursement = mileageReimbursementRate * (odometerEnd - odometerStart);
        totalMiles = odometerEnd - odometerStart;
        currentTotal = hourlyPay*hoursWorked;
        finalTotal = currentTotal+mileageReimbursement;
        medTax = insuranceCost*finalTotal;                                                  // math calculations tax mileage gross and net
        afterMed = finalTotal-medTax;                                                       // after input and before output
        fedTax = (afterMed*fedTaxDeduction);
        currentDeductions = fedTax+medTax;
        netPay = finalTotal-currentDeductions;
        
        
        
        
        
        // cout << "First and Last name: " << firstName << " " << lastName << endl << "Hours Worked: " << hoursWorked << endl << "Hourly Pay: " << hourlyPay << endl;
        // cout << "Insurance Cost: " << insuranceCost << endl << "Odometer Start: " << odometerStart << endl << "Odometer End: " << odometerEnd << endl << "Milage Reambersment: " << mileageReimbursement << endl;      // a display of all variables for self checking
        
        
        
        
        
        
        cout << endl << endl << endl << employeeOne.company << ", " << employeeOne.street << ", " << employeeOne.addressNumber << endl << endl;
        
        cout << "     Employee Name      Employee ID     Check No.      Pay Period         Pay Date" << endl;
        cout << "     " << firstName << " " << lastName << "          " << employeeOne.employeeID << "          " << employeeOne.checkNumber << "     9/21/17-10/15/17       9/17/17" << endl;
        cout << "      ________________________________________________________________________________________" << endl;
        cout << "     | Income    Rate     Hours     Current Total   |     Deductions     Current Total       |" << endl;
        cout << "     |                                              |                                        |" << endl;
        cout << "     | WAGES     "<<hourlyPay<<"    "<<hoursWorked<<"         $" << currentTotal << "          |     insurance      $" << medTax << "            |" << endl;
        cout << "     |                                              |     FED TAX        $" << fedTax << "             |" << endl;
        cout << "     | reimbursement      Miles                     |                                        |" << endl;                                                                        // final paystub display with user info plugged in
        cout << "     | -------------------------------------------- |                                        |" << endl;
        cout << "     | Milage            " << totalMiles << "         $" << mileageReimbursement << "           |                                        |" << endl;
        cout << "     |                                              |                                        |" << endl;
        cout << "     |                                              |                                        |" << endl;
        cout << "     |                                              |                                        |" << endl;
        cout << "     |______________________________________________|________________________________________|" << endl;
        cout << "     |     Current Total                   Current Deductions              Net Pay           |" << endl;
        cout << "     |    $" << finalTotal << "                                " << currentDeductions << "                   " << netPay << "           |" << endl;
        cout << "      _______________________________________________________________________________________ " << endl;
        
        
        
        
    }