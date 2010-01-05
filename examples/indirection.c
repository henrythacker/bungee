/*Result: 2*/

/*
*	Sample --C Function indirection test Programme
*	Henry Thacker
*/

int add1(int i) {
	return i + 1;
}

function test() {
	return add1;
}

int main() {
	function f = test();
	return f(1);
}