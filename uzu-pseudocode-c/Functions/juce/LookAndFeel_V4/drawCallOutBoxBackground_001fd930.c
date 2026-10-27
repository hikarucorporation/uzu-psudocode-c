// Function : drawCallOutBoxBackground
// Namespace: juce:LookAndFeel_V4
// Entry    : 001fd930
// Prototype: undefined drawCallOutBoxBackground(LookAndFeel_V4 * this, long param_1, Graphics * param_2, undefined8 * param_3, long * param_4)
// Body     : 001fd930 - 001fdc54


/* juce::LookAndFeel_V4::drawCallOutBoxBackground(juce::CallOutBox&, juce::Graphics&, juce::Path
   const&, juce::Image&) */

void __thiscall
juce::LookAndFeel_V4::drawCallOutBoxBackground
          (LookAndFeel_V4 *this,long param_1,Graphics *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  char cVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 local_58 [16];
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  
  if (*param_4 != 0) goto LAB_001fda69;
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  (**(code **)(**(long **)(param_2 + 8) + 0x110))(&local_40);
                    /* try { // try from 001fd975 to 001fd98a has its CatchHandler @ 001fdc70 */
  (**(code **)(*local_40 + 0x10))(local_58,local_40,2,uVar4,uVar5,1);
  plVar6 = (long *)*param_4;
  *param_4 = local_58._0_8_;
  local_58._0_8_ = plVar6;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  plVar6 = (long *)*param_4;
  if (plVar6 == (long *)0x0) {
LAB_001fda0b:
    local_58._0_8_ = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
                    /* try { // try from 001fd9ce to 001fd9e2 has its CatchHandler @ 001fdc5e */
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x28))(plVar6);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,0);
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if ((long *)*param_4 == (long *)0x0) goto LAB_001fda0b;
    (**(code **)(*(long *)*param_4 + 0x10))(local_58);
  }
  local_58._8_8_ = local_58._0_8_;
  local_48 = local_48 & 0xffffffffffffff00;
  local_40 = (long *)CONCAT44(8,_ZN4juce7ColoursL5blackE_14 & 0xffffff | 0xb2000000);
  local_38 = 0x200000000;
                    /* try { // try from 001fda4a to 001fda59 has its CatchHandler @ 001fdc55 */
  DropShadow::drawForPath((DropShadow *)&local_40,(Graphics *)local_58,param_3);
  if ((long *)local_58._0_8_ != (long *)0x0) {
    (**(code **)(*(long *)local_58._0_8_ + 8))();
  }
LAB_001fda69:
  Graphics::setColour(param_2,_ZN4juce7ColoursL5blackE_14);
  local_58 = ZEXT416(DAT_005d9038);
  local_48 = 0x3f800000;
  if (*param_4 != 0) {
    cVar7 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar7 == '\0') {
      (**(code **)(**(long **)(param_2 + 8) + 0xe0))(*(long **)(param_2 + 8),param_4,local_58);
    }
  }
  Graphics::setColour(param_2,*(uint *)(this + 0x160) & 0xffffff | 0xcc000000);
  cVar7 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar7 == '\0') && ((long)*(int *)((long)param_3 + 0xc) != 0)) {
    pfVar9 = (float *)*param_3;
    pfVar2 = pfVar9 + *(int *)((long)param_3 + 0xc);
    do {
      fVar3 = *pfVar9;
      if ((fVar3 != DAT_005de3d0) || (NAN(fVar3) || NAN(DAT_005de3d0))) {
        if ((fVar3 != DAT_005de3d4) || (NAN(fVar3) || NAN(DAT_005de3d4))) {
          if (((fVar3 != DAT_005de3d8) || (NAN(fVar3) || NAN(DAT_005de3d8))) &&
             ((fVar3 != DAT_005de3dc || (NAN(fVar3) || NAN(DAT_005de3dc))))) goto LAB_001fdb24;
        }
        local_58 = ZEXT416(DAT_005d9038);
        local_48 = 0x3f800000;
        (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),param_3,local_58);
        break;
      }
      pfVar9 = pfVar9 + 2;
LAB_001fdb24:
      pfVar9 = pfVar9 + 1;
    } while (pfVar9 != pfVar2);
  }
  Graphics::setColour(param_2,*(uint *)(this + 0x168) & 0xffffff | 0xcc000000);
  local_40 = (long *)0x40000000;
  local_38 = local_38 & 0xffffffff00000000;
  local_58 = ZEXT416(DAT_005d9038);
  local_48 = 0x3f800000;
  cVar7 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar7 == '\0') && ((long)*(int *)((long)param_3 + 0xc) != 0)) {
    pfVar9 = (float *)*param_3;
    pfVar2 = pfVar9 + *(int *)((long)param_3 + 0xc);
    do {
      fVar3 = *pfVar9;
      if ((fVar3 != DAT_005de3d0) || (NAN(fVar3) || NAN(DAT_005de3d0))) {
        if ((fVar3 == DAT_005de3d4) && (!NAN(fVar3) && !NAN(DAT_005de3d4))) {
LAB_001fdc2d:
          (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                    (*(long **)(param_2 + 8),param_3,&local_40,local_58);
          return;
        }
        if (((fVar3 == DAT_005de3d8) && (!NAN(fVar3) && !NAN(DAT_005de3d8))) ||
           ((fVar3 == DAT_005de3dc && (!NAN(fVar3) && !NAN(DAT_005de3dc))))) goto LAB_001fdc2d;
      }
      else {
        pfVar9 = pfVar9 + 2;
      }
      pfVar9 = pfVar9 + 1;
    } while (pfVar9 != pfVar2);
  }
  return;
}


