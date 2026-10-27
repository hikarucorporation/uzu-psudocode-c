// Function : convert[abi:cxx11]
// Namespace: Steinberg:StringConvert
// Entry    : 00187360
// Prototype: StringConvert * convert[abi:cxx11](StringConvert * this, long param_1, int param_2)
// Body     : 00187360 - 00187425


/* Steinberg::StringConvert::convert[abi:cxx11](char const*, unsigned int) */

StringConvert * __thiscall
Steinberg::StringConvert::convert_abi_cxx11_(StringConvert *this,long param_1,int param_2)

{
  StringConvert SVar1;
  ulong uVar2;
  StringConvert *pSVar3;
  ulong uVar4;
  long lVar5;
  
  *(StringConvert **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (StringConvert)0x0;
                    /* try { // try from 00187399 to 001873a5 has its CatchHandler @ 00187426 */
  if ((param_1 != 0) && (std::__cxx11::string::reserve((ulong)this), param_2 != 0)) {
    lVar5 = 0;
    do {
      SVar1 = *(StringConvert *)(param_1 + lVar5);
      if (SVar1 == (StringConvert)0x0) {
        return this;
      }
      pSVar3 = *(StringConvert **)this;
      uVar2 = *(ulong *)(this + 8);
      uVar4 = 0xf;
      if (pSVar3 != this + 0x10) {
        uVar4 = *(ulong *)(this + 0x10);
      }
      if (uVar4 < uVar2 + 1) {
                    /* try { // try from 001873fd to 00187411 has its CatchHandler @ 00187428 */
        std::__cxx11::string::_M_mutate((string *)this,uVar2,0,(undefined1 *)0x0,1);
        pSVar3 = *(StringConvert **)this;
      }
      pSVar3[uVar2] = SVar1;
      *(ulong *)(this + 8) = uVar2 + 1;
      *(undefined1 *)(*(long *)this + 1 + uVar2) = 0;
      lVar5 = lVar5 + 1;
    } while (param_2 != (int)lVar5);
  }
  return this;
}


