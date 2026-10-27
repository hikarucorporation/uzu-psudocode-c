// Function : setText16
// Namespace: Steinberg:StringObject
// Entry    : 00183800
// Prototype: undefined setText16(StringObject * this, void * param_1)
// Body     : 00183800 - 00183886


/* non-virtual thunk to Steinberg::StringObject::setText16(char16_t const*) */

void __thiscall Steinberg::StringObject::setText16(StringObject *this,void *param_1)

{
  short *psVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(void **)(this + -0x18) != param_1) {
    uVar4 = 0;
    uVar3 = 0;
    if (param_1 != (void *)0x0) {
      do {
        psVar1 = (short *)((long)param_1 + uVar4);
        uVar4 = uVar4 + 2;
      } while (*psVar1 != 0);
      uVar3 = (int)(uVar4 >> 1) - 1;
    }
    uVar2 = Steinberg::String::resize((String *)(this + -0x20),uVar3,1,'\0');
    if ((char)uVar2 != '\0') {
      if (((param_1 != (void *)0x0) && (0 < (int)uVar3)) &&
         (*(void **)(this + -0x18) != (void *)0x0)) {
        memcpy(*(void **)(this + -0x18),param_1,(ulong)uVar3 * 2);
      }
      *(uint *)(this + -0x10) =
           (*(uint *)(this + -0x10) & 0x80000000) + (uVar3 & 0x3fffffff) + 0x40000000;
    }
  }
  return;
}


