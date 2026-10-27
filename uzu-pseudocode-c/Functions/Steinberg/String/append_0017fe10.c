// Function : append
// Namespace: Steinberg:String
// Entry    : 0017fe10
// Prototype: String * append(String * this, char * param_1, uint param_2)
// Body     : 0017fe10 - 0017fffa


/* Steinberg::String::append(char const*, int) */

String * __thiscall Steinberg::String::append(String *this,char *param_1,uint param_2)

{
  size_t sVar1;
  char *__dest;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  if (*(char **)(this + 8) == param_1) {
    return this;
  }
  uVar5 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar5 == 0) {
    if (param_1 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      sVar1 = strlen(param_1);
      uVar5 = (uint)sVar1;
    }
    uVar6 = param_2;
    if (uVar5 < param_2) {
      uVar6 = uVar5;
    }
    if ((int)param_2 < 0) {
      uVar6 = uVar5;
    }
    uVar3 = resize(this,uVar6,0,'\0');
    if ((char)uVar3 == '\0') {
      return this;
    }
    if (((param_1 != (char *)0x0) && (0 < (int)uVar6)) && (*(void **)(this + 8) != (void *)0x0)) {
      memcpy(*(void **)(this + 8),param_1,(ulong)uVar6);
    }
    uVar5 = *(uint *)(this + 0x10) & 0x80000000 | uVar6 & 0x3fffffff;
LAB_0017ffe5:
    *(uint *)(this + 0x10) = uVar5;
    return this;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    if (param_1 == (char *)0x0) {
      uVar6 = 0;
    }
    else {
      sVar1 = strlen(param_1);
      uVar6 = (uint)sVar1;
    }
    uVar4 = param_2;
    if (uVar6 < param_2) {
      uVar4 = uVar6;
    }
    if ((int)param_2 < 0) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 1) {
      return this;
    }
    uVar3 = resize(this,uVar5 + uVar4,0,'\0');
    if ((char)uVar3 == '\0') {
      return this;
    }
    if ((param_1 != (char *)0x0) && (*(long *)(this + 8) != 0)) {
      memcpy((void *)(*(long *)(this + 8) + (ulong)(*(uint *)(this + 0x10) & 0x3fffffff)),param_1,
             (ulong)uVar4);
    }
    uVar5 = *(uint *)(this + 0x10) & 0xc0000000 | uVar4 + *(uint *)(this + 0x10) & 0x3fffffff;
    goto LAB_0017ffe5;
  }
  local_40 = (char *)0x0;
  local_48 = &PTR__String_00702c10;
  if (param_1 == (char *)0x0) {
LAB_0017fef8:
    __dest = (char *)0x0;
LAB_0017fefa:
    local_38 = 0x40000000;
  }
  else {
    sVar1 = strlen(param_1);
    uVar5 = (uint)sVar1;
    if ((uVar5 == 0) || (__dest = malloc((ulong)(uVar5 + 1)), __dest == (char *)0x0))
    goto LAB_0017fef8;
    *__dest = '\0';
    __dest[sVar1 & 0xffffffff] = '\0';
    local_40 = __dest;
    if (0 < (int)uVar5) {
      memcpy(__dest,param_1,sVar1 & 0xffffffff);
    }
    local_38 = uVar5 & 0x3fffffff;
    if ((sVar1 & 0x3fffffff) == 0) goto LAB_0017fefa;
                    /* try { // try from 0017fedd to 0017ff0f has its CatchHandler @ 0017fffb */
    uVar2 = _toWideString((String *)&local_48,__dest,local_38,0);
    if ((char)uVar2 == '\0') goto LAB_0017ff13;
    __dest = local_40;
  }
  this = append(this,__dest,param_2);
LAB_0017ff13:
  local_48 = &PTR__String_00702c10;
  if (local_40 == (char *)0x0) {
    return this;
  }
  free(local_40);
  return this;
}


