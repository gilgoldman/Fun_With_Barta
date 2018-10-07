class ConstVec
{
public:
	ConstVec();
	~ConstVec();
	
};
/*
classes and inheritance
References
Copy constructor
assignment operator
destructor

Unique_ptr
Shared_ptr - best friend (copying one file from stdlib)
	- Tracks where it is being sent, and knows that it's being used
	- will not destroy data as long as something is being used
*/


int foo2() const;