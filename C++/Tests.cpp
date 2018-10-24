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
class ArrayContainer {
private:
	/* data */
	float * m_data;
	int m_size;
 public:
	ArrayContainer (float * input, int size) : m_size(size) {
		// :m_size(size) ===> m_size = size;
		m_data = new float[m_size];
		memcpy((void*)m_data, (void*)input, sizeof(m_data[0]) * size);
		// (void* is casting! (Yalla dross))
	}
  // why must we have virtual destructors
	virtual ~ArrayContainer () {
		delete [] m_data;
	};
 	// This is a copy constructor
	ArrayContainer(const ArrayContainer& other) {
			delete [] m_data;
			m_size = other.m_size;
			m_data = new float[m_size];
		  memcpy((void*)m_data, (void*)other.m_data, sizeof(m_data[0]) * size);
	}
 	// Assignment operator ftw!
	void operator= (const ArrayContainer& other) {
		if (&other == this) {
			return;
		}
		delete [] m_data;
		m_size = other.m_size;
		m_data = new float[m_size];
		memcpy((void*)m_data, (void*)other.m_data, sizeof(m_data[0]) * size);
	}

	bool operator== (const ArrayContainer& other) const {
			return (m_size == other.m_size && (0 == memcmp(m_data, other.m_data, m_size * sizeof(m_data[0])) ));
	}
 	bool operator-= (const ArrayContainer& other) {
		if (m_size != other.m_size) {
			throw something;
		}
		for (int i = 0; i < m_size; i++) {
			m_data[i] -= other.m_data[i];
	}
	}
};
 // By convention (maybe not relevant to Siemens),
// object reference
foo(ArrayContainer& data);
 int caller() {
	ArrayContainer (data) container1;
	ArrayContainer (data) container2;
	if (container2 == container1);
	//but what if container1 = container1?
 	//substruct example
	ArrayContainer (data1) containerToSubstractFrom;
	ArrayContainer (data2) containerToSubstract;
	containerToSubstractFrom -= containerToSubstract;
 int foo2() const;
}
// Name blocks with int id
// class wrapper
