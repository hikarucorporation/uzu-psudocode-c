// Function : ~HostAttributeList
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00188350
// Prototype: undefined8 ~HostAttributeList(HostAttributeList * this)
// Body     : 00188350 - 0018835f


/* Steinberg::Vst::HostAttributeList::~HostAttributeList() */

undefined8 __thiscall Steinberg::Vst::HostAttributeList::~HostAttributeList(HostAttributeList *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 00188359 to 0018835d has its CatchHandler @ 00188360 */
  std::
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
  ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
              *)(this + 0x10),*(void **)(this + 0x20));
  return in_RAX;
}


