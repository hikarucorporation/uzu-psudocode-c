// Function : countOccurences
// Namespace: Steinberg:ConstString
// Entry    : 0017cff0
// Prototype: int countOccurences(ConstString * this, ushort param_1, uint param_2, int param_3)
// Body     : 0017cff0 - 0017d202


/* Steinberg::ConstString::countOccurences(char16_t, unsigned int,
   Steinberg::ConstString::CompareMode) const */

int __thiscall
Steinberg::ConstString::countOccurences(ConstString *this,ushort param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(this + 0x10);
  if ((uVar3 & 0x40000000) == 0) {
    iVar2 = -1;
    if (param_1 != 0) {
      uVar1 = 0x5f;
      if (param_1 < 0x80) {
        uVar1 = param_1;
      }
      iVar2 = countOccurences(this,(char)uVar1,param_2,param_3);
    }
  }
  else {
    uVar1 = 0x5f;
    if (param_1 < 0x80) {
      uVar1 = param_1;
    }
    if (param_3 == 0) {
      if (param_1 != 0) {
        iVar2 = 0;
        if ((uVar3 & 0x40000000) != 0) goto LAB_0017d13e;
        do {
          uVar4 = findNext(this,param_2,(char)uVar1,0,0xffffffff);
          uVar4 = uVar4 & 0xffffffff;
          while( true ) {
            if ((int)uVar4 < 0) {
              return iVar2;
            }
            param_2 = (int)uVar4 + 1;
            iVar2 = iVar2 + 1;
            uVar3 = *(uint *)(this + 0x10);
            if ((uVar3 & 0x40000000) == 0) break;
LAB_0017d13e:
            uVar4 = (ulong)param_2;
            if ((int)param_2 < 0) {
              uVar4 = 0;
            }
            if ((uVar3 & 0x3fffffff) <= (uint)uVar4) {
              return iVar2;
            }
            while (*(ushort *)(*(long *)(this + 8) + uVar4 * 2) != param_1) {
              uVar5 = (int)uVar4 + 1;
              uVar4 = (ulong)uVar5;
              if ((uVar3 & 0x3fffffff) == uVar5) {
                return iVar2;
              }
            }
          }
        } while( true );
      }
      uVar3 = uVar3 & 0x3fffffff;
      iVar2 = 0;
      if ((int)param_2 < 0) {
        param_2 = 0;
      }
      if (param_2 < uVar3) {
        iVar2 = 0;
        do {
          while (*(short *)(*(long *)(this + 8) + (ulong)param_2 * 2) != 0) {
            param_2 = param_2 + 1;
            if (uVar3 == param_2) {
              return iVar2;
            }
          }
          if ((int)param_2 < 0) {
            return iVar2;
          }
          iVar2 = iVar2 + 1;
          param_2 = param_2 + 1;
        } while (param_2 < uVar3);
      }
    }
    else {
      if (param_1 != 0) {
        iVar2 = 0;
        if ((uVar3 & 0x40000000) != 0) goto LAB_0017d0c2;
        do {
          uVar4 = findNext(this,param_2,(char)uVar1,param_3,0xffffffff);
          uVar4 = uVar4 & 0xffffffff;
          while( true ) {
            if ((int)uVar4 < 0) {
              return iVar2;
            }
            param_2 = (int)uVar4 + 1;
            iVar2 = iVar2 + 1;
            uVar3 = *(uint *)(this + 0x10);
            if ((uVar3 & 0x40000000) == 0) break;
LAB_0017d0c2:
            uVar4 = (ulong)param_2;
            if ((int)param_2 < 0) {
              uVar4 = 0;
            }
            if ((uVar3 & 0x3fffffff) <= (uint)uVar4) {
              return iVar2;
            }
            while (*(ushort *)(*(long *)(this + 8) + uVar4 * 2) != param_1) {
              uVar5 = (int)uVar4 + 1;
              uVar4 = (ulong)uVar5;
              if ((uVar3 & 0x3fffffff) == uVar5) {
                return iVar2;
              }
            }
          }
        } while( true );
      }
      uVar3 = uVar3 & 0x3fffffff;
      iVar2 = 0;
      if ((int)param_2 < 0) {
        param_2 = 0;
      }
      if (param_2 < uVar3) {
        iVar2 = 0;
        do {
          while (*(short *)(*(long *)(this + 8) + (ulong)param_2 * 2) != 0) {
            param_2 = param_2 + 1;
            if (uVar3 == param_2) {
              return iVar2;
            }
          }
          if ((int)param_2 < 0) {
            return iVar2;
          }
          iVar2 = iVar2 + 1;
          param_2 = param_2 + 1;
        } while (param_2 < uVar3);
      }
    }
  }
  return iVar2;
}


