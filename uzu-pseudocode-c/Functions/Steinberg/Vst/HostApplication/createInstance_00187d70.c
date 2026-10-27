// Function : createInstance
// Namespace: Steinberg:Vst:HostApplication
// Entry    : 00187d70
// Prototype: undefined8 createInstance(undefined8 param_1_00, long * param_2, long * param_3, undefined8 * param_4)
// Body     : 00187d70 - 00187e80


/* Steinberg::Vst::HostApplication::createInstance(char*, char*, void**) */

undefined8 __thiscall
Steinberg::Vst::HostApplication::createInstance
          (undefined8 param_1_00,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  if ((((lVar1 == IMessage::iid._8_8_) && (param_2[1] == IMessage::iid._16_8_)) &&
      (*param_3 == lVar1)) && (param_3[1] == param_2[1])) {
    puVar2 = operator_new(0x20);
    *puVar2 = &PTR_queryInterface_00702ff8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 1) = 1;
    *param_4 = puVar2;
  }
  else {
    if (((lVar1 != IAttributeList::iid._8_8_) || (param_2[1] != IAttributeList::iid._16_8_)) ||
       ((*param_3 != lVar1 || (param_3[1] != param_2[1])))) {
      *param_4 = 0;
      return 1;
    }
    puVar2 = operator_new(0x40);
    *puVar2 = &PTR_queryInterface_00703048;
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    puVar2[5] = puVar2 + 3;
    puVar2[6] = puVar2 + 3;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 1) = 1;
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + -1;
    UNLOCK();
    if (*(int *)(puVar2 + 1) == 0) {
                    /* try { // try from 00187e53 to 00187e57 has its CatchHandler @ 00187e81 */
      std::
      _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
      ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                  *)(puVar2 + 2),(void *)puVar2[4]);
      operator_delete(puVar2);
    }
    *param_4 = puVar2;
  }
  return 0;
}


