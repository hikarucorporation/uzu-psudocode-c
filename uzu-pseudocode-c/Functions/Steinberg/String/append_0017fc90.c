// Function : append
// Namespace: Steinberg:String
// Entry    : 0017fc90
// Prototype: String * append(String * this, char * param_1, uint param_2)
// Body     : 0017fc90 - 0017fe0f


/* Steinberg::String::append(char16_t const*, int) */

String * __thiscall Steinberg::String::append(String *this,char *param_1,uint param_2)

{
  short *psVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  pcVar2 = *(char **)(this + 8);
  if (pcVar2 != param_1) {
    uVar3 = *(uint *)(this + 0x10);
    if ((uVar3 & 0x3fffffff) == 0) {
      uVar4 = 0;
      uVar3 = 0;
      if (param_1 != (char *)0x0) {
        do {
          psVar1 = (short *)(param_1 + uVar4);
          uVar4 = uVar4 + 2;
        } while (*psVar1 != 0);
        uVar3 = (int)(uVar4 >> 1) - 1;
      }
      uVar6 = param_2;
      if (uVar3 < param_2) {
        uVar6 = uVar3;
      }
      if ((int)param_2 < 0) {
        uVar6 = uVar3;
      }
      uVar5 = resize(this,uVar6,1,'\0');
      if ((char)uVar5 == '\0') {
        return this;
      }
      if (((param_1 != (char *)0x0) && (0 < (int)uVar6)) && (*(void **)(this + 8) != (void *)0x0)) {
        memcpy(*(void **)(this + 8),param_1,(ulong)uVar6 * 2);
      }
      uVar3 = (*(uint *)(this + 0x10) & 0x80000000) + (uVar6 & 0x3fffffff) + 0x40000000;
    }
    else {
      if ((uVar3 & 0x40000000) == 0) {
        if (pcVar2 == (char *)0x0) {
          *(uint *)(this + 0x10) = uVar3 | 0x40000000;
        }
        else {
          uVar4 = _toWideString(this,pcVar2,uVar3 & 0x3fffffff,0);
          if ((char)uVar4 == '\0') {
            return this;
          }
        }
      }
      uVar4 = 0;
      uVar3 = 0;
      if (param_1 != (char *)0x0) {
        do {
          psVar1 = (short *)(param_1 + uVar4);
          uVar4 = uVar4 + 2;
        } while (*psVar1 != 0);
        uVar3 = (int)(uVar4 >> 1) - 1;
      }
      uVar6 = param_2;
      if (uVar3 < param_2) {
        uVar6 = uVar3;
      }
      if ((int)param_2 < 0) {
        uVar6 = uVar3;
      }
      if ((int)uVar6 < 1) {
        return this;
      }
      uVar5 = resize(this,(*(uint *)(this + 0x10) & 0x3fffffff) + uVar6,1,'\0');
      if ((char)uVar5 == '\0') {
        return this;
      }
      if ((param_1 != (char *)0x0) && (*(long *)(this + 8) != 0)) {
        memcpy((void *)(*(long *)(this + 8) + (ulong)(*(uint *)(this + 0x10) & 0x3fffffff) * 2),
               param_1,(ulong)uVar6 * 2);
      }
      uVar3 = *(uint *)(this + 0x10) & 0xc0000000 | uVar6 + *(uint *)(this + 0x10) & 0x3fffffff;
    }
    *(uint *)(this + 0x10) = uVar3;
  }
  return this;
}


