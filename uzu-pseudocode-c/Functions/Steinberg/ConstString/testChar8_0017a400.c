// Function : testChar8
// Namespace: Steinberg:ConstString
// Entry    : 0017a400
// Prototype: ulong testChar8(ConstString * this, uint param_1, char param_2)
// Body     : 0017a400 - 0017a47f


/* Steinberg::ConstString::testChar8(unsigned int, char) const */

ulong __thiscall Steinberg::ConstString::testChar8(ConstString *this,uint param_1,char param_2)

{
  int iVar1;
  ulong unaff_RBP;
  bool bVar2;
  char local_1e [2];
  undefined4 local_1c;
  
  if (param_1 < (*(uint *)(this + 0x10) & 0x3fffffff)) {
    if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
      bVar2 = *(char *)(*(long *)(this + 8) + (ulong)param_1) == param_2;
    }
    else {
      local_1e[1] = 0;
      local_1c = 0;
      unaff_RBP = 0;
      local_1e[0] = param_2;
      iVar1 = multiByteToWideString((undefined2 *)&local_1c,local_1e,2,0);
      if (iVar1 < 1) goto LAB_0017a475;
      bVar2 = *(short *)(*(long *)(this + 8) + (ulong)param_1 * 2) == (short)local_1c;
    }
  }
  else {
    bVar2 = param_2 == '\0';
  }
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar2);
LAB_0017a475:
  return unaff_RBP & 0xffffffff;
}


