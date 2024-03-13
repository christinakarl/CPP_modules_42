Theory on OPP (= object oriented programming)

Encapsulation
- objects (classes) can hold primary variables and functions
- external object should not be able to change an object's attributes
but should only interact with them them through its methods (functions)
>> objects should not have access or rely on each other's inner workings

#Abstraction
- only showing essential details but hiding everything else
- work on a program incrementally / splitting a project into smaller chunks
- linked to encapsulation
- interface = methods that are shared and used by classes (outcome) BUT
implementation = how methods are coded or implemented should be hidden
>> avoid a ripple effect as well as any entanglement of the program with itself

#Inheritance
- possibility to include a class in a class (in a class in a class .....)
= superclass < subclass
- access modifiers (hierarchy):
	- public: can be accessed from anywhere and anyone
	- private: can only be accessed within the same class that the member
	is defined (p.e. a subclass of a superclass), possibility to create
	multiple private members with same name in different locations which
	will not conflict
	- protected: can be accessed from within class where defined & any subclass

#(Dynamic) Polymorphism
- dynamic implementation of a method signature (function build up) depending
on where in the class hierarchy it is called (p.e. subclass multiplies with 3
while superclass multiplies with 2)
>> allows dynamic method form definition as programm is running and avoid ifs & else ifs

#(Static) Polymorphism
- happens at compilation
- method overloading: multiple methods with same name (but different args)
defined in same class, they differ in
	- nr of parameters
	- type of parameters
	- order of parameters
- separate but similar effects
>> polymorphism allows methods to take on different forms within same or among different
classes


#Other notes:
- include guards: telling compiler to compile a header file only once in case it's called
multiple times >> ifndef-define-endif
-"this" can be used to instantiate a member of a class in the code of a member function (p.e.
constructor or any other member function) because C++ always sends itself as an invisible
first parameter to each member function
- "const" serves to 'block' a member function of a class (making it read only), meaning "this"
cannot be used in this member to change the current instance
- struct is public by default vs class is private by default
- Accessors (allow to have control over user input and output to user):
	- int _value is private
	- getValue (void) const is public: read _value
	- setValue (void) is public: function to change _value only if greater than 0
- static keyword in C++ = instatiate a variable at a class level (not only an instance level)
	- non member function: "static" >> "this" cannot be used but the "classname::" needs to be used
	- non member attribute (static variable): needs to be initialized outside of a function
		p.e. int	Sample::_nbVal = 0;
