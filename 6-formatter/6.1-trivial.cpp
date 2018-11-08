#ifdef __RESHARPER__

namespace my_namespace {
class My_Class
       {
public: My_Class(int x) : 
            x(x) { }
  My_Class
    *
      operator&()
         const
{ return this; }    private:
int
x; }; }

#endif
