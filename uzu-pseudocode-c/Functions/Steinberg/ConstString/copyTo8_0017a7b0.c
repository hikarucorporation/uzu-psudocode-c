// Function : copyTo8
// Namespace: Steinberg:ConstString
// Entry    : 0017a7b0
// Prototype: int copyTo8(ConstString * this, undefined1 * param_1, uint param_2, int param_3)
// Body     : 0017a7b0 - 0017a90f


/* Steinberg::ConstString::copyTo8(char*, unsigned int, int) const */

int __thiscall
Steinberg::ConstString::copyTo8(ConstString *this,undefined1 *param_1,uint param_2,int param_3)

{
  short *psVar1;
  uint uVar2;
  void *__src;
  undefined2 *__dest;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined **local_48;
  undefined2 *local_40;
  uint local_38;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    if (((*(long *)(this + 8) == 0) || (uVar2 = *(uint *)(this + 0x10) & 0x3fffffff, uVar2 == 0)) ||
       (iVar4 = uVar2 - param_2, uVar2 < param_2 || iVar4 == 0)) {
      *param_1 = 0;
      return 0;
    }
    iVar5 = param_3;
    if (uVar2 < param_3 + param_2) {
      iVar5 = iVar4;
    }
    if (param_3 < 0) {
      iVar5 = iVar4;
    }
    memcpy(param_1,(void *)(*(long *)(this + 8) + (ulong)param_2),(long)iVar5);
    param_1[iVar5] = 0;
    return iVar5;
  }
  __src = (void *)(**(code **)(*(long *)this + 0x20))();
  local_40 = (undefined2 *)0x0;
  local_48 = &PTR__String_00702c10;
  local_38 = 0x40000000;
  if (__src != (void *)0x0) {
    uVar3 = 0;
    do {
      psVar1 = (short *)((long)__src + uVar3);
      uVar3 = uVar3 + 2;
    } while (*psVar1 != 0);
    uVar2 = (int)(uVar3 >> 1) - 1;
    if (uVar2 != 0) {
      __dest = malloc(uVar3 & 0x1fffffffe);
      if (__dest == (undefined2 *)0x0) goto LAB_0017a8c2;
      *__dest = 0;
      __dest[uVar2] = 0;
      local_40 = __dest;
      if (0 < (int)uVar2) {
        memcpy(__dest,__src,(ulong)uVar2 * 2);
      }
    }
    local_38 = uVar2 & 0x3fffffff | 0x40000000;
  }
LAB_0017a8c2:
                    /* try { // try from 0017a8c2 to 0017a8e2 has its CatchHandler @ 0017a910 */
  iVar4 = 0;
  uVar3 = Steinberg::String::toMultiByte((String *)&local_48,0);
  if ((char)uVar3 != '\0') {
    iVar4 = copyTo8((ConstString *)&local_48,param_1,param_2,param_3);
  }
  local_48 = &PTR__String_00702c10;
  if (local_40 != (undefined2 *)0x0) {
    free(local_40);
  }
  return iVar4;
}


