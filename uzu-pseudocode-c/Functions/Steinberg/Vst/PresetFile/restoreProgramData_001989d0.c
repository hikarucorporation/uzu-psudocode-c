// Function : restoreProgramData
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 001989d0
// Prototype: bool restoreProgramData(PresetFile * this, long * param_1, int param_2, undefined4 param_3)
// Body     : 001989d0 - 00198b0c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Steinberg::Vst::PresetFile::restoreProgramData(Steinberg::Vst::IUnitInfo*, int, int) */

bool __thiscall
Steinberg::Vst::PresetFile::restoreProgramData
          (PresetFile *this,long *param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong local_40;
  int local_38;
  undefined4 local_34;
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar6 = 0;
    do {
      if (*(int *)(this + lVar6 + 0x28) == 0x676f7250) {
        local_38 = -1;
        uVar1 = *(ulong *)(this + lVar6 + 0x30);
        local_40 = 0xffffffffffffffff;
        local_34 = param_3;
        (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),uVar1,0,&local_40);
        if (local_40 != uVar1) {
          return false;
        }
        local_40 = local_40 & 0xffffffff00000000;
        (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_38,4,&local_40);
        if ((int)local_40 != 4) {
          return false;
        }
        if (local_38 != param_2) {
          return false;
        }
        puVar4 = operator_new(0x30);
        lVar8 = *(long *)(this + lVar6 + 0x30) + _DAT_005d9a50;
        lVar6 = *(long *)(this + lVar6 + 0x30 + 8) + _UNK_005d9a58;
        plVar2 = *(long **)(this + 8);
        ppuVar5 = &PTR_queryInterface_007042e0;
        *puVar4 = &PTR_queryInterface_007042e0;
        puVar4[2] = plVar2;
        puVar4[3] = lVar8;
        puVar4[4] = lVar6;
        puVar4[5] = 0;
        *(undefined4 *)(puVar4 + 1) = 1;
        if (plVar2 != (long *)0x0) {
                    /* try { // try from 00198ad9 to 00198adb has its CatchHandler @ 00198b24 */
          (**(code **)(*plVar2 + 8))();
        }
        if (param_1 == (long *)0x0) {
          bVar7 = false;
        }
        else {
                    /* try { // try from 00198ae5 to 00198af4 has its CatchHandler @ 00198b0d */
          iVar3 = (**(code **)(*param_1 + 0x70))(param_1,param_2,local_34,puVar4);
          bVar7 = iVar3 != 0;
          ppuVar5 = (undefined **)*puVar4;
        }
                    /* try { // try from 00198b02 to 00198b07 has its CatchHandler @ 00198b37 */
        (*(code *)ppuVar5[2])(puVar4);
        return bVar7;
      }
      lVar6 = lVar6 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar6);
  }
  return false;
}


