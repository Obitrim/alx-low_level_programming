#include "main.h"

int _sqrt_recursion(int n) {
	int root;    
    if (n == 0 || n == 1) {
        return n;
    }
   root = _sqrt_recursion(n - 1);
    if (root * root > n) {
        return root - 1;
    } else {
        return root;
    }
}
