#include <assert.h>
#include <string.h>

struct foo {
	char a;
	int b;
};

int main() {
	struct foo a, b, c;

	b = a;
	c = a;

	// Is this guaranteed to succeed?
	assert(memcmp(&b, &c, sizeof(struct foo)) == 0);
}
