// Function : copyTo16
// Namespace: Steinberg:ConstString
// Entry    : 0017a930
// Prototype: int copyTo16(ConstString * this, undefined2 * param_1, uint param_2, int param_3)
// Body     : 0017a930 - 0017aa90


/* Steinberg::ConstString::copyTo16(char16_t*, unsigned int, int) const */

int __thiscall
Steinberg::ConstString::copyTo16(ConstString *this,undefined2 *param_1,uint param_2,int param_3)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  char *__dest;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  if (param_1 == (undefined2 *)0x0) {
    return 0;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) != 0) {
    if (((*(long *)(this + 8) == 0) || (uVar4 = *(uint *)(this + 0x10) & 0x3fffffff, uVar4 == 0)) ||
       (iVar1 = uVar4 - param_2, uVar4 < param_2 || iVar1 == 0)) {
      *param_1 = 0;
      return 0;
    }
    iVar5 = param_3;
    if (uVar4 < param_3 + param_2) {
      iVar5 = iVar1;
    }
    if (param_3 < 0) {
      iVar5 = iVar1;
    }
    memcpy(param_1,(void *)(*(long *)(this + 8) + (ulong)param_2 * 2),(long)iVar5 * 2);
    param_1[iVar5] = 0;
    return iVar5;
  }
  __s = (char *)(**(code **)(*(long *)this + 0x18))();
  local_40 = (char *)0x0;
  local_48 = &PTR__String_00702c10;
  if (__s == (char *)0x0) {
LAB_0017aa44:
    local_38 = 0x40000000;
  }
  else {
    sVar2 = strlen(__s);
    uVar4 = (uint)sVar2;
    if ((uVar4 == 0) || (__dest = malloc((ulong)(uVar4 + 1)), __dest == (char *)0x0))
    goto LAB_0017aa44;
    *__dest = '\0';
    __dest[sVar2 & 0xffffffff] = '\0';
    local_40 = __dest;
    if (0 < (int)uVar4) {
      memcpy(__dest,__s,sVar2 & 0xffffffff);
    }
    local_38 = uVar4 & 0x3fffffff;
    if ((sVar2 & 0x3fffffff) == 0) goto LAB_0017aa44;
                    /* try { // try from 0017a9e3 to 0017a9f4 has its CatchHandler @ 0017aa91 */
    iVar1 = 0;
    uVar3 = Steinberg::String::_toWideString((String *)&local_48,__dest,local_38,0);
    if ((char)uVar3 == '\0') goto LAB_0017aa5f;
  }
                    /* try { // try from 0017aa4c to 0017aa5c has its CatchHandler @ 0017aa91 */
  iVar1 = copyTo16((ConstString *)&local_48,param_1,param_2,param_3);
LAB_0017aa5f:
  local_48 = &PTR__String_00702c10;
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
  return iVar1;
}


