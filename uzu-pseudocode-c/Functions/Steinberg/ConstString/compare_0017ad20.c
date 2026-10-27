// Function : compare
// Namespace: Steinberg:ConstString
// Entry    : 0017ad20
// Prototype: uint compare(ConstString * this, long * param_1, uint param_2, int param_3)
// Body     : 0017ad20 - 0017ae7e


/* Steinberg::ConstString::compare(Steinberg::ConstString const&, int,
   Steinberg::ConstString::CompareMode) const */

uint __thiscall
Steinberg::ConstString::compare(ConstString *this,long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  char *__s1;
  char *__s2;
  ushort *puVar2;
  ushort *puVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_1[1] != 0) && (uVar1 = *(uint *)(param_1 + 2), (uVar1 & 0x3fffffff) != 0)) {
      if (*(long *)(this + 8) == 0) {
        return 0xffffffff;
      }
      if ((*(uint *)(this + 0x10) & 0x3fffffff) == 0) {
        return 0xffffffff;
      }
      if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
        if ((uVar1 & 0x40000000) == 0) {
          __s1 = (char *)(**(code **)(*(long *)this + 0x18))();
          __s2 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
          if ((int)param_2 < 0) {
            if (param_3 == 0) {
              uVar1 = strcmp(__s1,__s2);
              return uVar1;
            }
            uVar1 = strcasecmp(__s1,__s2);
            return uVar1;
          }
          if (param_3 == 0) {
            uVar1 = strncmp(__s1,__s2,(ulong)param_2);
            return uVar1;
          }
          uVar1 = strncasecmp(__s1,__s2,(ulong)param_2);
          return uVar1;
        }
      }
      else if ((uVar1 & 0x40000000) != 0) {
        puVar2 = (ushort *)(**(code **)(*(long *)this + 0x20))();
        puVar3 = (ushort *)(**(code **)(*param_1 + 0x20))(param_1);
        if ((int)param_2 < 0) {
          if (param_3 == 0) {
            uVar1 = strcmp16(puVar2,puVar3);
            return uVar1;
          }
          uVar1 = stricmp16((long)puVar2,(long)puVar3);
          return uVar1;
        }
        if (param_3 == 0) {
          uVar1 = strncmp16(puVar2,puVar3,param_2);
          return uVar1;
        }
        uVar1 = strnicmp16((long)puVar2,(long)puVar3,param_2);
        return uVar1;
      }
      uVar1 = compareAt(this,0,param_1,param_2,param_3);
      return uVar1;
    }
    uVar1 = (uint)((*(uint *)(this + 0x10) & 0x3fffffff) != 0 && *(long *)(this + 8) != 0);
  }
  return uVar1;
}


