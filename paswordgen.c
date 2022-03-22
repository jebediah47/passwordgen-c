/*
 * File: paswordgen.c
 * License: GNU Affero General Public License v3.0
 * Author: jebediah47
 * For more licensing information visit: https://www.gnu.org/licenses/agpl-3.0.en.html
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(int argc, char *argv[]) {
	int n;
	n = atoi(argv[1]);

	srand(time(NULL));
	for(int i = 0; i < n; i++)
		printf("%c", alphanum[rand() % sizeof(alphanum)-1]);

	return 0;
}
