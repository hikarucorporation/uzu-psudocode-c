// Function : storeControllerState
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00196b80
// Prototype: bool storeControllerState(PresetFile * this, long * param_1)
// Body     : 00196b80 - 00196c94


/* Steinberg::Vst::PresetFile::storeControllerState(Steinberg::Vst::IEditController*) */

bool __thiscall Steinberg::Vst::PresetFile::storeControllerState(PresetFile *this,long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long alStack_30 [3];
  
  uVar1 = *(uint *)(this + 0xc28);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      if (*(int *)(this + lVar4 + 0x28) == 0x746e6f43) {
        return false;
      }
      lVar4 = lVar4 + 0x18;
    } while ((ulong)uVar1 * 0x18 != lVar4);
    if (0x7f < (int)uVar1) {
      return false;
    }
  }
  alStack_30[1] = 0;
  alStack_30[0] = 0;
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),alStack_30);
  alStack_30[1] = 0;
  iVar3 = (**(code **)(*param_1 + 0x38))(param_1,*(undefined8 *)(this + 8));
  if ((iVar3 != 3) && (iVar3 != 0)) {
    return false;
  }
  iVar3 = *(int *)(this + 0xc28);
  if (iVar3 < 0x80) {
    alStack_30[2] = 0;
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),alStack_30 + 2);
    iVar2 = *(int *)(this + 0xc28);
    *(int *)(this + 0xc28) = iVar2 + 1;
    *(long *)(this + (long)iVar2 * 0x18 + 0x38) = alStack_30[2] - alStack_30[0];
    *(undefined8 *)(this + (long)iVar2 * 0x18 + 0x28) = 0x746e6f43;
    *(long *)(this + (long)iVar2 * 0x18 + 0x28 + 8) = alStack_30[0];
  }
  return iVar3 < 0x80;
}


