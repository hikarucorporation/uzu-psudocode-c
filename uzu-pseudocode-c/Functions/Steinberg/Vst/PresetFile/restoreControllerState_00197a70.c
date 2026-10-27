// Function : restoreControllerState
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197a70
// Prototype: ulong restoreControllerState(PresetFile * this, long * param_1)
// Body     : 00197a70 - 00197b34


/* Steinberg::Vst::PresetFile::restoreControllerState(Steinberg::Vst::IEditController*) */

ulong __thiscall Steinberg::Vst::PresetFile::restoreControllerState(PresetFile *this,long *param_1)

{
  PresetFile *pPVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined7 uVar11;
  ulong uVar10;
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar9 = 0;
    do {
      if (*(int *)(this + lVar9 + 0x28) == 0x746e6f43) {
        plVar8 = operator_new(0x30);
        plVar2 = *(long **)(this + 8);
        pPVar1 = this + lVar9 + 0x30;
        uVar3 = *(undefined4 *)pPVar1;
        uVar4 = *(undefined4 *)(pPVar1 + 4);
        uVar5 = *(undefined4 *)(pPVar1 + 8);
        uVar6 = *(undefined4 *)(pPVar1 + 0xc);
        *plVar8 = (long)&PTR_queryInterface_007042e0;
        plVar8[2] = (long)plVar2;
        *(undefined4 *)(plVar8 + 3) = uVar3;
        *(undefined4 *)((long)plVar8 + 0x1c) = uVar4;
        *(undefined4 *)(plVar8 + 4) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x24) = uVar6;
        plVar8[5] = 0;
        *(undefined4 *)(plVar8 + 1) = 1;
        if (plVar2 != (long *)0x0) {
                    /* try { // try from 00197af9 to 00197afb has its CatchHandler @ 00197b35 */
          (**(code **)(*plVar2 + 8))();
        }
                    /* try { // try from 00197aff to 00197b07 has its CatchHandler @ 00197b4a */
        iVar7 = (**(code **)(*param_1 + 0x30))(param_1,plVar8);
        uVar11 = (undefined7)((ulong)param_1 >> 8);
        uVar10 = CONCAT71(uVar11,1);
        if ((iVar7 != 0) && (iVar7 != 3)) {
          uVar10 = CONCAT71(uVar11,*(long *)(this + lVar9 + 0x38) == 0);
        }
                    /* try { // try from 00197b21 to 00197b26 has its CatchHandler @ 00197b42 */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        goto LAB_00197b27;
      }
      lVar9 = lVar9 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar9);
  }
  uVar10 = 0;
LAB_00197b27:
  return uVar10 & 0xffffffff;
}


