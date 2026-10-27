// Function : make
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00187e90
// Prototype: HostAttributeList * make(HostAttributeList * this)
// Body     : 00187e90 - 00187f0d


/* Steinberg::Vst::HostAttributeList::make() */

HostAttributeList * __thiscall Steinberg::Vst::HostAttributeList::make(HostAttributeList *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_queryInterface_00703048;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = puVar1 + 3;
  puVar1[6] = puVar1 + 3;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)this = puVar1;
  LOCK();
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + -1;
  UNLOCK();
  if (*(int *)(puVar1 + 1) == 0) {
                    /* try { // try from 00187ef6 to 00187efa has its CatchHandler @ 00187f0e */
    std::
    _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
    ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                *)(puVar1 + 2),(void *)puVar1[4]);
    operator_delete(puVar1);
  }
  return this;
}


