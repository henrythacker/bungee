/*Result: 5*/

/*
*	Sample --C test calling void fn Programme
*	Henry Thacker
*/

int a = 1;

void fn() {
	a = 5;
}

int main() {
	fn();
	return a;
}