// Function : findPrev
// Namespace: Steinberg:ConstString
// Entry    : 0017c730
// Prototype: ulong findPrev(ConstString * this, uint param_1, char param_2, int param_3)
// Body     : 0017c730 - 0017c84c


/* Steinberg::ConstString::findPrev(int, char, Steinberg::ConstString::CompareMode) const */

ulong __thiscall
Steinberg::ConstString::findPrev(ConstString *this,uint param_1,char param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char cVar8;
  char local_3a [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar7 = 0xffffffff;
  uVar4 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar4 != 0) {
    uVar6 = (ulong)param_1;
    if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
      if ((int)uVar4 < (int)param_1) {
        uVar6 = (ulong)uVar4;
      }
      if ((int)param_1 < 0) {
        uVar6 = (ulong)uVar4;
      }
      if (param_3 == 0) {
        do {
          iVar5 = (int)uVar6;
          if (*(char *)(*(long *)(this + 8) + uVar6) == param_2) {
LAB_0017c83a:
            return uVar6 & 0xffffffff;
          }
          uVar6 = (ulong)(iVar5 - 1);
        } while (0 < iVar5);
      }
      else {
        if ((byte)(param_2 + 0xbfU) < 0x1a) {
          cVar8 = param_2 + ' ';
        }
        else {
          iVar5 = tolower((int)param_2);
          cVar8 = (char)iVar5;
        }
        lVar1 = *(long *)(this + 8);
        do {
          cVar3 = *(char *)(lVar1 + uVar6);
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          else {
            iVar5 = tolower((int)cVar3);
            cVar3 = (char)iVar5;
          }
          if (cVar3 == cVar8) goto LAB_0017c83a;
          bVar2 = 0 < (long)uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar2);
      }
    }
    else {
      local_3a[1] = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_3a[0] = param_2;
      iVar5 = multiByteToWideString((undefined2 *)&local_38,local_3a,2,0);
      if (iVar5 < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = findPrev(this,uVar6,(ushort)local_38,param_3);
        uVar7 = uVar7 & 0xffffffff;
      }
    }
  }
  return uVar7;
}


