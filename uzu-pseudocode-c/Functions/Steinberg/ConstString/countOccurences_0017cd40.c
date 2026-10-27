// Function : countOccurences
// Namespace: Steinberg:ConstString
// Entry    : 0017cd40
// Prototype: int countOccurences(ConstString * this, char param_1, uint param_2, int param_3)
// Body     : 0017cd40 - 0017cfe6


/* Steinberg::ConstString::countOccurences(char, unsigned int, Steinberg::ConstString::CompareMode)
   const */

int __thiscall
Steinberg::ConstString::countOccurences(ConstString *this,char param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint uVar6;
  char local_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (((byte)this[0x13] & 0x40) == 0) {
    uVar4 = findNext(this,param_2,param_1,param_3,0xffffffff);
    uVar6 = 0;
    iVar2 = (int)uVar4;
    while (-1 < iVar2) {
      uVar6 = uVar6 + 1;
      uVar4 = findNext(this,(int)uVar4 + 1,param_1,param_3,0xffffffff);
      iVar2 = (int)uVar4;
    }
  }
  else {
    local_4a[1] = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_4a[0] = param_1;
    iVar2 = multiByteToWideString((undefined2 *)&local_48,local_4a,2,0);
    uVar6 = 0xffffffff;
    if (0 < iVar2) {
      uVar1 = (ushort)local_48;
      uVar3 = *(uint *)(this + 0x10);
      if ((uVar3 & 0x40000000) == 0) {
        if ((ushort)local_48 != 0) {
          uVar1 = 0x5f;
          if ((ushort)local_48 < 0x80) {
            uVar1 = (ushort)local_48;
          }
          uVar6 = countOccurences(this,(char)uVar1,param_2,param_3);
        }
      }
      else {
        uVar5 = 0x5f;
        if ((ushort)local_48 < 0x80) {
          uVar5 = (ushort)local_48;
        }
        if (param_3 == 0) {
          if ((ushort)local_48 != 0) {
            iVar2 = 0;
            if ((uVar3 & 0x40000000) != 0) goto LAB_0017cf14;
            do {
              uVar4 = findNext(this,param_2,(char)uVar5,0,0xffffffff);
              uVar4 = uVar4 & 0xffffffff;
              while( true ) {
                if ((int)uVar4 < 0) {
                  return iVar2;
                }
                param_2 = (int)uVar4 + 1;
                iVar2 = iVar2 + 1;
                uVar3 = *(uint *)(this + 0x10);
                if ((uVar3 & 0x40000000) == 0) break;
LAB_0017cf14:
                uVar4 = (ulong)param_2;
                if ((int)param_2 < 0) {
                  uVar4 = 0;
                }
                if ((uVar3 & 0x3fffffff) <= (uint)uVar4) {
                  return iVar2;
                }
                while (*(ushort *)(*(long *)(this + 8) + uVar4 * 2) != uVar1) {
                  uVar6 = (int)uVar4 + 1;
                  uVar4 = (ulong)uVar6;
                  if ((uVar3 & 0x3fffffff) == uVar6) {
                    return iVar2;
                  }
                }
              }
            } while( true );
          }
          uVar3 = uVar3 & 0x3fffffff;
          uVar6 = 0;
          if ((int)param_2 < 0) {
            param_2 = uVar6;
          }
          if (param_2 < uVar3) {
            uVar6 = 0;
            do {
              while (*(short *)(*(long *)(this + 8) + (ulong)param_2 * 2) != 0) {
                param_2 = param_2 + 1;
                if (uVar3 == param_2) {
                  return uVar6;
                }
              }
              if ((int)param_2 < 0) {
                return uVar6;
              }
              uVar6 = uVar6 + 1;
              param_2 = param_2 + 1;
            } while (param_2 < uVar3);
          }
        }
        else {
          if ((ushort)local_48 != 0) {
            iVar2 = 0;
            if ((uVar3 & 0x40000000) != 0) goto LAB_0017ce8f;
            do {
              uVar4 = findNext(this,param_2,(char)uVar5,param_3,0xffffffff);
              uVar4 = uVar4 & 0xffffffff;
              while( true ) {
                if ((int)uVar4 < 0) {
                  return iVar2;
                }
                param_2 = (int)uVar4 + 1;
                iVar2 = iVar2 + 1;
                uVar3 = *(uint *)(this + 0x10);
                if ((uVar3 & 0x40000000) == 0) break;
LAB_0017ce8f:
                uVar4 = (ulong)param_2;
                if ((int)param_2 < 0) {
                  uVar4 = 0;
                }
                if ((uVar3 & 0x3fffffff) <= (uint)uVar4) {
                  return iVar2;
                }
                while (*(ushort *)(*(long *)(this + 8) + uVar4 * 2) != uVar1) {
                  uVar6 = (int)uVar4 + 1;
                  uVar4 = (ulong)uVar6;
                  if ((uVar3 & 0x3fffffff) == uVar6) {
                    return iVar2;
                  }
                }
              }
            } while( true );
          }
          uVar3 = uVar3 & 0x3fffffff;
          uVar6 = 0;
          if ((int)param_2 < 0) {
            param_2 = uVar6;
          }
          if (param_2 < uVar3) {
            uVar6 = 0;
            do {
              while (*(short *)(*(long *)(this + 8) + (ulong)param_2 * 2) != 0) {
                param_2 = param_2 + 1;
                if (uVar3 == param_2) {
                  return uVar6;
                }
              }
              if ((int)param_2 < 0) {
                return uVar6;
              }
              uVar6 = uVar6 + 1;
              param_2 = param_2 + 1;
            } while (param_2 < uVar3);
          }
        }
      }
    }
  }
  return uVar6;
}


