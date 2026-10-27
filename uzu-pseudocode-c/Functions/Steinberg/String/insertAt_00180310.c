// Function : insertAt
// Namespace: Steinberg:String
// Entry    : 00180310
// Prototype: String * insertAt(String * this, uint param_1, void * param_2, uint param_3)
// Body     : 00180310 - 00180425


/* Steinberg::String::insertAt(unsigned int, char16_t const*, int) */

String * __thiscall
Steinberg::String::insertAt(String *this,uint param_1,void *param_2,uint param_3)

{
  short *psVar1;
  void *__src;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(this + 0x10);
  uVar6 = uVar2 & 0x3fffffff;
  if (param_1 <= uVar6) {
    if ((uVar2 & 0x40000000) == 0) {
      if ((*(char **)(this + 8) == (char *)0x0) || (uVar6 == 0)) {
        *(uint *)(this + 0x10) = uVar2 | 0x40000000;
      }
      else {
        uVar3 = _toWideString(this,*(char **)(this + 8),uVar6,0);
        if ((char)uVar3 == '\0') {
          return this;
        }
      }
    }
    uVar3 = 0;
    uVar2 = 0;
    if (param_2 != (void *)0x0) {
      do {
        psVar1 = (short *)((long)param_2 + uVar3);
        uVar3 = uVar3 + 2;
      } while (*psVar1 != 0);
      uVar2 = (int)(uVar3 >> 1) - 1;
    }
    uVar6 = param_3;
    if (uVar2 < param_3) {
      uVar6 = uVar2;
    }
    if ((int)param_3 < 0) {
      uVar6 = uVar2;
    }
    if ((0 < (int)uVar6) &&
       (uVar4 = resize(this,(*(uint *)(this + 0x10) & 0x3fffffff) + uVar6,1,'\0'),
       (char)uVar4 != '\0')) {
      if ((param_2 != (void *)0x0) && (lVar5 = *(long *)(this + 8), lVar5 != 0)) {
        uVar2 = (*(uint *)(this + 0x10) & 0x3fffffff) - param_1;
        if (!((*(uint *)(this + 0x10) & 0x3fffffff) < param_1 || uVar2 == 0)) {
          __src = (void *)(lVar5 + (ulong)param_1 * 2);
          memmove((void *)((long)__src + (ulong)uVar6 * 2),__src,(ulong)uVar2 * 2);
          lVar5 = *(long *)(this + 8);
        }
        memcpy((void *)(lVar5 + (ulong)param_1 * 2),param_2,(ulong)uVar6 * 2);
      }
      *(uint *)(this + 0x10) =
           *(uint *)(this + 0x10) & 0xc0000000 | uVar6 + *(uint *)(this + 0x10) & 0x3fffffff;
    }
  }
  return this;
}


