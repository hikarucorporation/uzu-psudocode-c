// Function : savePreset
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00196700
// Prototype: ulong savePreset(long * param_1, long param_2, long * param_3, long * param_4, char * param_5, uint param_6)
// Body     : 00196700 - 00196900


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::PresetFile::savePreset(Steinberg::IBStream*, Steinberg::FUID const&,
   Steinberg::Vst::IComponent*, Steinberg::Vst::IEditController*, char const*, int) */

ulong __cdecl
Steinberg::Vst::PresetFile::savePreset
          (long *param_1,long param_2,long *param_3,long *param_4,char *param_5,uint param_6)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long local_c90;
  undefined8 local_c88;
  long alStack_c80 [3];
  uint local_c64;
  undefined **local_c60;
  long *local_c58;
  undefined **local_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  long lStack_c30;
  long local_c28;
  undefined8 local_c20;
  long lStack_c18;
  long local_c10;
  undefined4 local_38;
  
  local_c60 = &PTR__PresetFile_00704268;
  local_c50 = &PTR__FUID_00704de0;
  local_c64 = param_6;
  local_c58 = param_1;
  memset(&local_c38,0,0xc04);
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  local_c48 = *(undefined8 *)(param_2 + 8);
  uStack_c40 = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 0019676f to 001968ca has its CatchHandler @ 00196909 */
  bVar2 = writeHeader((PresetFile *)&local_c60);
  if (bVar2) {
    alStack_c80[0] = 0;
    alStack_c80[1] = 0;
    local_c88 = 0x706d6f43;
    (**(code **)(*param_1 + 0x30))(param_1,alStack_c80);
    alStack_c80[1] = 0;
    iVar3 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
    if ((iVar3 == 3) || (iVar3 == 0)) {
      local_c90 = 0;
      (**(code **)(*param_1 + 0x30))(param_1,&local_c90);
      local_c28 = local_c90 - alStack_c80[0];
      local_38 = 1;
      local_c38 = local_c88;
      uVar1 = local_c38;
      lStack_c30 = alStack_c80[0];
      if (param_4 == (long *)0x0) {
LAB_001968a5:
        if (param_5 != (char *)0x0) {
          bVar2 = writeMetaInfo((PresetFile *)&local_c60,param_5,(ulong)local_c64,'\0');
          if (!bVar2) goto LAB_001968cf;
        }
        uVar4 = writeChunkList((PresetFile *)&local_c60);
        uVar4 = uVar4 & 0xffffffff;
        goto LAB_001968d1;
      }
      local_c38._0_4_ = (int)local_c88;
      bVar2 = (int)local_c38 != 0x746e6f43;
      local_c38 = uVar1;
      if (bVar2) {
        alStack_c80[0] = 0;
        alStack_c80[1] = 0;
        local_c88 = 0x746e6f43;
        (**(code **)(*param_1 + 0x30))(param_1,alStack_c80);
        alStack_c80[1] = 0;
        iVar3 = (**(code **)(*param_4 + 0x38))(param_4,param_1);
        if ((iVar3 == 3) || (iVar3 == 0)) {
          local_c90 = 0;
          (**(code **)(*param_1 + 0x30))(param_1,&local_c90);
          local_c10 = local_c90 - alStack_c80[0];
          local_38 = 2;
          local_c20 = local_c88;
          lStack_c18 = alStack_c80[0];
          goto LAB_001968a5;
        }
      }
    }
  }
LAB_001968cf:
  uVar4 = 0;
LAB_001968d1:
  local_c60 = &PTR__PresetFile_00704268;
  if (local_c58 != (long *)0x0) {
                    /* try { // try from 001968ea to 001968ec has its CatchHandler @ 00196901 */
    (**(code **)(*local_c58 + 0x10))();
  }
  return uVar4;
}


