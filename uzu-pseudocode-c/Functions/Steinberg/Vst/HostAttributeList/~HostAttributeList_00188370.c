// Function : ~HostAttributeList
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00188370
// Prototype: undefined ~HostAttributeList(HostAttributeList * this)
// Body     : 00188370 - 00188389


/* Steinberg::Vst::HostAttributeList::~HostAttributeList() */

void __thiscall Steinberg::Vst::HostAttributeList::~HostAttributeList(HostAttributeList *this)

{
                    /* try { // try from 0018837c to 00188380 has its CatchHandler @ 0018838a */
  std::
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
  ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
              *)(this + 0x10),*(void **)(this + 0x20));
  operator_delete(this);
  return;
}


