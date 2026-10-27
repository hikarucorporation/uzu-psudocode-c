// Function : release
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00188280
// Prototype: int release(HostAttributeList * this)
// Body     : 00188280 - 001882af


/* Steinberg::Vst::HostAttributeList::release() */

int __thiscall Steinberg::Vst::HostAttributeList::release(HostAttributeList *this)

{
  int iVar1;
  
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 0) {
                    /* try { // try from 0018829a to 0018829e has its CatchHandler @ 001882b0 */
    std::
    _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
    ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                *)(this + 0x10),*(void **)(this + 0x20));
    operator_delete(this);
  }
  return iVar1;
}


