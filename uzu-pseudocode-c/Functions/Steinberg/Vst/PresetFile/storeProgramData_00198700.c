// Function : storeProgramData
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00198700
// Prototype: bool storeProgramData(PresetFile * this, long * param_1, undefined4 param_2)
// Body     : 00198700 - 00198840


/* Steinberg::Vst::PresetFile::storeProgramData(Steinberg::Vst::IUnitData*, int) */

bool __thiscall
Steinberg::Vst::PresetFile::storeProgramData(PresetFile *this,long *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_44;
  long local_40;
  undefined8 local_38;
  long alStack_30 [3];
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar3 = 0;
    do {
      if (*(int *)(this + lVar3 + 0x28) == 0x676f7250) {
        return false;
      }
      lVar3 = lVar3 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar3);
  }
  writeHeader(this);
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  if (*(int *)(this + 0xc28) < 0x80) {
    local_38 = 0x676f7250;
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),alStack_30);
    alStack_30[1] = 0;
    local_40 = CONCAT44(local_40._4_4_,param_2);
    local_44 = 0;
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_40,4,&local_44);
    if ((local_44 == 4) &&
       ((iVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,*(undefined8 *)(this + 8)),
        iVar2 == 3 || (iVar2 == 0)))) {
      iVar2 = *(int *)(this + 0xc28);
      if (iVar2 < 0x80) {
        local_40 = 0;
        (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),&local_40);
        iVar1 = *(int *)(this + 0xc28);
        *(int *)(this + 0xc28) = iVar1 + 1;
        *(long *)(this + (long)iVar1 * 0x18 + 0x38) = local_40 - alStack_30[0];
        *(undefined8 *)(this + (long)iVar1 * 0x18 + 0x28) = local_38;
        *(long *)(this + (long)iVar1 * 0x18 + 0x28 + 8) = alStack_30[0];
      }
      return iVar2 < 0x80;
    }
  }
  return false;
}


