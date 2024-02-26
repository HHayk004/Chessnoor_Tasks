#include <vector>

enum class WeekDay {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

enum class Month {
    January, February, March, April, May, June,
    July, August, September, October, November, December
};

struct Date
{
    int m_day;
    WeekDay m_week_day;
    Month m_month;
    int m_year;
};

void inputDate(Date& date);

bool checkDate(const std::string& date_str, std::vector<int>& date_int);

void assignDate(Date& date, const std::vector<int>& date_int);

int getWeekDay(std::vector<int> date_int);

std::string printWeekDay(WeekDay week_day);

std::string printMonth(Month month_day);

void printDate(const Date& date);