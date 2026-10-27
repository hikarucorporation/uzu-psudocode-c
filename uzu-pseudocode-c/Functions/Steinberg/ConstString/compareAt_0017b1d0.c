// Function : compareAt
// Namespace: Steinberg:ConstString
// Entry    : 0017b1d0
// Prototype: uint compareAt(ConstString * this, uint param_1, long * param_2, uint param_3, int param_4)
// Body     : 0017b1d0 - 0017b547


/* Steinberg::ConstString::compareAt(unsigned int, Steinberg::ConstString const&, int,
   Steinberg::ConstString::CompareMode) const */

uint __thiscall
Steinberg::ConstString::compareAt
          (ConstString *this,uint param_1,long *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort *__s1;
  undefined **local_48;
  char *local_40;
  uint local_38;
  
  if (param_3 == 0) {
    return 0;
  }
  __s1 = *(ushort **)(this + 8);
  if ((param_2[1] == 0) || (uVar2 = *(uint *)(param_2 + 2), (uVar2 & 0x3fffffff) == 0)) {
    return (uint)((*(uint *)(this + 0x10) & 0x3fffffff) != 0 && __s1 != (ushort *)0x0);
  }
  if (__s1 == (ushort *)0x0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    if ((uVar2 & 0x40000000) == 0) {
      if (param_1 != 0) {
        if (uVar1 <= param_1) {
          return 0xffffffff;
        }
        __s1 = (ushort *)((long)__s1 + (ulong)param_1);
      }
      pcVar3 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
      if ((int)param_3 < 0) {
        if (param_4 == 0) {
          uVar2 = strcmp((char *)__s1,pcVar3);
          return uVar2;
        }
        uVar2 = strcasecmp((char *)__s1,pcVar3);
        return uVar2;
      }
      if (param_4 == 0) {
        uVar2 = strncmp((char *)__s1,pcVar3,(ulong)param_3);
        return uVar2;
      }
      uVar2 = strncasecmp((char *)__s1,pcVar3,(ulong)param_3);
      return uVar2;
    }
    pcVar3 = (char *)(**(code **)(*(long *)this + 0x18))(this);
    local_40 = (char *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar3 == (char *)0x0) {
LAB_0017b491:
      local_38 = 0x40000000;
    }
    else {
      sVar4 = strlen(pcVar3);
      uVar2 = (uint)sVar4;
      if ((uVar2 == 0) || (pcVar5 = malloc((ulong)(uVar2 + 1)), pcVar5 == (char *)0x0))
      goto LAB_0017b491;
      *pcVar5 = '\0';
      pcVar5[sVar4 & 0xffffffff] = '\0';
      local_40 = pcVar5;
      if (0 < (int)uVar2) {
        memcpy(pcVar5,pcVar3,sVar4 & 0xffffffff);
      }
      local_38 = uVar2 & 0x3fffffff;
      if ((sVar4 & 0x3fffffff) == 0) goto LAB_0017b491;
                    /* try { // try from 0017b3fa to 0017b40a has its CatchHandler @ 0017b548 */
      uVar6 = Steinberg::String::_toWideString((String *)&local_48,pcVar5,local_38,0);
      uVar2 = 1;
      if ((char)uVar6 == '\0') goto LAB_0017b4b4;
    }
                    /* try { // try from 0017b499 to 0017b4b0 has its CatchHandler @ 0017b548 */
    uVar2 = compareAt((ConstString *)&local_48,param_1,param_2,param_3,param_4);
    goto LAB_0017b4b4;
  }
  if ((uVar2 & 0x40000000) != 0) {
    if (param_1 != 0) {
      if (uVar1 <= param_1) {
        return 0xffffffff;
      }
      __s1 = __s1 + param_1;
    }
    puVar7 = (ushort *)(**(code **)(*param_2 + 0x20))(param_2);
    if ((int)param_3 < 0) {
      if (param_4 == 0) {
        uVar2 = strcmp16(__s1,puVar7);
        return uVar2;
      }
      uVar2 = stricmp16((long)__s1,(long)puVar7);
      return uVar2;
    }
    if (param_4 == 0) {
      uVar2 = strncmp16(__s1,puVar7,param_3);
      return uVar2;
    }
    uVar2 = strnicmp16((long)__s1,(long)puVar7,param_3);
    return uVar2;
  }
  pcVar3 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
  local_40 = (char *)0x0;
  local_48 = &PTR__String_00702c10;
  if (pcVar3 == (char *)0x0) {
LAB_0017b46f:
    local_38 = 0x40000000;
  }
  else {
    sVar4 = strlen(pcVar3);
    uVar2 = (uint)sVar4;
    if ((uVar2 == 0) || (pcVar5 = malloc((ulong)(uVar2 + 1)), pcVar5 == (char *)0x0))
    goto LAB_0017b46f;
    *pcVar5 = '\0';
    pcVar5[sVar4 & 0xffffffff] = '\0';
    local_40 = pcVar5;
    if (0 < (int)uVar2) {
      memcpy(pcVar5,pcVar3,sVar4 & 0xffffffff);
    }
    local_38 = uVar2 & 0x3fffffff;
    if ((sVar4 & 0x3fffffff) == 0) goto LAB_0017b46f;
                    /* try { // try from 0017b354 to 0017b364 has its CatchHandler @ 0017b54a */
    uVar6 = Steinberg::String::_toWideString((String *)&local_48,pcVar5,local_38,0);
    uVar2 = 0xffffffff;
    if ((char)uVar6 == '\0') goto LAB_0017b4b4;
  }
                    /* try { // try from 0017b477 to 0017b48e has its CatchHandler @ 0017b54a */
  uVar2 = compareAt(this,param_1,(long *)&local_48,param_3,param_4);
LAB_0017b4b4:
  local_48 = &PTR__String_00702c10;
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
  return uVar2;
}


