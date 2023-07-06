// Enum_Months.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

enum class Months : int {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int convert_enum_to_int(Months my_month)
{
    int it;
    it = static_cast<int>(my_month);

    return it;
}

const char* convert_int_to_enum(int it)
{
    Months my_month = static_cast<Months>(it);
    switch (my_month)
    {
    case Months::January:
        return "January";
    case Months::February:
        return "February";
    case Months::March:
        return "March";
    case Months::April:
        return "April";
    case Months::May:
        return "May";
    case Months::June:
        return "June";
    case Months::July:
        return "July";
    case Months::August:
        return "August";
    case Months::September:
        return "September";
    case Months::October:
        return "October";
    case Months::November:
        return "November";
    case Months::December:
        return "December";
    }

    return "Unknown";
}

int main() {

    Months my_month;
    int month_number = convert_enum_to_int(Months::June);
    std::cout << month_number << endl;

    const char* month_name = convert_int_to_enum(7);
    std::cout << month_name << endl;

    return 0;
}