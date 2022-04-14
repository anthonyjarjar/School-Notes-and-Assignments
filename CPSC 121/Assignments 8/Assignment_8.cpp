/*

Design a class called Date that has integer data members to store month, day,
and year. The class should have a three-parameter default constructor that
allows the date to be set at the time a new Date object is created. If the user
creates a Date object without passing any arguments, or if any of the values
passed are invalid, the default values of 1, 1, 2001 (i.e., January 1, 2001) should
be used. The class should have member functions to print the date in the
following formats:
3/15/16 March 15, 2016 15 March 2016

Demonstrate the class by writing a program that uses it. Be sure your program
only accepts reasonable values for month and day. The month should be
between 1 and 12. The day should be between 1 and the number of days in the
selected month.

*/



#include <iostream>
#include <iomanip>
#include <string>

class Date {
    private:
        int day, month, year;
        std::string monthSpelled[12] = {"January", "February", "March", "April", "May", "June", 
            "July", "August", "September", "October", "November", "December"};


    public:
        Date(int Day, int Month, int Year) {
            checkDate(Day, Month, Year);
        }


        void checkDate(int Day, int Month, int Year) {
            if(!(Month > 12) && !(Month < 1)){
                    month = Month;
            }else{
                year = 2001;
                day = 1;
                month = 1;
            }
            
            if(!(Year > 2022) && !(Year < 0 ))
                year = Year;
            else{
                year = 2001;
                day = 1;
                month = 1;
            }
            
            switch(month){
                case 1:
                    if(!(Day > 31) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 2:
                    if((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)){
                        if(!(Day > 29) && !(Day < 1)){
                            day = Day;
                        }else{
                            year = 2001;
                            day = 1;
                            month = 1;
                        }
                    }else if((year % 400 != 0) || (year % 4 != 0) && (year % 100 == 0))
                        if(!(Day > 28) && !(Day < 1)){
                            day = Day;
                        }else{
                            year = 2001;
                            day = 1;
                            month = 1;
                        }
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 3:
                    if(!(Day > 31) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 4: 
                    if(!(Day > 30) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 5: 
                    if(!(Day > 31) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 6:
                    if(!(Day > 30) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 7:
                    if(!(Day > 31) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 8:
                    if(!(Day > 31) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 9:
                    if(!(Day > 30) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 10: 
                    if(!(Day > 31) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 11:
                    if(!(Day > 30) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                case 12:
                    if(!(Day > 31) && !(Day < 1))
                        day = Day;
                    else{
                        year = 2001;
                        day = 1;
                        month = 1;
                    }
                    break;
                default:
                    year = 2001;
                    day = 1;
                    month = 1;  
            }

        }

        void print(){
            std::cout << "Day: " << day << std::endl;
            std::cout << "Month: " << month << std::endl;
            std::cout << "Year: " << year << std::endl;
            std::cout << std::endl;

        }

        void printFormat(){
            month -= 1;
            std::cout << day << " " << monthSpelled[month] << " " << year << std::endl;
            std::cout << std::endl;

            month += 1;
            month -= 1;
            std::cout << monthSpelled[month] << " " << day << ", " << year << std::endl;
            std::cout << std::endl;

            month += 1;
            year %= 100;
            std::cout << month << "/" << day << "/" << std::setw(2) << std::setfill('0') << year << std::endl;
            std::cout << std::endl;
        }
};


int main() {
    
    int day, month, year;

    std::cout << "Please enter the digit value in the order day (ex: 1), month (ex: 11), year (ex: 2002) seperated by enters: " 
            << std::endl;

    std::cin >> day;
    std::cin >> month;
    std::cin >> year;

    Date current = Date(day, month, year);

    std::cout << std::endl;

    current.print();
    
    current.printFormat();

    return 0;
}