// Function : fillTabButtonShape
// Namespace: juce:LookAndFeel_V2
// Entry    : 001fb210
// Prototype: undefined fillTabButtonShape(undefined8 param_1, Component * param_2, Graphics * param_3, undefined8 * param_4)
// Body     : 001fb210 - 001fb525


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::fillTabButtonShape(juce::TabBarButton&, juce::Graphics&, juce::Path const&,
   bool, bool) */

void __cdecl
juce::LookAndFeel_V2::fillTabButtonShape
          (undefined8 param_1,Component *param_2,Graphics *param_3,undefined8 *param_4)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  float *pfVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined1 local_58 [16];
  undefined8 local_48;
  float local_40 [4];
  
  uVar12 = *(uint *)(*(long *)(param_2 + 0x1f8) + 0x14c);
  lVar3 = *(long *)(*(long *)(param_2 + 0x1f8) + 0x140);
  plVar11 = (long *)(lVar3 + (long)(int)(uVar12 - 1) * 8 + 8);
  puVar7 = &_ZN4juce7ColoursL16transparentBlackE_5;
  uVar13 = uVar12;
  do {
    if ((int)uVar13 < 1) goto LAB_001fb28b;
    uVar13 = uVar13 - 1;
    plVar11 = plVar11 + -1;
  } while ((Component *)**(long **)(lVar3 + (ulong)uVar13 * 8) != param_2);
  if ((uVar13 < uVar12) && (*plVar11 != 0)) {
    puVar7 = (uint *)(*plVar11 + 0x10);
  }
LAB_001fb28b:
  uVar12 = *puVar7;
                    /* try { // try from 001fb297 to 001fb29e has its CatchHandler @ 001fb536 */
  (**(code **)(**(long **)(param_2 + 0x1c0) + 0x10))(local_58);
                    /* try { // try from 001fb2a9 to 001fb2ae has its CatchHandler @ 001fb52e */
  cVar5 = (**(code **)(local_58._0_8_ + 0x30))(local_58 + 8);
                    /* try { // try from 001fb2b7 to 001fb2bc has its CatchHandler @ 001fb526 */
  (**(code **)(local_58._0_8_ + 0x58))(local_58 + 8);
  if (cVar5 == '\0') {
    iVar6 = SUB84((double)((float)(uVar12 >> 0x18) * DAT_005de3c8) + DAT_005d9098,0);
    iVar10 = 0xff;
    if (iVar6 < 0xff) {
      iVar10 = iVar6;
    }
    uVar12 = uVar12 & 0xffffff | iVar10 << 0x18;
    uVar13 = 0x1005812;
    fVar14 = DAT_005d9044;
  }
  else {
    uVar13 = 0x1005814;
    fVar14 = DAT_005d9038;
  }
  Graphics::setColour(param_3,uVar12);
  cVar5 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  if ((cVar5 == '\0') && ((long)*(int *)((long)param_4 + 0xc) != 0)) {
    pfVar9 = (float *)*param_4;
    pfVar1 = pfVar9 + *(int *)((long)param_4 + 0xc);
    do {
      fVar2 = *pfVar9;
      if ((fVar2 != DAT_005de3d0) || (NAN(fVar2) || NAN(DAT_005de3d0))) {
        if ((fVar2 != DAT_005de3d4) || (NAN(fVar2) || NAN(DAT_005de3d4))) {
          if (((fVar2 != DAT_005de3d8) || (NAN(fVar2) || NAN(DAT_005de3d8))) &&
             ((fVar2 != DAT_005de3dc || (NAN(fVar2) || NAN(DAT_005de3dc))))) goto LAB_001fb384;
        }
        local_58 = ZEXT416((uint)DAT_005d9038);
        local_48 = 0x3f800000;
        (**(code **)(**(long **)(param_3 + 8) + 200))(*(long **)(param_3 + 8),param_4,local_58);
        break;
      }
      pfVar9 = pfVar9 + 2;
LAB_001fb384:
      pfVar9 = pfVar9 + 1;
    } while (pfVar9 != pfVar1);
  }
  uVar8 = Component::findColour(param_2,uVar13,'\0');
  do {
    uVar12 = (uint)(uVar8 >> 0x18);
    if ((*(ushort *)(param_2 + 0xe8) & 0x8000) != 0) {
      dVar4 = (double)((float)(uVar12 & 0xff) * DAT_005d9044);
      goto LAB_001fb42e;
    }
    param_2 = *(Component **)(param_2 + 0x30);
  } while (param_2 != (Component *)0x0);
  dVar4 = (double)(uVar12 & 0xff);
LAB_001fb42e:
  iVar6 = SUB84(dVar4 + DAT_005d9098,0);
  iVar10 = 0xff;
  if (iVar6 < 0xff) {
    iVar10 = iVar6;
  }
  Graphics::setColour(param_3,(uint)uVar8 & 0xffffff | iVar10 << 0x18);
  local_40[1] = 0.0;
  local_40[2] = 0.0;
  local_58 = ZEXT416((uint)DAT_005d9038);
  local_48 = 0x3f800000;
  local_40[0] = fVar14;
  cVar5 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  if ((cVar5 == '\0') && ((long)*(int *)((long)param_4 + 0xc) != 0)) {
    pfVar9 = (float *)*param_4;
    pfVar1 = pfVar9 + *(int *)((long)param_4 + 0xc);
    do {
      fVar14 = *pfVar9;
      if ((fVar14 != DAT_005de3d0) || (NAN(fVar14) || NAN(DAT_005de3d0))) {
        if ((fVar14 == DAT_005de3d4) && (!NAN(fVar14) && !NAN(DAT_005de3d4))) {
LAB_001fb4fd:
          (**(code **)(**(long **)(param_3 + 8) + 0xd8))
                    (*(long **)(param_3 + 8),param_4,local_40,local_58);
          return;
        }
        if (((fVar14 == DAT_005de3d8) && (!NAN(fVar14) && !NAN(DAT_005de3d8))) ||
           ((fVar14 == DAT_005de3dc && (!NAN(fVar14) && !NAN(DAT_005de3dc))))) goto LAB_001fb4fd;
      }
      else {
        pfVar9 = pfVar9 + 2;
      }
      pfVar9 = pfVar9 + 1;
    } while (pfVar9 != pfVar1);
  }
  return;
}


