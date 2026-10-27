// Function : contains
// Namespace: Steinberg:ConstString
// Entry    : 0017bfd0
// Prototype: bool contains(ConstString * this, long * param_1, int param_2)
// Body     : 0017bfd0 - 0017bff0


/* Steinberg::ConstString::contains(Steinberg::ConstString const&,
   Steinberg::ConstString::CompareMode) const */

bool __thiscall Steinberg::ConstString::contains(ConstString *this,long *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = findNext(this,0,param_1,0xffffffff,param_2,0xffffffff);
  return (int)uVar1 != -1;
}


