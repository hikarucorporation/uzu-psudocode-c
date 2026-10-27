// Function : setString
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 001889a0
// Prototype: undefined8 setString(HostAttributeList * this, char * param_1, void * param_2)
// Body     : 001889a0 - 00188abd


/* Steinberg::Vst::HostAttributeList::setString(char const*, char16_t const*) */

undefined8 __thiscall
Steinberg::Vst::HostAttributeList::setString(HostAttributeList *this,char *param_1,void *param_2)

{
  short *psVar1;
  ulong uVar2;
  void *__dest;
  size_t __n;
  size_t *__dest_00;
  undefined8 uVar3;
  _Rb_tree_node_base *p_Var4;
  size_t local_58;
  size_t *local_50;
  size_t local_48;
  size_t local_40 [2];
  
  if (param_1 == (char *)0x0) {
    uVar3 = 2;
  }
  else {
    uVar2 = 0;
    do {
      psVar1 = (short *)((long)param_2 + uVar2);
      uVar2 = uVar2 + 2;
    } while (*psVar1 != 0);
    __dest = operator_new__(uVar2 & 0x1fffffffe);
    memcpy(__dest,param_2,uVar2 & 0x1fffffffe);
    local_50 = local_40;
    __n = strlen(param_1);
    __dest_00 = local_40;
    local_58 = __n;
    if (0xf < __n) {
                    /* try { // try from 00188a29 to 00188a37 has its CatchHandler @ 00188abe */
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
                    /* try { // try from 00188a84 to 00188a90 has its CatchHandler @ 00188ac7 */
    p_Var4 = std::
             map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
             ::operator[]((map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                           *)(this + 0x10),&local_50);
    *(void **)p_Var4 = __dest;
    *(int *)(p_Var4 + 8) = (int)(uVar2 >> 1);
    *(undefined4 *)(p_Var4 + 0xc) = 3;
    if (local_50 != local_40) {
      operator_delete(local_50);
    }
    uVar3 = 0;
  }
  return uVar3;
}


