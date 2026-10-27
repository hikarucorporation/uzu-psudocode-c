// Function : drawCallOutBoxBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 002165a0
// Prototype: undefined drawCallOutBoxBackground(undefined8 param_1_00, long param_2, Graphics * param_3, undefined8 * param_4, long * param_5)
// Body     : 002165a0 - 002168b1


/* juce::LookAndFeel_V2::drawCallOutBoxBackground(juce::CallOutBox&, juce::Graphics&, juce::Path
   const&, juce::Image&) */

void __thiscall
juce::LookAndFeel_V2::drawCallOutBoxBackground
          (undefined8 param_1_00,long param_2,Graphics *param_3,undefined8 *param_4,long *param_5)

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
  undefined8 local_38;
  ulong local_30;
  
  if (*param_5 != 0) goto LAB_002166d3;
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  (**(code **)(**(long **)(param_3 + 8) + 0x110))(&local_38);
                    /* try { // try from 002165df to 002165f4 has its CatchHandler @ 002168cd */
  (**(code **)(*local_38 + 0x10))(local_58,local_38,2,uVar4,uVar5,1);
  plVar6 = (long *)*param_5;
  *param_5 = local_58._0_8_;
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
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  plVar6 = (long *)*param_5;
  if (plVar6 == (long *)0x0) {
LAB_00216675:
    local_58._0_8_ = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
                    /* try { // try from 00216638 to 0021664c has its CatchHandler @ 002168bb */
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
    if ((long *)*param_5 == (long *)0x0) goto LAB_00216675;
    (**(code **)(*(long *)*param_5 + 0x10))(local_58);
  }
  local_58._8_8_ = local_58._0_8_;
  local_48 = local_48 & 0xffffffffffffff00;
  local_38 = (long *)CONCAT44(8,_ZN4juce7ColoursL5blackE_14 & 0xffffff | 0xb2000000);
  local_30 = 0x200000000;
                    /* try { // try from 002166b4 to 002166c3 has its CatchHandler @ 002168b2 */
  DropShadow::drawForPath((DropShadow *)&local_38,(Graphics *)local_58,param_4);
  if ((long *)local_58._0_8_ != (long *)0x0) {
    (**(code **)(*(long *)local_58._0_8_ + 8))();
  }
LAB_002166d3:
  Graphics::setColour(param_3,_ZN4juce7ColoursL5blackE_14);
  local_58 = ZEXT416(DAT_005d9038);
  local_48 = 0x3f800000;
  if (*param_5 != 0) {
    cVar7 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
    if (cVar7 == '\0') {
      (**(code **)(**(long **)(param_3 + 8) + 0xe0))(*(long **)(param_3 + 8),param_5,local_58);
    }
  }
  Graphics::setColour(param_3,0xe63b3b3b);
  cVar7 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  if ((cVar7 == '\0') && ((long)*(int *)((long)param_4 + 0xc) != 0)) {
    pfVar9 = (float *)*param_4;
    pfVar2 = pfVar9 + *(int *)((long)param_4 + 0xc);
    do {
      fVar3 = *pfVar9;
      if ((fVar3 != DAT_005de3d0) || (NAN(fVar3) || NAN(DAT_005de3d0))) {
        if ((fVar3 != DAT_005de3d4) || (NAN(fVar3) || NAN(DAT_005de3d4))) {
          if (((fVar3 != DAT_005de3d8) || (NAN(fVar3) || NAN(DAT_005de3d8))) &&
             ((fVar3 != DAT_005de3dc || (NAN(fVar3) || NAN(DAT_005de3dc))))) goto LAB_00216784;
        }
        local_58 = ZEXT416(DAT_005d9038);
        local_48 = 0x3f800000;
        (**(code **)(**(long **)(param_3 + 8) + 200))(*(long **)(param_3 + 8),param_4,local_58);
        break;
      }
      pfVar9 = pfVar9 + 2;
LAB_00216784:
      pfVar9 = pfVar9 + 1;
    } while (pfVar9 != pfVar2);
  }
  Graphics::setColour(param_3,_ZN4juce7ColoursL5whiteE_144 & 0xffffff | 0xcc000000);
  local_38 = (long *)0x40000000;
  local_30 = local_30 & 0xffffffff00000000;
  local_58 = ZEXT416(DAT_005d9038);
  local_48 = 0x3f800000;
  cVar7 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  if ((cVar7 == '\0') && ((long)*(int *)((long)param_4 + 0xc) != 0)) {
    pfVar9 = (float *)*param_4;
    pfVar2 = pfVar9 + *(int *)((long)param_4 + 0xc);
    do {
      fVar3 = *pfVar9;
      if ((fVar3 != DAT_005de3d0) || (NAN(fVar3) || NAN(DAT_005de3d0))) {
        if ((fVar3 == DAT_005de3d4) && (!NAN(fVar3) && !NAN(DAT_005de3d4))) {
LAB_0021688d:
          (**(code **)(**(long **)(param_3 + 8) + 0xd8))
                    (*(long **)(param_3 + 8),param_4,&local_38,local_58);
          return;
        }
        if (((fVar3 == DAT_005de3d8) && (!NAN(fVar3) && !NAN(DAT_005de3d8))) ||
           ((fVar3 == DAT_005de3dc && (!NAN(fVar3) && !NAN(DAT_005de3dc))))) goto LAB_0021688d;
      }
      else {
        pfVar9 = pfVar9 + 2;
      }
      pfVar9 = pfVar9 + 1;
    } while (pfVar9 != pfVar2);
  }
  return;
}


