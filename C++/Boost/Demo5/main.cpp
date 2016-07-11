#include <iostream>
#include<boost/date_time/posix_time/posix_time.hpp>
#include<boost/date_time.hpp>
#define BOOST_DATE_TIME_HAS_MILLISECONDS
using namespace std;
using namespace boost::posix_time;
using namespace boost::gregorian;


int main()
{
//    time_duration td(2,2,2,2);
//    cout << td.total_microseconds() << endl;
//    cout << to_iso_string(td) << endl;
//    cout << to_tm(td).tm_hour << endl;
    ptime pt(date(2016,7,2),hours(4));
    cout<<pt;
    return 0;
}

