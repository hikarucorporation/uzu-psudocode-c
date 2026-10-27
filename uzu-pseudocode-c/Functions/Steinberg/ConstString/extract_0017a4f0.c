// Function : extract
// Namespace: Steinberg:ConstString
// Entry    : 0017a4f0
// Prototype: ulong extract(ConstString * this, String * param_1, uint param_2, uint param_3)
// Body     : 0017a4f0 - 0017a658


/* Steinberg::ConstString::extract(Steinberg::String&, unsigned int, int) const */

ulong __thiscall
Steinberg::ConstString::extract(ConstString *this,String *param_1,uint param_2,uint param_3)

{
  short *psVar1;
  long lVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  void *__src;
  uint uVar8;
  char *__s;
  undefined8 unaff_R14;
  undefined7 uVar10;
  ulong uVar9;
  
  uVar3 = *(uint *)(this + 0x10) & 0x3fffffff;
  uVar8 = uVar3 - param_2;
  if (uVar3 < param_2 || uVar8 == 0) {
    uVar9 = 0;
    goto LAB_0017a647;
  }
  uVar7 = param_3;
  if (uVar3 < param_3 + param_2) {
    uVar7 = uVar8;
  }
  if ((int)param_3 < 0) {
    uVar7 = uVar8;
  }
  uVar10 = (undefined7)((ulong)unaff_R14 >> 8);
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    lVar2 = *(long *)(this + 8);
    __s = (char *)((ulong)param_2 + lVar2);
    uVar9 = CONCAT71(uVar10,1);
    if (*(char **)(param_1 + 8) == __s) goto LAB_0017a647;
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      sVar4 = strlen(__s);
      uVar3 = (uint)sVar4;
    }
    uVar8 = uVar7;
    if (uVar3 < uVar7) {
      uVar8 = uVar3;
    }
    if ((int)uVar7 < 0) {
      uVar8 = uVar3;
    }
    uVar6 = Steinberg::String::resize(param_1,uVar8,0,'\0');
    if ((char)uVar6 == '\0') goto LAB_0017a647;
    if (((lVar2 != 0) && (0 < (int)uVar8)) && (*(void **)(param_1 + 8) != (void *)0x0)) {
      memcpy(*(void **)(param_1 + 8),__s,(ulong)uVar8);
    }
    uVar3 = *(uint *)(param_1 + 0x10) & 0x80000000 | uVar8 & 0x3fffffff;
  }
  else {
    lVar2 = *(long *)(this + 8);
    __src = (void *)((ulong)param_2 * 2 + lVar2);
    uVar9 = CONCAT71(uVar10,1);
    if (*(void **)(param_1 + 8) == __src) goto LAB_0017a647;
    uVar5 = 0;
    uVar3 = 0;
    if (lVar2 != 0) {
      do {
        psVar1 = (short *)((long)__src + uVar5);
        uVar5 = uVar5 + 2;
      } while (*psVar1 != 0);
      uVar3 = (int)(uVar5 >> 1) - 1;
    }
    uVar8 = uVar7;
    if (uVar3 < uVar7) {
      uVar8 = uVar3;
    }
    if ((int)uVar7 < 0) {
      uVar8 = uVar3;
    }
    uVar6 = Steinberg::String::resize(param_1,uVar8,1,'\0');
    if ((char)uVar6 == '\0') goto LAB_0017a647;
    if (((lVar2 != 0) && (0 < (int)uVar8)) && (*(void **)(param_1 + 8) != (void *)0x0)) {
      memcpy(*(void **)(param_1 + 8),__src,(ulong)uVar8 * 2);
    }
    uVar3 = (*(uint *)(param_1 + 0x10) & 0x80000000) + (uVar8 & 0x3fffffff) + 0x40000000;
  }
  uVar9 = CONCAT71(uVar10,1);
  *(uint *)(param_1 + 0x10) = uVar3;
LAB_0017a647:
  return uVar9 & 0xffffffff;
}


