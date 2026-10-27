// Function : drawPopupMenuUpDownArrow
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f1100
// Prototype: undefined drawPopupMenuUpDownArrow(LookAndFeel_V2 * this, Graphics * param_1, int param_2, int param_3, char param_4)
// Body     : 001f1100 - 001f1417


/* juce::LookAndFeel_V2::drawPopupMenuUpDownArrow(juce::Graphics&, int, int, bool) */

void __thiscall
juce::LookAndFeel_V2::drawPopupMenuUpDownArrow
          (LookAndFeel_V2 *this,Graphics *param_1,int param_2,int param_3,char param_4)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 __ptr;
  LookAndFeel_V2 *pLVar5;
  char cVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_88 [16];
  ulong local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  undefined4 local_64;
  float local_54;
  LookAndFeel_V2 *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  uVar2 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(this + 0xe8);
    uVar10 = uVar2;
    uVar9 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar3 + (long)(int)uVar9 * 8) == 0x1000700) {
          if (-1 < (int)uVar9) {
            uVar10 = 0;
            if (uVar9 < uVar2) {
              uVar10 = *(uint *)(lVar3 + 4 + (ulong)uVar9 * 8);
            }
            goto LAB_001f119a;
          }
          goto LAB_001f1190;
        }
        uVar7 = (int)(uVar10 + uVar9) / 2;
        if (uVar7 == uVar9) goto LAB_001f1190;
        if (*(int *)(lVar3 + (long)(int)uVar7 * 8) < 0x1000701) break;
        uVar10 = uVar7;
        if ((int)uVar7 <= (int)uVar9) goto LAB_001f1190;
      }
      uVar9 = uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
LAB_001f1190:
  uVar10 = _ZN4juce7ColoursL5blackE_14;
LAB_001f119a:
  local_54 = (float)param_3;
  fVar11 = local_54;
  if (param_4 == '\0') {
    fVar11 = 0.0;
  }
  auVar4._4_4_ = 0;
  auVar4._0_4_ = DAT_005d9044 * local_54;
  auVar4._8_4_ = fVar11;
  auVar4._12_4_ = 0;
  local_88 = auVar4 << 0x20;
  local_78 = local_78 & 0xffffffffffffff00;
  local_50 = this;
  puStack_70 = malloc(0x80);
  local_68 = 8;
  *puStack_70 = 0;
  *(uint *)(puStack_70 + 1) = uVar10;
  local_64 = 2;
  puStack_70[2] = 0x3ff0000000000000;
  *(uint *)(puStack_70 + 3) = uVar10 & 0xffffff;
                    /* try { // try from 001f1218 to 001f1222 has its CatchHandler @ 001f142b */
  Graphics::setGradientFill(param_1,(undefined8 *)local_88);
  free(puStack_70);
  local_88._8_8_ = CONCAT44(param_3 + -2,param_2 + -2);
  local_88._0_8_ = 0x100000001;
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),local_88,0);
  pLVar5 = local_50;
  fVar11 = DAT_005d98e8;
  if (param_4 == '\0') {
    fVar11 = DAT_005d9088;
  }
  fVar12 = (float)param_2 * DAT_005d9044;
  fVar13 = DAT_005d9088;
  if (param_4 == '\0') {
    fVar13 = DAT_005d98e8;
  }
  local_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  local_88 = ZEXT816(0);
  local_68 = CONCAT31(local_68._1_3_,1);
  Path::addTriangle(fVar12 - local_54 * DAT_005d9088,fVar11 * local_54,
                    local_54 * DAT_005d9088 + fVar12,fVar11 * local_54,fVar12,fVar13 * local_54,
                    (Path *)local_88);
  uVar2 = *(uint *)(pLVar5 + 0xf4);
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(pLVar5 + 0xe8);
    uVar10 = uVar2;
    uVar9 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar3 + (long)(int)uVar9 * 8) == 0x1000600) {
          if (-1 < (int)uVar9) {
            uVar10 = 0;
            if (uVar9 < uVar2) {
              uVar10 = *(uint *)(lVar3 + 4 + (ulong)uVar9 * 8);
            }
            goto LAB_001f133e;
          }
          goto LAB_001f1338;
        }
        uVar7 = (int)(uVar9 + uVar10) / 2;
        if (uVar7 == uVar9) goto LAB_001f1338;
        if (*(int *)(lVar3 + (long)(int)uVar7 * 8) < 0x1000601) break;
        uVar10 = uVar7;
        if ((int)uVar7 <= (int)uVar9) goto LAB_001f1338;
      }
      uVar9 = uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
LAB_001f1338:
  uVar10 = _ZN4juce7ColoursL5blackE_14;
LAB_001f133e:
                    /* try { // try from 001f134a to 001f1351 has its CatchHandler @ 001f141a */
  Graphics::setColour(param_1,uVar10 & 0xffffff | 0x80000000);
                    /* try { // try from 001f1359 to 001f13f7 has its CatchHandler @ 001f1418 */
  cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if (cVar6 == '\0') {
    if ((long)(int)local_88._12_4_ != 0) {
      pfVar1 = (float *)(local_88._0_8_ + (long)(int)local_88._12_4_ * 4);
      pfVar8 = (float *)local_88._0_8_;
      do {
        fVar11 = *pfVar8;
        if ((fVar11 != DAT_005de3d0) || (NAN(fVar11) || NAN(DAT_005de3d0))) {
          if ((fVar11 != DAT_005de3d4) || (NAN(fVar11) || NAN(DAT_005de3d4))) {
            if (((fVar11 != DAT_005de3d8) || (NAN(fVar11) || NAN(DAT_005de3d8))) &&
               ((fVar11 != DAT_005de3dc || (NAN(fVar11) || NAN(DAT_005de3dc))))) goto LAB_001f13a4;
          }
          local_48 = ZEXT416(DAT_005d9038);
          local_38 = 0x3f800000;
          (**(code **)(**(long **)(param_1 + 8) + 200))(*(long **)(param_1 + 8),local_88,local_48);
          break;
        }
        pfVar8 = pfVar8 + 2;
LAB_001f13a4:
        pfVar8 = pfVar8 + 1;
      } while (pfVar8 != pfVar1);
    }
  }
  local_88._12_4_ = 0;
  auVar4 = local_88;
  __ptr = local_88._0_8_;
  local_88 = auVar4;
  free((void *)__ptr);
  return;
}


