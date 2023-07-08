#include <iostream>
#include <string>

int main() {
    std::string matricNumber;
    std::cout << "Enter your matric number: ";
    std::cin >> matricNumber;
    
    // Extract the year of admission from the matric number
    std::string admissionYear = matricNumber.substr(0, 2);
    
    // Determine the user's unit based on the admission year
    std::string userUnit;
    
    if (admissionYear == "18") {
        userUnit = "SLT";
    } else if (admissionYear == "19") {
        userUnit = "ECT";
    } else if (admissionYear == "20") {
        userUnit = "GEOPHYSICS";
    } else {
        userUnit = "Unknown";
    }
    
    // Output the user's unit
    std::cout << "Your unit is: " << userUnit << std::endl;
    
    return 0;
}
//Okpara Olisaemeka Franklin 19/097344180
//Ezechi Prince 19/097344066
//Nzeakor Isidore Chijindu 20/097343005
//Effiong Endurance Nyong 19/097344192 