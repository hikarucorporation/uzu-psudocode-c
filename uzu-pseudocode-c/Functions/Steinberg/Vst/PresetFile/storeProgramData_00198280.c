// Function : storeProgramData
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00198280
// Prototype: bool storeProgramData(PresetFile * this, long * param_1, undefined4 param_2)
// Body     : 00198280 - 0019841c


/* Steinberg::Vst::PresetFile::storeProgramData(Steinberg::IBStream*, int) */

bool __thiscall
Steinberg::Vst::PresetFile::storeProgramData(PresetFile *this,long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int local_2060 [2];
  undefined8 local_2058;
  long alStack_2050 [3];
  long local_2038 [1025];
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar4 = 0;
    do {
      if (*(int *)(this + lVar4 + 0x28) == 0x676f7250) {
        return false;
      }
      lVar4 = lVar4 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar4);
  }
  writeHeader(this);
  alStack_2050[0] = 0;
  alStack_2050[1] = 0;
  if (*(int *)(this + 0xc28) < 0x80) {
    local_2058 = 0x676f7250;
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),alStack_2050);
    alStack_2050[1] = 0;
    local_2038[0] = CONCAT44(local_2038[0]._4_4_,param_2);
    local_2060[0] = 0;
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),local_2038,4,local_2060);
    if (local_2060[0] == 4) {
      if (param_1 == (long *)0x0) {
        return false;
      }
      plVar2 = *(long **)(this + 8);
      if (plVar2 == (long *)0x0) {
        return false;
      }
      local_2060[0] = 0;
      local_2060[1] = 0;
      do {
        iVar3 = (**(code **)(*param_1 + 0x18))(param_1,local_2038,0x2000,local_2060);
        if ((iVar3 != 0) || (local_2060[0] < 1)) {
          iVar3 = *(int *)(this + 0xc28);
          if (iVar3 < 0x80) {
            local_2038[0] = 0;
            (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),local_2038);
            iVar1 = *(int *)(this + 0xc28);
            *(int *)(this + 0xc28) = iVar1 + 1;
            *(long *)(this + (long)iVar1 * 0x18 + 0x38) = local_2038[0] - alStack_2050[0];
            *(undefined8 *)(this + (long)iVar1 * 0x18 + 0x28) = local_2058;
            *(long *)(this + (long)iVar1 * 0x18 + 0x28 + 8) = alStack_2050[0];
          }
          return iVar3 < 0x80;
        }
        iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,local_2038,local_2060[0],local_2060 + 1);
      } while (iVar3 == 0);
    }
  }
  return false;
}


