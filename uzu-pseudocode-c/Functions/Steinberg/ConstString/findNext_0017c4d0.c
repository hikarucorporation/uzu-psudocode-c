// Function : findNext
// Namespace: Steinberg:ConstString
// Entry    : 0017c4d0
// Prototype: ulong findNext(ConstString * this, uint param_1, char param_2, int param_3, uint param_4)
// Body     : 0017c4d0 - 0017c62e


/* Steinberg::ConstString::findNext(int, char, Steinberg::ConstString::CompareMode, int) const */

ulong __thiscall
Steinberg::ConstString::findNext
          (ConstString *this,uint param_1,char param_2,int param_3,uint param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  char cVar7;
  ulong uVar8;
  char local_3a [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar4 = *(uint *)(this + 0x10) & 0x3fffffff;
  uVar5 = param_4 + 1;
  if (uVar4 <= param_4) {
    uVar5 = uVar4;
  }
  if ((int)param_4 < 0) {
    uVar5 = uVar4;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    uVar4 = 0;
    if (-1 < (int)param_1) {
      uVar4 = param_1;
    }
    if (param_3 == 0) {
      uVar8 = 0xffffffff;
      if (uVar4 < uVar5) {
        uVar6 = (ulong)uVar4;
        do {
          if (*(char *)(*(long *)(this + 8) + uVar6) == param_2) {
            return uVar6 & 0xffffffff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar5 != (uint)uVar6);
      }
    }
    else {
      if ((byte)(param_2 + 0xbfU) < 0x1a) {
        cVar7 = param_2 + ' ';
      }
      else {
        iVar3 = tolower((int)param_2);
        cVar7 = (char)iVar3;
      }
      uVar8 = 0xffffffff;
      if (uVar4 < uVar5) {
        uVar8 = 0xffffffff;
        lVar1 = *(long *)(this + 8);
        uVar6 = (ulong)uVar4;
        do {
          cVar2 = *(char *)(lVar1 + uVar6);
          if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar2 = cVar2 + ' ';
          }
          else {
            iVar3 = tolower((int)cVar2);
            cVar2 = (char)iVar3;
          }
          if (cVar2 == cVar7) {
            return uVar6 & 0xffffffff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
    }
  }
  else {
    local_3a[1] = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_3a[0] = param_2;
    iVar3 = multiByteToWideString((undefined2 *)&local_38,local_3a,2,0);
    if (iVar3 < 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = findNext(this,(ulong)param_1,(ushort)local_38,param_3,param_4);
      uVar8 = uVar8 & 0xffffffff;
    }
  }
  return uVar8;
}


