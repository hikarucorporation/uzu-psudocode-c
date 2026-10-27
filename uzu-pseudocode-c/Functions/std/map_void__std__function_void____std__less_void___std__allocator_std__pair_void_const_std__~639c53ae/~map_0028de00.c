// Function : ~map
// Namespace: std:map_void__std__function_void____std__less_void___std__allocator_std__pair_void_const_std__~639c53ae
// Entry    : 0028de00
// Prototype: undefined8 ~map(map<void*,std::function<void()>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>> * this)
// Body     : 0028de00 - 0028de0b


/* std::map<void*, std::function<void ()>, std::less<void*>, std::allocator<std::pair<void* const,
   std::function<void ()> > > >::~map() */

undefined8 __thiscall
std::
map<void*,std::function<void()>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>
::~map(map<void*,std::function<void()>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>
       *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 0028de05 to 0028de09 has its CatchHandler @ 0028de0c */
  _Rb_tree<void*,std::pair<void*const,std::function<void()>>,std::_Select1st<std::pair<void*const,std::function<void()>>>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>
  ::_M_erase(*(void **)(this + 0x10));
  return in_RAX;
}


