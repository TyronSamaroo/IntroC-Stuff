#include <iostream>
/* NOTE: #include really just takes a file (in this case
 * iostream) and replaces that line with the file's contents.
 * We need it for a thing called "cout" that lets us print
 * messages to standard output. (See below.)
 * NOTE: anything between the slash-* ... *-slash will be ignored
 * (it will have no effect on the program).  They're called "comments".
 * */
using std::cout;
/* NOTE: cout has a first name (cout) and a family/last name
 * (std).  To avoid always having to call cout by its full
 * name (std::cout), we use the using statement. */

/* this (the main function) is where your program begins.  */
int main() {
	/* we'll start with the classic first program in any
	 * language: "hello world" */
	cout << "hello class!\n";
	/* NOTE: the "int" before main indicates that main
	 * should ultimately return ("compute") an integer result.
	 * We'll always give 0 as the result: */
	return 0;
	/* NOTE: this return value is how our program communicates
	 * back to the shell that started it.  In this context, 0 means
	 * the program "worked" (didn't encounter any errors). */
}

/* To run this on our computer, we have to first translate it into those tiny
 * instructions the cpu understands.  Do this with the help of g++:
 * $ g++ hello.cpp
 * Then run it with
 * $ ./a.out
 * NOTE: you can see some of the commands we ran during lecture in the
 * "bash-history" file.
 * */

/* TODO: follow the tutorial on "building on the command line" from our
 * homepage.  Then just spend some time experimenting and see what you
 * can learn.  */

/* TODO: take a look at what's really involved in running this
 * program (the tiny instructions I mentioned).  Try this:
 * $ gdb a.out
 * (gdb) break main
 * (gdb) tui enable
 * (gdb) layout asm
 * (gdb) run
 * (gdb) si
 * <then just keep hitting enter until you're bored...>
 * */

/* NOTE: a few takeaways from our first lecture:
 * 1. There is a huge gap in abstraction levels that must be bridged.
 * 2. The compiler is your friend, but you still need to give it a
 *    seemingly unnatural amount of detail...
 * */
