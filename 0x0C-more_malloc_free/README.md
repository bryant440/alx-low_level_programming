int *sieve = (int *) malloc(sizeof(int) * length);
has two problems. The cast and that you're using the type instead of variable as argument for sizeof. Instead, do like this:

int *sieve = malloc(sizeof *sieve * length);
Long version
No; you don't cast the result, since:

It is unnecessary, as void * is automatically and safely promoted to any other pointer type in this case.
It adds clutter to the code, casts are not very easy to read (especially if the pointer type is long).
It makes you repeat yourself, which is generally bad.
It can hide an error if you forgot to include <stdlib.h>. This can cause crashes (or, worse, not cause a crash until way later in some totally different part of the code). Consider what happens if pointers and integers are differently sized; then you're hiding a warning by casting and might lose bits of your returned address. Note: as of C99 implicit functions are gone from C, and this point is no longer relevant since there's no automatic assumption that undeclared functions return int.
As a clarification, note that I said "you don't cast", not "you don't need to cast". In my opinion, it's a failure to include the cast, even if you got it right. There are simply no benefits to doing it, but a bunch of potential risks, and including the cast indicates that you don't know about the risks.

Also note, as commentators point out, that the above talks about straight C, not C++. I very firmly believe in C and C++ as separate languages.

To add further, your code needlessly repeats the type information (int) which can cause errors. It's better to de-reference the pointer being used to store the return value, to "lock" the two together:

int *sieve = malloc(length * sizeof *sieve);
This also moves the length to the front for increased visibility, and drops the redundant parentheses with sizeof; they are only needed when the argument is a type name. Many people seem to not know (or ignore) this, which makes their code more verbose. Remember: sizeof is not a function! :)

While moving length to the front may increase visibility in some rare cases, one should also pay attention that in the general case, it should be better to write the expression as:

int *sieve = malloc(sizeof *sieve * length);
Since keeping the sizeof first, in this case, ensures multiplication is done with at least size_t math.

Compare: malloc(sizeof *sieve * length * width) vs. malloc(length * width * sizeof *sieve) the second may overflow the length * width when width and length are smaller types than size_t.
