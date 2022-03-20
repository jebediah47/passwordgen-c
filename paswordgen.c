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
int string_length = sizeof(alphanum)-1;
int main() {
	printf("Password length: ");
	int n;
	scanf("%d", &n);

	printf("Pass: ");
	srand(time(NULL));
	for(int i = 0; i < n; i++)
		printf("%c", alphanum[rand() % string_length]);

	return 0;
}
