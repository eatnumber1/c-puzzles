#include <assert.h>
#include <stdbool.h>

int main() {
	int si = -1;
	unsigned int ui = 1;
	// Why does this assertion fail?
	assert(si < ui == true);
}
