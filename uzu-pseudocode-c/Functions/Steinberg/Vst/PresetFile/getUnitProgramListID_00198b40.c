// Function : getUnitProgramListID
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00198b40
// Prototype: undefined8 getUnitProgramListID(PresetFile * this, undefined8 param_1)
// Body     : 00198b40 - 00198be1


/* Steinberg::Vst::PresetFile::getUnitProgramListID(int&) */

undefined8 __thiscall
Steinberg::Vst::PresetFile::getUnitProgramListID(PresetFile *this,undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int local_24;
  long local_20;
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar1 = 0;
    do {
      if (*(int *)(this + lVar1 + 0x28) == 0x676f7250) {
        lVar1 = *(long *)(this + lVar1 + 0x30);
        local_20 = -1;
        (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),lVar1,0,&local_20);
        if (local_20 != lVar1) {
          return 0;
        }
        local_24 = 0;
        uVar2 = (**(code **)(**(long **)(this + 8) + 0x18))
                          (*(long **)(this + 8),param_1,4,&local_24);
        if (local_24 == 4) {
          return CONCAT71((int7)((ulong)uVar2 >> 8),1);
        }
        return 0;
      }
      lVar1 = lVar1 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar1);
  }
  return 0;
}


