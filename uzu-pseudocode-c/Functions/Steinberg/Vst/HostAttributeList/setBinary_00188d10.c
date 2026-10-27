// Function : setBinary
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00188d10
// Prototype: undefined8 setBinary(HostAttributeList * this, char * param_1, void * param_2, uint param_3)
// Body     : 00188d10 - 00188e01


/* Steinberg::Vst::HostAttributeList::setBinary(char const*, void const*, unsigned int) */

undefined8 __thiscall
Steinberg::Vst::HostAttributeList::setBinary
          (HostAttributeList *this,char *param_1,void *param_2,uint param_3)

{
  void *__dest;
  size_t __n;
  size_t *__dest_00;
  undefined8 uVar1;
  _Rb_tree_node_base *p_Var2;
  size_t local_58;
  size_t *local_50;
  size_t local_48;
  size_t local_40 [2];
  
  if (param_1 == (char *)0x0) {
    uVar1 = 2;
  }
  else {
    __dest = operator_new__((ulong)param_3);
    memcpy(__dest,param_2,(ulong)param_3);
    local_50 = local_40;
    __n = strlen(param_1);
    __dest_00 = local_40;
    local_58 = __n;
    if (0xf < __n) {
                    /* try { // try from 00188d6c to 00188d7a has its CatchHandler @ 00188e02 */
      __dest_00 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_50,(ulong)&local_58);
      local_40[0] = local_58;
      local_50 = __dest_00;
    }
    if (__n != 0) {
      if (__n == 1) {
        *(char *)__dest_00 = *param_1;
      }
      else {
        memcpy(__dest_00,param_1,__n);
      }
    }
    local_48 = local_58;
    *(undefined1 *)((long)local_50 + local_58) = 0;
                    /* try { // try from 00188dc7 to 00188dd3 has its CatchHandler @ 00188e0c */
    p_Var2 = std::
             map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
             ::operator[]((map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                           *)(this + 0x10),&local_50);
    *(void **)p_Var2 = __dest;
    *(uint *)(p_Var2 + 8) = param_3;
    *(undefined4 *)(p_Var2 + 0xc) = 4;
    if (local_50 != local_40) {
      operator_delete(local_50);
    }
    uVar1 = 0;
  }
  return uVar1;
}


