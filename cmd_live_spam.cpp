#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;

void timer(int seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

void loop(int x) {
	cout << "url: "; cin >>  x;
	cout << system("www.google.com");
  timer(1);
}

int main() {
	loop(1);
	return 0;
}
