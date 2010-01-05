/*Result: 9*/

/*
*	Sample --C Nested IF Programme
*	Henry Thacker
*/

int main() {
	int a = 15;
	if (1) {
		if (0) {
			a = 5;
		}
		else {
			a = 12;
		}
	}
	else {
		a = 9;
	}
	if (1) {
		if (0) {
			a = a - 1;
		}
		else {
			a = a - 3;
		}
	}
	else {
		a = a - 3;
	}
	return a;
}