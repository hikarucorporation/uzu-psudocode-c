// Function : setInt
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 001883a0
// Prototype: undefined8 setInt(HostAttributeList * this, char * param_1, undefined8 param_2)
// Body     : 001883a0 - 00188479


/* Steinberg::Vst::HostAttributeList::setInt(char const*, long) */

undefined8 __thiscall
Steinberg::Vst::HostAttributeList::setInt(HostAttributeList *this,char *param_1,undefined8 param_2)

{
  size_t __n;
  size_t *__dest;
  undefined8 uVar1;
  _Rb_tree_node_base *p_Var2;
  size_t local_50;
  size_t *local_48;
  size_t local_40;
  size_t local_38 [2];
  
  if (param_1 == (char *)0x0) {
    uVar1 = 2;
  }
  else {
    local_48 = local_38;
    __n = strlen(param_1);
    __dest = local_38;
    local_50 = __n;
    if (0xf < __n) {
      __dest = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_48,(ulong)&local_50);
      local_38[0] = local_50;
      local_48 = __dest;
    }
    if (__n != 0) {
      if (__n == 1) {
        *(char *)__dest = *param_1;
      }
      else {
        memcpy(__dest,param_1,__n);
      }
    }
    local_40 = local_50;
    *(undefined1 *)((long)local_48 + local_50) = 0;
                    /* try { // try from 0018843d to 00188449 has its CatchHandler @ 0018847a */
    p_Var2 = std::
             map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
             ::operator[]((map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                           *)(this + 0x10),&local_48);
    *(undefined8 *)p_Var2 = param_2;
    *(undefined8 *)(p_Var2 + 8) = 0x100000000;
    if (local_48 != local_38) {
      operator_delete(local_48);
    }
    uVar1 = 0;
  }
  return uVar1;
}


