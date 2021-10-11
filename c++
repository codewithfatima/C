
                                     C++ BASCIS Introduction
C++ is standardized by the International Organization for Standardization (ISO), with the latest standard version ratified and published by ISO in December 2020 as ISO/IEC 14882:2020 (informally known as C++20).[12] The C++ programming language was initially standardized in 1998 as ISO/IEC 14882:1998, which was then amended by the C++03, C++11, C++14, and C++17 standards. The current C++20 standard supersedes these with new features and an enlarged standard library. Before the initial standardization in 1998, C++ was developed by Danish computer scientist Bjarne Stroustrup at Bell Labs since 1979 as an extension of the C language; he wanted an efficient and flexible language similar to C that also provided high-level features for program organization.[13] Since 2012, C++ has been on a three-year release schedule[14] with C++23 as the next planned standard.[15]
The C++ language has two main components: a direct mapping of hardware features provided primarily by the C subset, and zero-overhead abstractions based on those mappings. Stroustrup describes C++.
Introduction to C++ / History of C++ Programming
1979 or 1980
Bjarne Stroustrup
Invented in AT & T BELL’s LAB
C With Classes
1983 it was given name C++.

Properties of C++
1.	C++ is user friendly Language
2.	C++ is popular language among professional Programmers.
3.	C++ is case sensitive language. (int add, ADD, Add, aDD)
4.	C++ is flexiable language. 
5.	C++ is portable language.
6.	C++ is high level language.
7.	C++ is structured language.
8.	C++ is OOP (Object Oriented Programming)

Header File In C++:
#include<iostream>

Structure of main function in C/C++

STRUCTURE 01
int main(int argc, char argv[] )
{
	return 0;
}

STRUCTURE 02
int main()
{
	return 0;
}

STRUCTURE 03
main()
{
	return 0;
}

STRUCTURE 04
void main()
{

}

STRUCTURE 05
void main(void)
{

}

EXPLANATION:
main()
1.	main is function name and reserve word.
2.	it carries the main program of C/C++.
3.	Indication of main is main().
4.	Default return type of main is integer.
5.	Main is called by Operating System (OS) and it always returns value to OS.
6.	Main is parent shell of every C/C++ program.
7.	Main is also called driver program of C/C++ i.e. program cannot run without main function.
8.	Any function is called by main either directly or indirectly.

STRUCTURE 02
int main()
{
	return 0;
}	STRUCTURE 03
main()
{
	return 0;
}	
BOTH are 100% same without any error.

 
{is called open compound statement. It tells compiler that C/C++ codes starts from here.
} is called close compound statement. It tells compiler that C/C++ codes ends here.

return
1.	Return is reserve word.
2.	This command is used to return some value form function.
3.	return 0 has a special meaning for OS. 0 informs that program has terminated successfully with normal process.
4.	 Other values tell that program is terminated due to some error.

void
1.	void is a reserve word and function name.
2.	it tell do not return anything.
3.	void function is just like a procedure.

int main()
{
	return 0;
} 


char main()
{
	return ‘a’;
} 

int main(void)
{
	return 0;
} 


STRUCTURE 01
int main(int argc, char argv[] )
{
	return 0;
}
Argc  and Argv are called Command Line Arguments.
argc stands for ARGument Count.
argv stands for ARGument Value.

Cin Statement In C++:-
Cin  - means as input stream in C++.It Gets data From user.
The  cin object in C++ is an object of class iostream. It is used to accept the input from the standard input device i.e. keyboard. It is associated with the standard C input stream stdin. The extraction operator(>>) is used along with the object cin for reading inputs.
