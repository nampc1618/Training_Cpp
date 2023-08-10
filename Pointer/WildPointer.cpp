// A pointer that has not been initialized to anything (not even NULL) is known as wild pointer.
// The pointer may be initialized to a non-NULL garbage value that may not be a valid address.

int main()
{
    int* p; // this is wild pointer
    int x = 10;

    p = &x;
    // p is not a wild pointer now.

    return 0;
}