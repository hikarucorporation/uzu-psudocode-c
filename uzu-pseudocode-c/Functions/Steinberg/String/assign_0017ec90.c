// Function : assign
// Namespace: Steinberg:String
// Entry    : 0017ec90
// Prototype: String * assign(String * this, long * param_1, uint param_2)
// Body     : 0017ec90 - 0017edf6


/* Steinberg::String::assign(Steinberg::ConstString const&, int) */

String * __thiscall Steinberg::String::assign(String *this,long *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  char *__s;
  size_t sVar3;
  void *__src;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((*(byte *)((long)param_1 + 0x13) & 0x40) == 0) {
    __s = (char *)(**(code **)(*param_1 + 0x18))(param_1);
    if ((int)param_2 < 0) {
      param_2 = (**(code **)(*param_1 + 0x10))(param_1);
    }
    if (*(char **)(this + 8) == __s) {
      return this;
    }
    if (__s == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      sVar3 = strlen(__s);
      uVar2 = (uint)sVar3;
    }
    uVar6 = param_2;
    if (uVar2 < param_2) {
      uVar6 = uVar2;
    }
    if ((int)param_2 < 0) {
      uVar6 = uVar2;
    }
    uVar5 = resize(this,uVar6,0,'\0');
    if ((char)uVar5 == '\0') {
      return this;
    }
    if (((__s != (char *)0x0) && (0 < (int)uVar6)) && (*(void **)(this + 8) != (void *)0x0)) {
      memcpy(*(void **)(this + 8),__s,(ulong)uVar6);
    }
    uVar2 = *(uint *)(this + 0x10) & 0x80000000 | uVar6 & 0x3fffffff;
  }
  else {
    __src = (void *)(**(code **)(*param_1 + 0x20))(param_1);
    if ((int)param_2 < 0) {
      param_2 = (**(code **)(*param_1 + 0x10))(param_1);
    }
    if (*(void **)(this + 8) == __src) {
      return this;
    }
    uVar4 = 0;
    uVar2 = 0;
    if (__src != (void *)0x0) {
      do {
        psVar1 = (short *)((long)__src + uVar4);
        uVar4 = uVar4 + 2;
      } while (*psVar1 != 0);
      uVar2 = (int)(uVar4 >> 1) - 1;
    }
    uVar6 = param_2;
    if (uVar2 < param_2) {
      uVar6 = uVar2;
    }
    if ((int)param_2 < 0) {
      uVar6 = uVar2;
    }
    uVar5 = resize(this,uVar6,1,'\0');
    if ((char)uVar5 == '\0') {
      return this;
    }
    if (((__src != (void *)0x0) && (0 < (int)uVar6)) && (*(void **)(this + 8) != (void *)0x0)) {
      memcpy(*(void **)(this + 8),__src,(ulong)uVar6 * 2);
    }
    uVar2 = (*(uint *)(this + 0x10) & 0x80000000) + (uVar6 & 0x3fffffff) + 0x40000000;
  }
  *(uint *)(this + 0x10) = uVar2;
  return this;
}


