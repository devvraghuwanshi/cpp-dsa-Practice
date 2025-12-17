// This is a standard C++ boilerplate for a simple program.
// The #include directive tells the preprocessor to include the contents of the specified header file.
// <iostream> is a standard library header that provides input/output stream objects like cin and cout.
#include <iostream>

// The 'using namespace std;' directive allows us to use names from the std namespace without prefixing them.
// This is common in simple programs but can lead to name conflicts in larger projects.
using namespace std;

// The main function is the entry point of every C++ program.
// It must return an int (integer) value, typically 0 for success.
// The parentheses () indicate it's a function with no parameters.
int main()
{
    // cout is an output stream object used to display text to the console.
    // The << operator is the stream insertion operator, used to send data to the output stream.
    // "Hello World!" is a string literal, enclosed in double quotes.
    // endl is a manipulator that inserts a newline and flushes the output buffer.
    cout << "Hello World!" << endl;

    // return 0; indicates successful program termination.
    // The semicolon ; terminates the statement.
    return 0;
}