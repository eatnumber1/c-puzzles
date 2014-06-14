#include <assert.h>
#include <string.h>

struct foo {
	char a;
	int b;
};

int main() {
	struct foo a, b;

	a.a = 'a';
	a.b = 1;

	b.a = 'a';
	b.b = 1;

	// This (probably) fails. Why?
	assert(memcmp(&a, &b, sizeof(struct foo)) == 0);
}
