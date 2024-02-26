#include <iostream>
#include <vector>
#include <string>
#include "func.h"

void inputDate(Date& date)
{
    std::string date_str;
    std::vector<int> date_int;

    do
    {
        std::cout << "Enter the date: ";
        std::getline(std::cin, date_str);
        date_int.clear();
    } while (!checkDate(date_str, date_int));
    
    assignDate(date, date_int);
}

bool checkDate(const std::string& date_str, std::vector<int>& date_int)
{
    std::string date_str_unit = "";

    for (const char sym : date_str)
    {
        if ('0' <= sym && sym <= '9')
        {
            date_str_unit += sym;
        }

        else if (sym == '.')
        {
            date_int.push_back(stoi(date_str_unit));
            date_str_unit = "";
        }

        else
        {
            return false;
        }
    }

    if (date_int.size() != 2 || date_str_unit.empty())
    {
        return false;
    }

    date_int.push_back(std::stoi(date_str_unit));

    switch (date_int[1])
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (0 < date_int[0] && date_int[0] <= 31)
            {
                return true;
            }

            return false;

            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if (0 < date_int[0] && date_int[0] <= 30)
            {
                return true;
            }

            return false;

            break;

        case 2:
            if (0 < date_int[0] && date_int[0] <= 28 || 
            date_int[0] == 29 && date_int[2] % 4 == 0)
            {
                return true;
            }

            return false;
    
        default:
            return false;
    }

    return false;
}

void assignDate(Date& date, const std::vector<int>& date_int)
{
    date.m_day = date_int[0];
    date.m_week_day = static_cast<WeekDay>(getWeekDay(date_int));
    date.m_month = static_cast<Month>(date_int[1] - 1);
    date.m_year = date_int[2];
}

int getWeekDay(std::vector<int> date_int)
{
    if (date_int[1] < 3) {
        date_int[1] += 12;
        date_int[2] -= 1;
    }

    int c = date_int[2] / 100;
    date_int[2] = date_int[2] % 100;

    return (c / 4 - 2 * c + date_int[2] + date_int[2] / 4 + 13 * (date_int[1] + 1) / 5 + date_int[0] - 1) % 7;
}

std::string printWeekDay(WeekDay week_day)
{
    switch (week_day)
    {
    case WeekDay::Sunday:
        return "Sunday";
        break;
    
    case WeekDay::Monday:
        return "Monday";
        break;

    case WeekDay::Tuesday:
        return "Tuesday";
        break;

    case WeekDay::Wednesday:
        return "Wednesday";
        break;

    case WeekDay::Thursday:
        return "Thursday";
        break;
    
    case WeekDay::Friday:
        return "Friday";
        break;

    case WeekDay::Saturday:
        return  "Saturday";
        break;    
    }

    return "\0";
}

std::string printMonth(Month month_day)
{
    switch (month_day)
    {
    case Month::January:
        return  "January";
        break;
    
    case Month::February:
        return "February";
        break;
    
    case Month::March:
        return "March";
        break;
        
    case Month::April:
        return "April";
        break;
        
    case Month::May:
        return "May";
        break;
        
    case Month::June:
        return "June";
        break;
        
    case Month::July:
        return  "July";
        break;

    case Month::August:
        return "August";
        break;

    case Month::September:
        return "September";
        break;

    case Month::October:
        return "October";
        break;

    case Month::November:
        return  "November";
        break;

    case Month::December:
        return "December";
        break;
    }

    return "\0";
}

void printDate(const Date& date)
{
    std::cout << date.m_day << ' ';
    std::cout << printMonth(date.m_month) << ' ';
    std::cout << date.m_year << ' ';
    std::cout << printWeekDay(date.m_week_day) << std::endl;
}