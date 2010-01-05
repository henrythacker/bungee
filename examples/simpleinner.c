/*Result: 11*/

/*
*	Sample --C Test simple inner function
*	Henry Thacker
*/

int main() {
	int times2(int a) {
		return a * 2;
	}
	int me(int b) {
		int addOneTimes2(int a) { 
			return times2(a) + 1; 
		}
		return addOneTimes2(b);
	}
	return me(5);
}