// Function : ~_Auto_node
// Namespace: std:_Rb_tree_std____cxx11__string_std__pair_std____cxx11__string_const_Steinberg__Vst__HostAtt~ebbba36b:_Auto_node
// Entry    : 001bae20
// Prototype: undefined ~_Auto_node(_Auto_node * this)
// Body     : 001bae20 - 001bae5a


/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute>, std::_Select1st<std::pair<std::__cxx11::string
   const, Steinberg::Vst::HostAttributeList::Attribute> >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute> > >::_Auto_node::~_Auto_node() */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
::_Auto_node::~_Auto_node(_Auto_node *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((*(int *)((long)pvVar1 + 0x48) != 0) && (*(void **)((long)pvVar1 + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)((long)pvVar1 + 0x40));
  }
  if (*(void **)((long)pvVar1 + 0x20) != (void *)((long)pvVar1 + 0x30)) {
    operator_delete(*(void **)((long)pvVar1 + 0x20));
  }
  operator_delete(pvVar1);
  return;
}


