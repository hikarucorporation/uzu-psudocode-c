// Function : replace
// Namespace: Steinberg:String
// Entry    : 00180810
// Prototype: String * replace(String * this, uint param_1, uint param_2, char * param_3, uint param_4)
// Body     : 00180810 - 00180a24


/* Steinberg::String::replace(unsigned int, int, char const*, int) */

String * __thiscall
Steinberg::String::replace(String *this,uint param_1,uint param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  char *__dest;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  if (param_3 == (char *)0x0) {
    return this;
  }
  uVar5 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar5 < param_1) {
    return this;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    uVar6 = param_2;
    if (uVar5 < param_1 + param_2) {
      uVar6 = uVar5 - param_1;
    }
    if ((int)param_2 < 0) {
      uVar6 = uVar5 - param_1;
    }
    if (uVar6 == 0) {
      return this;
    }
    sVar1 = strlen(param_3);
    uVar7 = (uint)sVar1;
    uVar8 = param_4;
    if (uVar7 < param_4) {
      uVar8 = uVar7;
    }
    if ((int)param_4 < 0) {
      uVar8 = uVar7;
    }
    uVar7 = (uVar5 - uVar6) + uVar8;
    if ((uVar5 < uVar7) && (uVar2 = resize(this,uVar7,0,'\0'), (char)uVar2 == '\0')) {
      return this;
    }
    if (*(long *)(this + 8) != 0) {
      lVar3 = *(long *)(this + 8) + (ulong)param_1;
      memmove((void *)(lVar3 + (int)uVar8),(void *)((int)uVar6 + lVar3),
              (ulong)((*(uint *)(this + 0x10) & 0x3fffffff) - (uVar6 + param_1)));
      memcpy((void *)((ulong)param_1 + *(long *)(this + 8)),param_3,(long)(int)uVar8);
      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0;
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar7 & 0x3fffffff;
    return this;
  }
  local_40 = (char *)0x0;
  local_48 = &PTR__String_00702c10;
  sVar1 = strlen(param_3);
  uVar5 = (uint)sVar1;
  if ((uVar5 == 0) || (__dest = malloc((ulong)(uVar5 + 1)), __dest == (char *)0x0)) {
LAB_001809e0:
    local_38 = 0x40000000;
  }
  else {
    *__dest = '\0';
    __dest[sVar1 & 0xffffffff] = '\0';
    local_40 = __dest;
    if (0 < (int)uVar5) {
      memcpy(__dest,param_3,sVar1 & 0xffffffff);
    }
    local_38 = uVar5 & 0x3fffffff;
    if ((sVar1 & 0x3fffffff) == 0) goto LAB_001809e0;
                    /* try { // try from 0018099f to 001809f7 has its CatchHandler @ 00180a25 */
    uVar4 = _toWideString((String *)&local_48,__dest,local_38,0);
    if ((char)uVar4 == '\0') goto LAB_001809f8;
    if ((param_4 != 0) && ((local_38 & 0x3fffffff) != 0)) {
      replace(this,param_1,param_2,local_40,param_4);
      goto LAB_001809f8;
    }
  }
  remove(this,param_1,param_2);
LAB_001809f8:
  local_48 = &PTR__String_00702c10;
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
  return this;
}


