// Function : replace
// Namespace: Steinberg:String
// Entry    : 00180670
// Prototype: String * replace(String * this, uint param_1, int param_2, void * param_3, uint param_4)
// Body     : 00180670 - 00180801


/* Steinberg::String::replace(unsigned int, int, char16_t const*, int) */

String * __thiscall
Steinberg::String::replace(String *this,uint param_1,int param_2,void *param_3,uint param_4)

{
  short *psVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 == (void *)0x0) {
    return this;
  }
  uVar3 = *(uint *)(this + 0x10);
  uVar7 = uVar3 & 0x3fffffff;
  if (uVar7 < param_1) {
    return this;
  }
  if ((uVar3 & 0x40000000) == 0) {
    if ((*(char **)(this + 8) != (char *)0x0) && (uVar7 != 0)) {
      uVar4 = _toWideString(this,*(char **)(this + 8),uVar7,0);
      if ((char)uVar4 == '\0') {
        return this;
      }
      goto LAB_001806d3;
    }
    *(uint *)(this + 0x10) = uVar3 | 0x40000000;
    if (param_2 < 0) goto LAB_00180704;
LAB_001806d8:
    uVar3 = *(uint *)(this + 0x10);
    uVar7 = uVar3 & 0x3fffffff;
    if (param_2 + param_1 <= uVar7) goto joined_r0x00180719;
  }
  else {
LAB_001806d3:
    if (-1 < param_2) goto LAB_001806d8;
LAB_00180704:
    uVar3 = *(uint *)(this + 0x10);
    uVar7 = uVar3 & 0x3fffffff;
  }
  param_2 = uVar7 - param_1;
joined_r0x00180719:
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      psVar1 = (short *)((long)param_3 + uVar4);
      uVar4 = uVar4 + 2;
    } while (*psVar1 != 0);
    uVar6 = (int)(uVar4 >> 1) - 1;
    uVar7 = param_4;
    if (uVar6 < param_4) {
      uVar7 = uVar6;
    }
    if ((int)param_4 < 0) {
      uVar7 = uVar6;
    }
    uVar6 = ((uVar3 & 0x3fffffff) - param_2) + uVar7;
    if ((uVar6 <= (uVar3 & 0x3fffffff)) || (uVar5 = resize(this,uVar6,1,'\0'), (char)uVar5 != '\0'))
    {
      if (*(long *)(this + 8) != 0) {
        lVar2 = *(long *)(this + 8) + (ulong)param_1 * 2;
        memmove((void *)(lVar2 + (long)(int)uVar7 * 2),(void *)(lVar2 + (long)param_2 * 2),
                (ulong)((*(uint *)(this + 0x10) & 0x3fffffff) - (param_2 + param_1)) * 2);
        memcpy((void *)((ulong)param_1 * 2 + *(long *)(this + 8)),param_3,(long)(int)uVar7 * 2);
        *(undefined2 *)(*(long *)(this + 8) + (ulong)uVar6 * 2) = 0;
      }
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar6 & 0x3fffffff;
    }
  }
  return this;
}


