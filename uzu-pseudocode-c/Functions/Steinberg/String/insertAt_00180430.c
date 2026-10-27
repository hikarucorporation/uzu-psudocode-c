// Function : insertAt
// Namespace: Steinberg:String
// Entry    : 00180430
// Prototype: String * insertAt(String * this, uint param_1, char * param_2, uint param_3)
// Body     : 00180430 - 001805d4


/* Steinberg::String::insertAt(unsigned int, char const*, int) */

String * __thiscall
Steinberg::String::insertAt(String *this,uint param_1,char *param_2,uint param_3)

{
  uint uVar1;
  size_t sVar2;
  char *__dest;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  void *__src;
  long lVar7;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  uVar6 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar6 < param_1) {
    return this;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    if (param_2 == (char *)0x0) {
      uVar1 = 0;
    }
    else {
      sVar2 = strlen(param_2);
      uVar1 = (uint)sVar2;
    }
    uVar5 = param_3;
    if (uVar1 < param_3) {
      uVar5 = uVar1;
    }
    if ((int)param_3 < 0) {
      uVar5 = uVar1;
    }
    if ((int)uVar5 < 1) {
      return this;
    }
    uVar4 = resize(this,uVar6 + uVar5,0,'\0');
    if ((char)uVar4 == '\0') {
      return this;
    }
    if ((param_2 != (char *)0x0) && (lVar7 = *(long *)(this + 8), lVar7 != 0)) {
      uVar6 = (*(uint *)(this + 0x10) & 0x3fffffff) - param_1;
      if (!((*(uint *)(this + 0x10) & 0x3fffffff) < param_1 || uVar6 == 0)) {
        __src = (void *)(lVar7 + (ulong)param_1);
        memmove((void *)((long)__src + (ulong)uVar5),__src,(ulong)uVar6);
        lVar7 = *(long *)(this + 8);
      }
      memcpy((void *)(lVar7 + (ulong)param_1),param_2,(ulong)uVar5);
    }
    *(uint *)(this + 0x10) =
         *(uint *)(this + 0x10) & 0xc0000000 | uVar5 + *(uint *)(this + 0x10) & 0x3fffffff;
    return this;
  }
  local_40 = (char *)0x0;
  local_48 = &PTR__String_00702c10;
  if (param_2 == (char *)0x0) {
LAB_001804ff:
    __dest = (char *)0x0;
LAB_00180501:
    local_38 = 0x40000000;
  }
  else {
    sVar2 = strlen(param_2);
    uVar6 = (uint)sVar2;
    if ((uVar6 == 0) || (__dest = malloc((ulong)(uVar6 + 1)), __dest == (char *)0x0))
    goto LAB_001804ff;
    *__dest = '\0';
    __dest[sVar2 & 0xffffffff] = '\0';
    local_40 = __dest;
    if (0 < (int)uVar6) {
      memcpy(__dest,param_2,sVar2 & 0xffffffff);
    }
    local_38 = uVar6 & 0x3fffffff;
    if ((sVar2 & 0x3fffffff) == 0) goto LAB_00180501;
                    /* try { // try from 001804de to 00180520 has its CatchHandler @ 001805d5 */
    uVar3 = _toWideString((String *)&local_48,__dest,local_38,0);
    if ((char)uVar3 == '\0') goto LAB_00180521;
    __dest = local_40;
  }
  insertAt(this,param_1,__dest,param_3);
LAB_00180521:
  local_48 = &PTR__String_00702c10;
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
  return this;
}


