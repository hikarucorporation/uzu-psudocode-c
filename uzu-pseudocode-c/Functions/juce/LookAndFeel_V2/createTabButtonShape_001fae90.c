// Function : createTabButtonShape
// Namespace: juce:LookAndFeel_V2
// Entry    : 001fae90
// Prototype: undefined createTabButtonShape(long * param_1, TabBarButton * param_2, Path * param_3)
// Body     : 001fae90 - 001fb20b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::createTabButtonShape(juce::TabBarButton&, juce::Path&, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::createTabButtonShape(long *param_1,TabBarButton *param_2,Path *param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  Path local_20;
  
  auVar7 = TabBarButton::getActiveArea(param_2);
  fVar4 = (float)auVar7._8_4_;
  fVar6 = (float)auVar7._12_4_;
  fVar5 = fVar4;
  if ((*(uint *)(*(long *)(param_2 + 0x1f8) + 0x150) & 0xfffffffe) != 2) {
    fVar5 = fVar6;
  }
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,(int)fVar5);
  fVar5 = (float)iVar1;
  iVar1 = *(int *)(*(long *)(param_2 + 0x1f8) + 0x150);
  if (iVar1 == 1) {
    Path::startNewSubPath(0.0,0.0,param_3);
    Path::lineTo(fVar5,fVar6,param_3);
    Path::lineTo(fVar4 - fVar5,fVar6,param_3);
    Path::lineTo(fVar4,0.0,param_3);
    fVar4 = fVar4 + DAT_005d94d4;
    fVar5 = DAT_0065b5a8;
LAB_001fb085:
    Path::lineTo(fVar4,fVar5,param_3);
    Path::lineTo(DAT_0065b5a8,DAT_0065b5a8,param_3);
    iVar1 = *(int *)(param_3 + 0xc);
  }
  else {
    if (iVar1 == 3) {
      Path::startNewSubPath(0.0,0.0,param_3);
      Path::lineTo(fVar4,fVar5,param_3);
      Path::lineTo(fVar4,fVar6 - fVar5,param_3);
      Path::lineTo(0.0,fVar6,param_3);
      fVar4 = DAT_0065b5a8;
      fVar5 = fVar6 + DAT_005d94d4;
      goto LAB_001fb085;
    }
    if (iVar1 == 2) {
      Path::startNewSubPath(fVar4,0.0,param_3);
      Path::lineTo(0.0,fVar5,param_3);
      Path::lineTo(0.0,fVar6 - fVar5,param_3);
      Path::lineTo(fVar4,fVar6,param_3);
      fVar4 = fVar4 + DAT_005d94d4;
      Path::lineTo(fVar4,fVar6 + DAT_005d94d4,param_3);
      Path::lineTo(fVar4,DAT_0065b5a8,param_3);
      iVar1 = *(int *)(param_3 + 0xc);
    }
    else {
      Path::startNewSubPath(0.0,fVar6,param_3);
      Path::lineTo(fVar5,0.0,param_3);
      Path::lineTo(fVar4 - fVar5,0.0,param_3);
      Path::lineTo(fVar4,fVar6,param_3);
      fVar6 = fVar6 + DAT_005d94d4;
      Path::lineTo(fVar4 + DAT_005d94d4,fVar6,param_3);
      Path::lineTo(DAT_0065b5a8,fVar6,param_3);
      iVar1 = *(int *)(param_3 + 0xc);
    }
  }
  if (iVar1 != 0) {
    if (-1 < iVar1) {
      fVar4 = *(float *)(*(long *)param_3 + (ulong)(iVar1 - 1) * 4);
      if ((fVar4 == DAT_005de41c) && (!NAN(fVar4) && !NAN(DAT_005de41c))) goto LAB_001fb1c3;
    }
    if ((int)*(uint *)(param_3 + 8) <= iVar1) {
      uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_3 + 8) != uVar3) {
        if ((int)uVar3 < 1) {
          free(*(void **)param_3);
          *(undefined8 *)param_3 = 0;
        }
        else {
          pvVar2 = realloc(*(void **)param_3,(ulong)uVar3 << 2);
          *(void **)param_3 = pvVar2;
        }
      }
      *(uint *)(param_3 + 8) = uVar3;
      iVar1 = *(int *)(param_3 + 0xc);
    }
    *(int *)(param_3 + 0xc) = iVar1 + 1;
    *(undefined4 *)(*(long *)param_3 + (long)iVar1 * 4) = 0x47c35280;
  }
LAB_001fb1c3:
  Path::createPathWithRoundedCorners(DAT_0065449c,&local_40,(long *)param_3);
  pvVar2 = *(void **)param_3;
  *(undefined8 *)param_3 = local_40;
  *(undefined8 *)(param_3 + 8) = local_38;
  *(undefined8 *)(param_3 + 0x10) = local_30;
  *(undefined8 *)(param_3 + 0x18) = uStack_28;
  param_3[0x20] = local_20;
  free(pvVar2);
  return;
}


