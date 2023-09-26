//public inheritance makes PUBLIC members of the base class PUBLIC in derived class, and PROTECTED
// members of base class will remain PROTECTED in derived class.

//protected inheritance makes PUBLIC and PROTECTED members of base class PROTECTED in derived class

//private inheritance makes PUBLIC and PROTECTED members of base class PRIVATE in derived class

//PRIVATE members of base class are inaccessible to the derived class
class Base{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
};
class PublicDerived:public Base{
	// x is public here
	// y is protected
	// z is not accessible
};
class ProtectedDerived: protected Base{
	// x is protected
	// y is protected
	// z is not accessible
};
class PrivateDerived: private Base{
	// x is private
	// y is private
	// z is not accessible
};
int main(){
	
}
