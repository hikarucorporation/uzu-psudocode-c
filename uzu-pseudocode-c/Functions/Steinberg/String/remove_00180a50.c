// Function : remove
// Namespace: Steinberg:String
// Entry    : 00180a50
// Prototype: String * remove(String * this, uint param_1, uint param_2)
// Body     : 00180a50 - 00180b50


/* Steinberg::String::remove(unsigned int, int) */

String * __thiscall Steinberg::String::remove(String *this,uint param_1,uint param_2)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  void *__src;
  void *__dest;
  uint uVar8;
  
  lVar6 = *(long *)(this + 8);
  if (lVar6 != 0) {
    uVar3 = *(uint *)(this + 0x10) & 0x3fffffff;
    if (((uVar3 != 0) && (param_2 != 0)) &&
       (uVar8 = uVar3 - param_1, param_1 <= uVar3 && uVar8 != 0)) {
      if ((-1 < (int)param_2) && (iVar4 = uVar3 - (param_2 + param_1), param_2 + param_1 <= uVar3))
      {
        if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
          __dest = (void *)(lVar6 + (ulong)param_1);
          __src = (void *)((ulong)param_2 + (long)__dest);
          __n = (size_t)iVar4;
        }
        else {
          __dest = (void *)(lVar6 + (ulong)param_1 * 2);
          __src = (void *)((long)__dest + (ulong)param_2 * 2);
          __n = (long)iVar4 * 2;
        }
        memmove(__dest,__src,__n);
        uVar8 = param_2;
      }
      resize(this,(*(uint *)(this + 0x10) & 0x3fffffff) - uVar8,*(uint *)(this + 0x10) >> 0x1e & 1,
             '\0');
      if (((byte)this[0x13] & 0x40) == 0) {
        pcVar5 = (char *)(**(code **)(*(long *)this + 0x18))(this);
        uVar3 = 0xffffffff;
        do {
          uVar3 = uVar3 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
      }
      else {
        lVar6 = (**(code **)(*(long *)this + 0x20))(this);
        uVar7 = 0;
        do {
          psVar1 = (short *)(lVar6 + uVar7);
          uVar7 = uVar7 + 2;
        } while (*psVar1 != 0);
        uVar3 = ((uint)(uVar7 >> 1) & 0x7fffffff) + 0x3fffffff;
      }
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar3 & 0x3fffffff;
    }
  }
  return this;
}


