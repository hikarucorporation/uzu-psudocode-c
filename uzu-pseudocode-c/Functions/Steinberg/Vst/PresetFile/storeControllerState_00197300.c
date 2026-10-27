// Function : storeControllerState
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197300
// Prototype: bool storeControllerState(PresetFile * this, long * param_1)
// Body     : 00197300 - 0019747e


/* Steinberg::Vst::PresetFile::storeControllerState(Steinberg::IBStream*) */

bool __thiscall Steinberg::Vst::PresetFile::storeControllerState(PresetFile *this,long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  int local_2060 [2];
  undefined8 local_2058;
  long alStack_2050 [3];
  long local_2038 [1025];
  
  uVar1 = *(uint *)(this + 0xc28);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    do {
      if (*(int *)(this + lVar5 + 0x28) == 0x746e6f43) {
        return false;
      }
      lVar5 = lVar5 + 0x18;
    } while ((ulong)uVar1 * 0x18 != lVar5);
    if (0x7f < (int)uVar1) {
      return false;
    }
  }
  alStack_2050[1] = 0;
  alStack_2050[0] = 0;
  local_2058 = 0x746e6f43;
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),alStack_2050);
  alStack_2050[1] = 0;
  if (param_1 == (long *)0x0) {
    return false;
  }
  plVar3 = *(long **)(this + 8);
  if (plVar3 == (long *)0x0) {
    return false;
  }
  local_2060[0] = 0;
  local_2060[1] = 0;
  while ((iVar4 = (**(code **)(*param_1 + 0x18))(param_1,local_2038,0x2000,local_2060), iVar4 == 0
         && (0 < local_2060[0]))) {
    iVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,local_2038,local_2060[0],local_2060 + 1);
    if (iVar4 != 0) {
      return false;
    }
  }
  iVar4 = *(int *)(this + 0xc28);
  if (iVar4 < 0x80) {
    local_2038[0] = 0;
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),local_2038);
    iVar2 = *(int *)(this + 0xc28);
    *(int *)(this + 0xc28) = iVar2 + 1;
    *(long *)(this + (long)iVar2 * 0x18 + 0x38) = local_2038[0] - alStack_2050[0];
    *(undefined8 *)(this + (long)iVar2 * 0x18 + 0x28) = local_2058;
    *(long *)(this + (long)iVar2 * 0x18 + 0x28 + 8) = alStack_2050[0];
  }
  return iVar4 < 0x80;
}


