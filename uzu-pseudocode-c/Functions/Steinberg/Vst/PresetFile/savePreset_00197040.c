// Function : savePreset
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197040
// Prototype: ulong savePreset(long * param_1, long param_2, long * param_3, long * param_4, char * param_5, uint param_6)
// Body     : 00197040 - 0019713e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::PresetFile::savePreset(Steinberg::IBStream*, Steinberg::FUID const&,
   Steinberg::IBStream*, Steinberg::IBStream*, char const*, int) */

ulong __cdecl
Steinberg::Vst::PresetFile::savePreset
          (long *param_1,long param_2,long *param_3,long *param_4,char *param_5,uint param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined **local_c60;
  long *local_c58;
  undefined **local_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined1 local_c38 [3080];
  
  local_c60 = &PTR__PresetFile_00704268;
  local_c50 = &PTR__FUID_00704de0;
  local_c58 = param_1;
  memset(local_c38,0,0xc04);
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  local_c48 = *(undefined8 *)(param_2 + 8);
  uStack_c40 = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 001970ae to 00197108 has its CatchHandler @ 00197147 */
  bVar1 = writeHeader((PresetFile *)&local_c60);
  if (bVar1) {
    bVar1 = storeComponentState((PresetFile *)&local_c60,param_3);
    if (bVar1) {
      if (param_4 != (long *)0x0) {
        bVar1 = storeControllerState((PresetFile *)&local_c60,param_4);
        if (!bVar1) goto LAB_0019710d;
      }
      if (param_5 != (char *)0x0) {
        bVar1 = writeMetaInfo((PresetFile *)&local_c60,param_5,(ulong)param_6,'\0');
        if (!bVar1) goto LAB_0019710d;
      }
      uVar2 = writeChunkList((PresetFile *)&local_c60);
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_0019710f;
    }
  }
LAB_0019710d:
  uVar2 = 0;
LAB_0019710f:
  local_c60 = &PTR__PresetFile_00704268;
  if (local_c58 != (long *)0x0) {
                    /* try { // try from 00197128 to 0019712a has its CatchHandler @ 0019713f */
    (**(code **)(*local_c58 + 0x10))();
  }
  return uVar2;
}


