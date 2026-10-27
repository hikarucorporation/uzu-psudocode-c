// Function : restoreComponentState
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197890
// Prototype: ulong restoreComponentState(PresetFile * this, long * param_1)
// Body     : 00197890 - 0019794c


/* Steinberg::Vst::PresetFile::restoreComponentState(Steinberg::Vst::IComponent*) */

ulong __thiscall Steinberg::Vst::PresetFile::restoreComponentState(PresetFile *this,long *param_1)

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
  ulong uVar10;
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar9 = 0;
    do {
      if (*(int *)(this + lVar9 + 0x28) == 0x706d6f43) {
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
                    /* try { // try from 0019791b to 0019791d has its CatchHandler @ 0019794d */
          (**(code **)(*plVar2 + 8))();
        }
                    /* try { // try from 00197921 to 00197929 has its CatchHandler @ 00197962 */
        iVar7 = (**(code **)(*param_1 + 0x60))(param_1,plVar8);
                    /* try { // try from 00197939 to 0019793e has its CatchHandler @ 0019795a */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar10 = CONCAT71((int7)((ulong)lVar9 >> 8),iVar7 == 0 || iVar7 == 3);
        goto LAB_00197942;
      }
      lVar9 = lVar9 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar9);
  }
  uVar10 = 0;
LAB_00197942:
  return uVar10 & 0xffffffff;
}


