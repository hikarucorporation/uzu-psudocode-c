// Function : scanInt64
// Namespace: Steinberg:ConstString
// Entry    : 0017d540
// Prototype: ulong scanInt64(ConstString * this, undefined8 param_1, uint param_2, char param_3)
// Body     : 0017d540 - 0017d5f7


/* Steinberg::ConstString::scanInt64(long&, unsigned int, bool) const */

ulong __thiscall
Steinberg::ConstString::scanInt64(ConstString *this,undefined8 param_1,uint param_2,char param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    uVar6 = *(uint *)(this + 0x10) & 0x3fffffff;
    if ((uVar6 != 0) && (param_2 < uVar6)) {
      uVar4 = (ulong)param_2;
      if ((*(uint *)(this + 0x10) & 0x40000000) != 0) {
        uVar4 = scanInt64_16((short *)(lVar2 + uVar4 * 2),param_1,param_3);
        return uVar4;
      }
      lVar5 = lVar2 + uVar4;
      if (param_3 == '\0') {
        if (*(char *)(lVar2 + uVar4) != '\0') {
          uVar3 = __isoc99_sscanf(lVar5,&DAT_005db39c,param_1);
          return CONCAT71((int7)((ulong)uVar3 >> 8),(int)uVar3 == 1);
        }
      }
      else if (*(char *)(lVar2 + uVar4) != '\0') {
        do {
          uVar3 = __isoc99_sscanf(lVar5,&DAT_005db39c,param_1);
          bVar7 = (int)uVar3 == 1;
          uVar4 = CONCAT71((int7)((ulong)uVar3 >> 8),bVar7);
          if (bVar7) {
            return uVar4;
          }
          pcVar1 = (char *)(lVar5 + 1);
          lVar5 = lVar5 + 1;
        } while (*pcVar1 != '\0');
        return uVar4;
      }
      return 0;
    }
  }
  return 0;
}


