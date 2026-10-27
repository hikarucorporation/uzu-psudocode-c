// Function : String
// Namespace: Steinberg:String
// Entry    : 0017f300
// Prototype: undefined String(String * this, long * param_1)
// Body     : 0017f300 - 0017f446


/* Steinberg::String::String(Steinberg::IString*) */

void __thiscall Steinberg::String::String(String *this,long *param_1)

{
  short *psVar1;
  byte bVar2;
  void *__src;
  undefined8 uVar3;
  char *__s;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000;
  *(undefined ***)this = &PTR__String_00702c10;
                    /* try { // try from 0017f327 to 0017f354 has its CatchHandler @ 0017f447 */
  bVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xbfffffff | (uint)bVar2 << 0x1e;
  if (bVar2 == 0) {
                    /* try { // try from 0017f3d5 to 0017f3da has its CatchHandler @ 0017f447 */
    __s = (char *)(**(code **)(*param_1 + 0x28))(param_1);
    if (*(char **)(this + 8) == __s) {
      return;
    }
    if (__s == (char *)0x0) {
      sVar4 = 0;
    }
    else {
      sVar4 = strlen(__s);
    }
    uVar5 = (uint)sVar4;
    uVar3 = resize(this,uVar5,0,'\0');
    if ((char)uVar3 == '\0') {
      return;
    }
    if (((__s != (char *)0x0) && (0 < (int)uVar5)) && (*(void **)(this + 8) != (void *)0x0)) {
      memcpy(*(void **)(this + 8),__s,sVar4 & 0xffffffff);
    }
    uVar5 = *(uint *)(this + 0x10) & 0x80000000 | uVar5 & 0x3fffffff;
  }
  else {
    __src = (void *)(**(code **)(*param_1 + 0x30))(param_1);
    if (*(void **)(this + 8) == __src) {
      return;
    }
    uVar6 = 0;
    uVar5 = 0;
    if (__src != (void *)0x0) {
      do {
        psVar1 = (short *)((long)__src + uVar6);
        uVar6 = uVar6 + 2;
      } while (*psVar1 != 0);
      uVar5 = (int)(uVar6 >> 1) - 1;
    }
    uVar3 = resize(this,uVar5,1,'\0');
    if ((char)uVar3 == '\0') {
      return;
    }
    if (((__src != (void *)0x0) && (0 < (int)uVar5)) && (*(void **)(this + 8) != (void *)0x0)) {
      memcpy(*(void **)(this + 8),__src,(ulong)uVar5 * 2);
    }
    uVar5 = (*(uint *)(this + 0x10) & 0x80000000) + (uVar5 & 0x3fffffff) + 0x40000000;
  }
  *(uint *)(this + 0x10) = uVar5;
  return;
}


