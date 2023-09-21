Theory on OPP (= object oriented programming)

Encapsulation
- objects (classes) can hold primary variables and functions
- external object should not be able to change an object's attributes
but should only interact with them them through its methods (functions)
>> objects should not have access or rely on each other's inner workings

Abstraction
- only showing essential details but hiding everything else
- work on a program incrementally / splitting a project into smaller chunks
- linked to encapsulation
- interface = methods that are shared and used by classes (outcome) BUT
implementation = how methods are coded or implemented should be hidden
>> avoid a ripple effect as well as any entanglement of the program with itself

Inheritance
- possibility to include a class in a class (in a class in a class .....)
= superclass < subclass
- access modifiers (hierarchy):
	- public: can be accessed from anywhere and anyone
	- private: can only be accessed within the same class that the member
	is defined (p.e. a subclass of a superclass), possibility to create
	multiple private members with same name in different locations which
	will not conflict
	- protected: can be accessed from within class where defined & any subclass

(Dynamic) Polymorphism
- dynamic implementation of a method signature (function build up) depending
on where in the class hierarchy it is called (p.e. subclass multiplies with 3
while superclass multiplies with 2)
>> allows dynamic method form definition as programm is running and avoid ifs & else ifs

(Static) Polymorphism
- happens at compilation
- method overloading: multiple methods with same name (but different args)
defined in same class, they differ in
	- nr of parameters
	- type of parameters
	- order of parameters
- separate but similar effects
>> polymorphism allows methods to take on different forms within same or among different
classes


Other notes:
- include guards: telling compiler to compile a header file only once in case it's called
multiple times >> ifndef-define-endif
-