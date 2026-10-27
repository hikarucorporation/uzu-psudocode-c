// Function : getAttributes
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 00188180
// Prototype: long getAttributes(HostMessage * this)
// Body     : 00188180 - 0018823e


/* Steinberg::Vst::HostMessage::getAttributes() */

long __thiscall Steinberg::Vst::HostMessage::getAttributes(HostMessage *this)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(this + 0x18) != 0) {
    return *(long *)(this + 0x18);
  }
  plVar2 = operator_new(0x40);
  *plVar2 = (long)&PTR_queryInterface_00703048;
  *(undefined4 *)(plVar2 + 3) = 0;
  plVar2[4] = 0;
  plVar2[5] = (long)(plVar2 + 3);
  plVar2[6] = (long)(plVar2 + 3);
  plVar2[7] = 0;
  *(undefined4 *)(plVar2 + 1) = 1;
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
  UNLOCK();
  if ((int)plVar2[1] == 0) {
                    /* try { // try from 001881fc to 00188200 has its CatchHandler @ 0018823f */
    std::
    _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
    ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                *)(plVar2 + 2),(void *)plVar2[4]);
    operator_delete(plVar2);
    plVar1 = *(long **)(this + 0x18);
  }
  else {
    plVar1 = *(long **)(this + 0x18);
  }
  if (plVar1 != plVar2) {
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 0018821a to 00188229 has its CatchHandler @ 0018824f */
      (**(code **)(*plVar1 + 0x10))();
    }
    *(long **)(this + 0x18) = plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
                    /* try { // try from 0018822d to 00188232 has its CatchHandler @ 00188247 */
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return *(long *)(this + 0x18);
}


