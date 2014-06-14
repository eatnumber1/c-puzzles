#include <assert.h>

int main() {
	unsigned char a = 0xff, b = 1, c = 0;
	// Why does this assertion fail?
	assert(a + b == c);
}
