/*Result: 83*/

/*
*	Sample --C Test scope traversal
*	Henry Thacker
*/

int main() {
	int a = 5;
	int b = 9;
	int my_func() {
		int c = 20;		
		int test() {
			int d = 11;
			int test2() {  
				d = 18;
				return c + d + b + a + 13;
			}
			return test2() + d;
		}
		return test();
	}
	return my_func();
}