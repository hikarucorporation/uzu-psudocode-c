// Function : removeSubString
// Namespace: Steinberg:String
// Entry    : 00181340
// Prototype: undefined8 removeSubString(String * this, long * param_1, int param_2)
// Body     : 00181340 - 001813e1


/* Steinberg::String::removeSubString(Steinberg::ConstString const&, bool) */

undefined8 __thiscall Steinberg::String::removeSubString(String *this,long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  String *pSVar3;
  
  pSVar3 = (String *)ConstString::findNext((ConstString *)this,0,param_1,0xffffffff,0,0xffffffff);
  uVar1 = (uint)pSVar3;
  if (param_2 == 0) {
    if ((int)uVar1 < 0) {
      return 0;
    }
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    pSVar3 = remove(this,uVar1,uVar2);
  }
  else {
    if ((int)uVar1 < 0) {
      return 0;
    }
    do {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      remove(this,(uint)pSVar3,uVar1);
      pSVar3 = (String *)
               ConstString::findNext((ConstString *)this,0,param_1,0xffffffff,0,0xffffffff);
    } while (-1 < (int)pSVar3);
  }
  return CONCAT71((int7)((ulong)pSVar3 >> 8),1);
}


