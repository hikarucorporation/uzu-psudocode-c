// Function : seekToControllerState
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00198210
// Prototype: bool seekToControllerState(PresetFile * this)
// Body     : 00198210 - 0019827a


/* Steinberg::Vst::PresetFile::seekToControllerState() */

bool __thiscall Steinberg::Vst::PresetFile::seekToControllerState(PresetFile *this)

{
  long lVar1;
  long local_10;
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar1 = 0;
    do {
      if (*(int *)(this + lVar1 + 0x28) == 0x746e6f43) {
        lVar1 = *(long *)(this + lVar1 + 0x30);
        local_10 = -1;
        (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),lVar1,0,&local_10);
        return local_10 == lVar1;
      }
      lVar1 = lVar1 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar1);
  }
  return false;
}


