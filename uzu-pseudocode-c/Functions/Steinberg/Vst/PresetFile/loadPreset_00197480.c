// Function : loadPreset
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197480
// Prototype: ulong loadPreset(long * param_1, long param_2, long * param_3, long * param_4, long * param_5)
// Body     : 00197480 - 001975d3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::PresetFile::loadPreset(Steinberg::IBStream*, Steinberg::FUID const&,
   Steinberg::Vst::IComponent*, Steinberg::Vst::IEditController*, std::vector<Steinberg::FUID,
   std::allocator<Steinberg::FUID> >*) */

ulong __cdecl
Steinberg::Vst::PresetFile::loadPreset
          (long *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined **local_c60;
  long *local_c58;
  undefined **local_c50;
  long local_c48;
  long local_c40;
  int aiStack_c38 [768];
  uint local_38;
  
  local_c60 = &PTR__PresetFile_00704268;
  local_c50 = &PTR__FUID_00704de0;
  local_c58 = param_1;
  memset(&local_c48,0,0xc14);
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
                    /* try { // try from 001974dc to 001974e5 has its CatchHandler @ 001975de */
  uVar1 = readChunkList((PresetFile *)&local_c60);
                    /* try { // try from 0019751b to 0019751f has its CatchHandler @ 001975d4 */
                    /* try { // try from 0019752b to 00197591 has its CatchHandler @ 001975de */
  if ((((char)uVar1 == '\0') ||
      (((local_c48 != *(long *)(param_2 + 8) || (local_c40 != *(long *)(param_2 + 0x10))) &&
       ((param_5 == (long *)0x0 ||
        (lVar2 = std::
                 __find_if<__gnu_cxx::__normal_iterator<Steinberg::FUID*,std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID_const>>
                           (*param_5,param_5[1],(long)&local_c50), lVar2 == param_5[1])))))) ||
     (uVar1 = restoreComponentState((PresetFile *)&local_c60,param_3), (char)uVar1 == '\0')) {
LAB_001975a9:
    uVar1 = 0;
  }
  else {
    if (param_4 != (long *)0x0) {
      uVar1 = restoreComponentState((PresetFile *)&local_c60,param_4);
      if ((char)uVar1 == '\0') goto LAB_001975a9;
      if (0 < (int)local_38) {
        lVar2 = 0;
        do {
          if (*(int *)((long)aiStack_c38 + lVar2) == 0x746e6f43) {
            uVar1 = restoreControllerState((PresetFile *)&local_c60,param_4);
            if ((char)uVar1 == '\0') goto LAB_001975a9;
            break;
          }
          lVar2 = lVar2 + 0x18;
        } while ((ulong)local_38 * 0x18 != lVar2);
      }
    }
    uVar1 = CONCAT71((int7)((ulong)param_1 >> 8),1);
  }
  if (local_c58 != (long *)0x0) {
    local_c60 = &PTR__PresetFile_00704268;
                    /* try { // try from 001975bd to 001975bf has its CatchHandler @ 001975d6 */
    (**(code **)(*local_c58 + 0x10))();
  }
  return uVar1 & 0xffffffff;
}


