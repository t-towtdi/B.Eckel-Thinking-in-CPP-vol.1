//: C09:Cpptime.h
// Простой класс для работы со временем
#ifndef CPPTIME_H
#define CPPTIME_H
#include <ctime>
#include <cstring>
class Time {
	std::time_t t;
	std::tm local;
	char asciiRep[26];
	unsigned char lflag, aflag;
	void updateLocal() {
		if (!lflag) {
		local = *std::localtime(&t);
		lflag++;
		}
	}
	void updateAscii() {
		if (!aflag) {
			updateLocal();
			std::strcpy(asciiRep, std::asctime(&local));
			aflag++;
		}
	}
public:
	Time() { mark(); }
	void mark() {
		lflag = aflag = 0;
		std::time(&t);
	}
	const char* ascii() {
		updateAscii();
		return asciiRep;
	}
	// Разность в секундах
	int delta(Time* dt) const {
		return int(std::difftime(t, dt->t));
	}
	int daylightSavings() {
		updateLocal();
		return local.tm_isdst;
	}
	int dayOfYear() { // День года, начиная с 1 января
		updateLocal();
		return local.tm_yday;
	}
	int dayOfWeek() { // День недели, начиная с воскресенья
		updateLocal();
		return local.tm_wday;
	}
	int since1900() { // Количество лет с 1900 года
		updateLocal();
		return local.tm_wday;
	}
	int month() { // Месяц, начиная с января
		updateLocal();
		return local.tm_mon;
	}
	int dayOfMonth() {
		updateLocal();
		return local.tm_mday;
	}
	int hour() { // Час от полуночи, по 24-часовой шкале
		updateLocal();
		return local.tm_min;
	}
	int second() {
		updateLocal();
		return local.tm_sec;
	}
};
#endif // CPPTIME_H ///:~
