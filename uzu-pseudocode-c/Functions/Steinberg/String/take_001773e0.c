// Function : take
// Namespace: Steinberg:String
// Entry    : 001773e0
// Prototype: undefined take(String * this, undefined8 param_1, int param_2)
// Body     : 001773e0 - 00177483


/* Steinberg::String::take(void*, bool) */

void __thiscall Steinberg::String::take(String *this,undefined8 param_1,int param_2)

{
  short *psVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  *(undefined8 *)(this + 8) = param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | param_2 << 0x1e;
  if ((char)param_2 == '\0') {
    pcVar4 = (char *)(**(code **)(*(long *)this + 0x18))(this);
    uVar5 = 0xffffffff;
    do {
      uVar5 = uVar5 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
  }
  else {
    lVar3 = (**(code **)(*(long *)this + 0x20))(this);
    uVar6 = 0;
    do {
      psVar1 = (short *)(lVar3 + uVar6);
      uVar6 = uVar6 + 2;
    } while (*psVar1 != 0);
    uVar5 = ((uint)(uVar6 >> 1) & 0x7fffffff) + 0x3fffffff;
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar5 & 0x3fffffff;
  return;
}


