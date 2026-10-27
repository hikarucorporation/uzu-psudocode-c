// Function : restoreProgramData
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00198570
// Prototype: bool restoreProgramData(PresetFile * this, long * param_1, int * param_2, undefined4 param_3)
// Body     : 00198570 - 001986c3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Steinberg::Vst::PresetFile::restoreProgramData(Steinberg::Vst::IProgramListData*, int*, int) */

bool __thiscall
Steinberg::Vst::PresetFile::restoreProgramData
          (PresetFile *this,long *param_1,int *param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  int local_44;
  ulong local_40;
  undefined4 local_34;
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar7 = 0;
    do {
      if (*(int *)(this + lVar7 + 0x28) == 0x676f7250) {
        local_44 = -1;
        uVar1 = *(ulong *)(this + lVar7 + 0x30);
        local_40 = 0xffffffffffffffff;
        local_34 = param_3;
        (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),uVar1,0,&local_40);
        if (local_40 != uVar1) {
          return false;
        }
        local_40 = local_40 & 0xffffffff00000000;
        (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_44,4,&local_40);
        if ((int)local_40 != 4) {
          return false;
        }
        if ((param_2 != (int *)0x0) && (*param_2 != local_44)) {
          return false;
        }
        puVar4 = operator_new(0x30);
        lVar8 = *(long *)(this + lVar7 + 0x30) + _DAT_005d9a50;
        lVar7 = *(long *)(this + lVar7 + 0x30 + 8) + _UNK_005d9a58;
        plVar2 = *(long **)(this + 8);
        ppuVar6 = &PTR_queryInterface_007042e0;
        *puVar4 = &PTR_queryInterface_007042e0;
        puVar4[2] = plVar2;
        puVar4[3] = lVar8;
        puVar4[4] = lVar7;
        puVar4[5] = 0;
        *(undefined4 *)(puVar4 + 1) = 1;
        if (plVar2 != (long *)0x0) {
                    /* try { // try from 00198678 to 0019867a has its CatchHandler @ 001986da */
          (**(code **)(*plVar2 + 8))();
        }
        if (param_1 == (long *)0x0) {
          bVar5 = false;
        }
        else {
                    /* try { // try from 00198688 to 00198694 has its CatchHandler @ 001986c4 */
          iVar3 = (**(code **)(*param_1 + 0x28))(param_1,local_44,local_34,puVar4);
          bVar5 = iVar3 == 3 || iVar3 == 0;
          ppuVar6 = (undefined **)*puVar4;
        }
                    /* try { // try from 001986bc to 001986c1 has its CatchHandler @ 001986ed */
        (*(code *)ppuVar6[2])(puVar4);
        return bVar5;
      }
      lVar7 = lVar7 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar7);
  }
  return false;
}


