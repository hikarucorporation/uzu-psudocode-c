// Function : _M_realloc_insert<Steinberg::ModuleInfo::ClassInfo>
// Namespace: std:vector_Steinberg__ModuleInfo__ClassInfo_std__allocator_Steinberg__ModuleInfo__ClassInfo__
// Entry    : 001a3690
// Prototype: void _M_realloc_insert<Steinberg::ModuleInfo::ClassInfo>(vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>> * this, ClassInfo * param_1, long * param_2)
// Body     : 001a3690 - 001a3809


/* void std::vector<Steinberg::ModuleInfo::ClassInfo,
   std::allocator<Steinberg::ModuleInfo::ClassInfo>
   >::_M_realloc_insert<Steinberg::ModuleInfo::ClassInfo>(__gnu_cxx::__normal_iterator<Steinberg::ModuleInfo::ClassInfo*,
   std::vector<Steinberg::ModuleInfo::ClassInfo, std::allocator<Steinberg::ModuleInfo::ClassInfo> >
   >, Steinberg::ModuleInfo::ClassInfo&&) */

void __thiscall
std::vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>>::
_M_realloc_insert<Steinberg::ModuleInfo::ClassInfo>
          (vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>>
           *this,ClassInfo *param_1,long *param_2)

{
  ClassInfo *pCVar1;
  ClassInfo *pCVar2;
  long lVar3;
  ulong uVar4;
  ClassInfo *pCVar5;
  ulong uVar6;
  ClassInfo *this_00;
  ClassInfo *this_01;
  ulong uVar7;
  
  pCVar1 = *(ClassInfo **)this;
  pCVar2 = *(ClassInfo **)(this + 8);
  lVar3 = (long)pCVar2 - (long)pCVar1;
  if (lVar3 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar6 = (lVar3 >> 3) * -0x1084210842108421;
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar4 = uVar6;
  }
  uVar7 = uVar4 + uVar6;
  if (0x84210842108421 < uVar7) {
    uVar7 = 0x84210842108421;
  }
  if (CARRY8(uVar4,uVar6)) {
    uVar7 = 0x84210842108421;
  }
  if (uVar7 == 0) {
    pCVar5 = (ClassInfo *)0x0;
  }
  else {
    pCVar5 = operator_new(uVar7 * 0xf8);
  }
  Steinberg::ModuleInfo::ClassInfo::ClassInfo
            (pCVar5 + ((long)param_1 - (long)pCVar1 >> 3) * 8,param_2);
  this_00 = pCVar5;
  if (pCVar1 != param_1) {
    this_01 = pCVar1;
    do {
      Steinberg::ModuleInfo::ClassInfo::ClassInfo(this_00,(long *)this_01);
      Steinberg::ModuleInfo::ClassInfo::~ClassInfo(this_01);
      this_01 = this_01 + 0xf8;
      this_00 = this_00 + 0xf8;
    } while (this_01 != param_1);
  }
  for (; this_00 = this_00 + 0xf8, pCVar2 != param_1; param_1 = param_1 + 0xf8) {
    Steinberg::ModuleInfo::ClassInfo::ClassInfo(this_00,(long *)param_1);
    Steinberg::ModuleInfo::ClassInfo::~ClassInfo(param_1);
  }
  if (pCVar1 != (ClassInfo *)0x0) {
    operator_delete(pCVar1);
  }
  *(ClassInfo **)this = pCVar5;
  *(ClassInfo **)(this + 8) = this_00;
  *(ClassInfo **)(this + 0x10) = pCVar5 + uVar7 * 0xf8;
  return;
}


