// Example output from this code:
// Tue Jan 13 12:09:53 2015 (from ctime)
// 20150113_12_09_53 (from strftime)
// 20150113_12_09_53 (from put_time)

#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <sstream>

using namespace std;

void main()
{
	// Get current time
	std::chrono::time_point<std::chrono::system_clock> time_now = std::chrono::system_clock::now();

	// Print time using ctime
	time_t time_now_t = std::chrono::system_clock::to_time_t(time_now);
	//cout << ctime(&time_now_t) << endl;

	// Format time and print using strftime
	std::tm now_tm = *std::localtime(&time_now_t);
	char buf[512];
	std::strftime(buf, 512, "%A %B %d, %Y", &now_tm);
	std::cout << buf << std::endl;

	// Format time and print using put_time
	//std::stringstream ss;
	//ss << std::put_time(&now_tm, "%Y%m%d_%H_%M_%S");
	//std::cout << ss.str() << std::endl;
	system("pause");
}