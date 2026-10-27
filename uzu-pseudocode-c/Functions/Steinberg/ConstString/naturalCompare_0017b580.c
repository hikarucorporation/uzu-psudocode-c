// Function : naturalCompare
// Namespace: Steinberg:ConstString
// Entry    : 0017b580
// Prototype: uint naturalCompare(ConstString * this, long * param_1, int param_2)
// Body     : 0017b580 - 0017b8a5


/* Steinberg::ConstString::naturalCompare(Steinberg::ConstString const&,
   Steinberg::ConstString::CompareMode) const */

uint __thiscall Steinberg::ConstString::naturalCompare(ConstString *this,long *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  size_t sVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined **local_48;
  ushort *local_40;
  uint local_38;
  
  puVar4 = *(ushort **)(this + 8);
  if ((param_1[1] == 0) || (uVar1 = *(uint *)(param_1 + 2), (uVar1 & 0x3fffffff) == 0)) {
    return (uint)((*(uint *)(this + 0x10) & 0x3fffffff) != 0 && puVar4 != (ushort *)0x0);
  }
  if (puVar4 == (ushort *)0x0) {
    return 0xffffffff;
  }
  if ((*(uint *)(this + 0x10) & 0x3fffffff) == 0) {
    return 0xffffffff;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) != 0) {
    if ((uVar1 & 0x40000000) != 0) {
      puVar5 = (ushort *)(**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = tstrnatcmp<char16_t>(puVar4,puVar5,param_2 == 0);
      return uVar1;
    }
    pcVar2 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
    local_40 = (ushort *)0x0;
    local_48 = &PTR__String_00702c10;
    if (pcVar2 == (char *)0x0) {
LAB_0017b80e:
      local_38 = 0x40000000;
      puVar4 = *(ushort **)(this + 8);
      uVar1 = 0x40000000;
    }
    else {
      sVar3 = strlen(pcVar2);
      uVar1 = (uint)sVar3;
      if ((uVar1 == 0) || (puVar4 = malloc((ulong)(uVar1 + 1)), puVar4 == (ushort *)0x0))
      goto LAB_0017b80e;
      *(char *)puVar4 = '\0';
      *(char *)((long)puVar4 + (sVar3 & 0xffffffff)) = '\0';
      local_40 = puVar4;
      if (0 < (int)uVar1) {
        memcpy(puVar4,pcVar2,sVar3 & 0xffffffff);
      }
      local_38 = uVar1 & 0x3fffffff;
      if ((sVar3 & 0x3fffffff) == 0) goto LAB_0017b80e;
                    /* try { // try from 0017b6b8 to 0017b702 has its CatchHandler @ 0017b8a6 */
      Steinberg::String::_toWideString((String *)&local_48,(char *)puVar4,local_38,0);
      puVar4 = *(ushort **)(this + 8);
      uVar1 = local_38 & 0x40000000;
      if (((uVar1 == 0) && (uVar1 = 0, local_40 != (ushort *)0x0)) && ((local_38 & 0x3fffffff) != 0)
         ) {
        Steinberg::String::_toWideString
                  ((String *)&local_48,(char *)local_40,local_38 & 0x3fffffff,0);
        uVar1 = local_38 & 0x40000000;
      }
    }
    puVar5 = local_40;
    if (local_40 == (ushort *)0x0) {
      puVar5 = &kEmptyString16;
    }
    if (uVar1 == 0) {
      puVar5 = &kEmptyString16;
    }
    goto LAB_0017b883;
  }
  if ((uVar1 & 0x40000000) == 0) {
    pcVar2 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
    uVar1 = tstrnatcmp<char>((char *)puVar4,pcVar2,param_2 == 0);
    return uVar1;
  }
  pcVar2 = (char *)(**(code **)(*(long *)this + 0x18))(this);
  local_40 = (ushort *)0x0;
  local_48 = &PTR__String_00702c10;
  if (pcVar2 == (char *)0x0) {
LAB_0017b846:
    local_38 = 0x40000000;
    uVar1 = 0x40000000;
  }
  else {
    sVar3 = strlen(pcVar2);
    uVar1 = (uint)sVar3;
    if ((uVar1 == 0) || (puVar4 = malloc((ulong)(uVar1 + 1)), puVar4 == (ushort *)0x0))
    goto LAB_0017b846;
    *(char *)puVar4 = '\0';
    *(char *)((long)puVar4 + (sVar3 & 0xffffffff)) = '\0';
    local_40 = puVar4;
    if (0 < (int)uVar1) {
      memcpy(puVar4,pcVar2,sVar3 & 0xffffffff);
    }
    local_38 = uVar1 & 0x3fffffff;
    if ((sVar3 & 0x3fffffff) == 0) goto LAB_0017b846;
                    /* try { // try from 0017b792 to 0017b7d8 has its CatchHandler @ 0017b8a8 */
    Steinberg::String::_toWideString((String *)&local_48,(char *)puVar4,local_38,0);
    uVar1 = local_38 & 0x40000000;
    if (((uVar1 == 0) && (uVar1 = 0, local_40 != (ushort *)0x0)) && ((local_38 & 0x3fffffff) != 0))
    {
      Steinberg::String::_toWideString((String *)&local_48,(char *)local_40,local_38 & 0x3fffffff,0)
      ;
      uVar1 = local_38 & 0x40000000;
    }
  }
  puVar4 = local_40;
                    /* try { // try from 0017b85b to 0017b860 has its CatchHandler @ 0017b8a8 */
  puVar5 = (ushort *)(**(code **)(*param_1 + 0x20))(param_1);
  if (puVar4 == (ushort *)0x0) {
    puVar4 = &kEmptyString16;
  }
  if (uVar1 == 0) {
    puVar4 = &kEmptyString16;
  }
LAB_0017b883:
  uVar1 = tstrnatcmp<char16_t>(puVar4,puVar5,param_2 == 0);
  local_48 = &PTR__String_00702c10;
  if (local_40 != (ushort *)0x0) {
    free(local_40);
  }
  return uVar1;
}


