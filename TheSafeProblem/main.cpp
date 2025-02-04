// Code written for CSC8501 by Mark Kostadinov, Student Number 150368616
#include <time.h>
#include "IOManager.h"

int main()
{
	// Initialize the pseudo-random generator to a distinctive runtime value
	srand((unsigned int)time(0));

	IOManager io;

	// Pretty 1-dimensional but does the job
	io.ChangeNumberOfLocksPerSafe();
	io.GenerateKeyFileUI();
	io.GenerateMultiSafeFileUI();
	io.GenerateLockedSafeFileUI();
	io.UnlockSafeFileUI();

	int exit;
	PrintToConsole("\nPlease enter a key to exit...", 1);
	std::cin >> exit;

	return 0;
}