// Function : drawKeymapChangeButton
// Namespace: juce:LookAndFeel_V3
// Entry    : 001fe110
// Prototype: undefined drawKeymapChangeButton(undefined8 param_1, undefined8 param_2, undefined8 param_3_00, undefined8 param_4, Graphics * param_5_00, uint param_6, uint param_7, Component * param_8, long * param_9)
// Body     : 001fe110 - 001fe937


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V3::drawKeymapChangeButton(juce::Graphics&, int, int, juce::Button&,
   juce::String const&) */

void __cdecl
juce::LookAndFeel_V3::drawKeymapChangeButton
          (undefined8 param_1,undefined8 param_2,undefined8 param_3_00,undefined8 param_4,
          Graphics *param_5_00,uint param_6,uint param_7,Component *param_8,long *param_9)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  Component *pCVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  int local_6c;
  Component *local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  Graphics *local_48;
  ulong local_40;
  ulong local_38;
  
  uVar16 = (uint)((ulong)param_3_00 >> 0x20);
  uVar13 = (ulong)param_7;
  uVar11 = (ulong)param_6;
  uVar3 = Component::findColour(param_8,0x100ad01,'\x01');
  uVar7 = (uint)uVar3;
  if (*(char *)*param_9 != '\0') {
    pCVar4 = param_8;
    do {
      if ((*(ushort *)(pCVar4 + 0xe8) & 0x8000) != 0) goto LAB_001fe216;
      pCVar4 = *(Component **)(pCVar4 + 0x30);
    } while (pCVar4 != (Component *)0x0);
    uVar16 = 0x33000000;
    if (*(int *)(param_8 + 0x1b8) == 0) {
      uVar16 = 0x1a000000;
    }
    uVar12 = 0x66000000;
    if (*(int *)(param_8 + 0x1b8) != 2) {
      uVar12 = uVar16;
    }
    Graphics::setColour(param_5_00,uVar7 & 0xffffff | uVar12);
    uStack_90 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_8 + 0x40) >> 0x20),
                         (float)(int)*(undefined8 *)(param_8 + 0x40));
    local_98 = (float *)0x0;
    (**(code **)(**(long **)(param_5_00 + 8) + 0x120))(*(long **)(param_5_00 + 8),&local_98);
    uStack_90 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_8 + 0x40) >> 0x20),
                         (float)(int)*(undefined8 *)(param_8 + 0x40));
    local_98 = (float *)0x0;
    (**(code **)(**(long **)(param_5_00 + 8) + 0x118))(*(long **)(param_5_00 + 8),&local_98);
LAB_001fe216:
    Graphics::setColour(param_5_00,uVar7);
    Graphics::setFont((float)(int)param_7 * DAT_005d98e8,param_5_00);
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_5_00,param_9,4,CONCAT44(param_7,param_6 - 8),(uint *)0x24,
               1);
    if (Component::currentlyFocusedComponent != param_8) {
      return;
    }
    goto LAB_001fe275;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (float *)0x0;
  uStack_90 = 0;
  local_78 = 1;
  Path::addEllipse(0,DAT_005dcf50,(Path *)&local_98);
  iVar1 = uStack_90._4_4_;
  lVar9 = (long)uStack_90._4_4_;
  if (lVar9 == 0) {
    local_88 = CONCAT44(_UNK_005dcf84,_DAT_005dcf80);
    uStack_80 = CONCAT44(_UNK_005dcf8c,_UNK_005dcf88);
  }
  else {
    uVar16 = ~-(uint)(local_88._4_4_ < DAT_005dcf74) & (uint)local_88._4_4_;
    local_88 = CONCAT44(-(uint)(local_88._4_4_ < DAT_005dcf74) & _UNK_005dcf84 | uVar16,
                        -(uint)(DAT_005dcf60 < (float)local_88) & _DAT_005dcf80 |
                        ~-(uint)(DAT_005dcf60 < (float)local_88) & (uint)(float)local_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcf7c) & _UNK_005dcf8c |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcf7c) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcf68 < (float)uStack_80) & _UNK_005dcf88 |
                         ~-(uint)(DAT_005dcf68 < (float)uStack_80) & (uint)(float)uStack_80);
  }
  iVar8 = uStack_90._4_4_ + 0xd;
  local_38 = uVar13;
  if ((int)(uint)uStack_90 < iVar8) {
    uVar12 = iVar8 / 2 + uStack_90._4_4_ + 0x15U & 0xfffffff8;
    if ((uint)uStack_90 != uVar12) {
      if ((int)uVar12 < 1) {
        free(local_98);
        local_98 = (float *)0x0;
      }
      else {
        local_98 = realloc(local_98,(ulong)uVar12 << 2);
      }
    }
    uStack_90 = (ulong)uVar12;
  }
  else {
    uVar12 = (uint)uStack_90;
  }
  local_98[lVar9] = 100002.0;
  local_98[lVar9 + 1] = 22.0;
  local_98[lVar9 + 2] = 57.0;
  local_98[lVar9 + 3] = 100001.0;
  local_98[lVar9 + 4] = 22.0;
  local_98[lVar9 + 5] = 43.0;
  local_98[lVar9 + 6] = 100001.0;
  local_98[lVar9 + 7] = 78.0;
  local_98[lVar9 + 8] = 43.0;
  local_98[lVar9 + 9] = 100001.0;
  local_98[lVar9 + 10] = 78.0;
  local_98[lVar9 + 0xb] = 57.0;
  local_98[lVar9 + 0xc] = 100005.0;
  if (iVar8 == 0) {
    local_88 = CONCAT44(_UNK_005dcfb4,_DAT_005dcfb0);
    uStack_80 = CONCAT44(_UNK_005dcfbc,_UNK_005dcfb8);
  }
  else {
    uVar16 = ~-(uint)(local_88._4_4_ < DAT_005dcfa4) & (uint)local_88._4_4_;
    local_88 = CONCAT44(-(uint)(local_88._4_4_ < DAT_005dcfa4) & _UNK_005dcfb4 | uVar16,
                        -(uint)(DAT_005dcf90 < (float)local_88) & _DAT_005dcfb0 |
                        ~-(uint)(DAT_005dcf90 < (float)local_88) & (uint)(float)local_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcfac) & _UNK_005dcfbc |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcfac) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcf98 < (float)uStack_80) & _UNK_005dcfb8 |
                         ~-(uint)(DAT_005dcf98 < (float)uStack_80) & (uint)(float)uStack_80);
  }
  iVar6 = iVar1 + 0x1a;
  local_68 = param_8;
  local_40 = uVar11;
  uStack_90._4_4_ = iVar8;
  if ((int)uVar12 < iVar6) {
    uVar10 = iVar6 / 2 + iVar1 + 0x22U & 0xfffffff8;
    if (uVar12 != uVar10) {
      if ((int)uVar10 < 1) {
        free(local_98);
        local_98 = (float *)0x0;
      }
      else {
        local_98 = realloc(local_98,(ulong)uVar10 << 2);
      }
    }
    uVar12 = uVar10;
    uStack_90._0_4_ = uVar10;
  }
  pCVar4 = local_68;
  local_98[lVar9 + 0xd] = 100002.0;
  local_98[lVar9 + 0xe] = 43.0;
  local_98[lVar9 + 0xf] = 43.0;
  local_98[lVar9 + 0x10] = 100001.0;
  local_98[lVar9 + 0x11] = 43.0;
  local_98[lVar9 + 0x12] = 22.0;
  local_98[lVar9 + 0x13] = 100001.0;
  local_98[lVar9 + 0x14] = 57.0;
  local_98[lVar9 + 0x15] = 22.0;
  local_98[lVar9 + 0x16] = 100001.0;
  local_98[lVar9 + 0x17] = 57.0;
  local_98[lVar9 + 0x18] = 43.0;
  local_98[lVar9 + 0x19] = 100005.0;
  if (iVar6 == 0) {
    local_88 = CONCAT44(_UNK_005dcfe4,_DAT_005dcfe0);
    uStack_80 = CONCAT44(_UNK_005dcfec,_UNK_005dcfe8);
    if ((int)uVar12 < iVar1 + 0x27) goto LAB_001fe5a7;
LAB_001fe5fe:
  }
  else {
    uVar16 = ~-(uint)(local_88._4_4_ < DAT_005dcfd4) & (uint)local_88._4_4_;
    local_88 = CONCAT44(-(uint)(local_88._4_4_ < DAT_005dcfd4) & _UNK_005dcfe4 | uVar16,
                        -(uint)(DAT_005dcfc0 < (float)local_88) & _DAT_005dcfe0 |
                        ~-(uint)(DAT_005dcfc0 < (float)local_88) & (uint)(float)local_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcfdc) & _UNK_005dcfec |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcfdc) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcfc8 < (float)uStack_80) & _UNK_005dcfe8 |
                         ~-(uint)(DAT_005dcfc8 < (float)uStack_80) & (uint)(float)uStack_80);
    if (iVar1 + 0x27 <= (int)uVar12) goto LAB_001fe5fe;
LAB_001fe5a7:
    uVar10 = (iVar1 + 0x27) / 2 + iVar1 + 0x2fU & 0xfffffff8;
    local_48 = param_5_00;
    if (uVar12 != uVar10) {
      local_6c = iVar6;
      if ((int)uVar10 < 1) {
        free(local_98);
        local_98 = (float *)0x0;
      }
      else {
        local_98 = realloc(local_98,(ulong)uVar10 << 2);
      }
      iVar6 = local_6c;
    }
    param_5_00 = local_48;
    uStack_90._0_4_ = uVar10;
  }
  uStack_90._4_4_ = iVar1 + 0x27;
  local_98[iVar6] = 100002.0;
  local_98[lVar9 + 0x1b] = 43.0;
  local_98[lVar9 + 0x1c] = 78.0;
  local_98[lVar9 + 0x1d] = 100001.0;
  local_98[lVar9 + 0x1e] = 43.0;
  local_98[lVar9 + 0x1f] = 57.0;
  local_98[lVar9 + 0x20] = 100001.0;
  local_98[lVar9 + 0x21] = 57.0;
  local_98[lVar9 + 0x22] = 57.0;
  local_98[lVar9 + 0x23] = 100001.0;
  local_98[lVar9 + 0x24] = 57.0;
  local_98[lVar9 + 0x25] = 78.0;
  local_98[lVar9 + 0x26] = 100005.0;
  local_78 = 0;
  iVar1 = *(int *)(pCVar4 + 0x1b8);
  uVar12 = 0x80000000;
  if (iVar1 == 0) {
    uVar12 = 0x4c000000;
  }
  uVar10 = 0xb2000000;
  if (iVar1 != 2) {
    uVar10 = uVar12;
  }
                    /* try { // try from 001fe726 to 001fe72d has its CatchHandler @ 001fe93a */
  Graphics::setColour(param_5_00,
                      uVar10 | (int)((float)(uVar7 & 0xff) * DAT_005de454) & 0xffU |
                               ((int)((float)(uVar7 >> 8 & 0xff) * DAT_005de454) & 0xffU) << 8 |
                               ((int)((float)(uVar7 >> 0x10 & 0xff) * DAT_005de454) & 0xffU) << 0x10
                     );
  param_6 = (uint)local_40;
  fVar14 = (float)(int)param_6 + DAT_0065b5a8;
  param_7 = (uint)local_38;
  local_60 = DAT_005d9038;
  local_50 = DAT_005d9038;
  if (fVar14 <= 0.0) {
LAB_001fe7df:
    local_58 = 0.0;
    local_5c = 0.0;
    local_54 = 0.0;
    local_4c = 0.0;
  }
  else {
    fVar15 = (float)(int)param_7 + DAT_0065b5a8;
    local_5c = 0.0;
    if (fVar15 <= 0.0) goto LAB_001fe7df;
    fVar20 = local_88._4_4_ - (float)local_88;
    if (fVar20 <= 0.0) goto LAB_001fe7df;
    fVar21 = uStack_80._4_4_ - (float)uStack_80;
    local_58 = 0.0;
    local_54 = 0.0;
    local_4c = 0.0;
    if (0.0 < fVar21) {
      auVar18._4_8_ = 0;
      auVar18._0_4_ = fVar21;
      auVar18._12_4_ = uVar16;
      auVar17._8_8_ = auVar18._8_8_;
      auVar17._4_4_ = fVar15;
      auVar17._0_4_ = fVar21;
      auVar19._4_4_ = fVar14;
      auVar19._0_4_ = fVar20;
      auVar19._8_8_ = 0;
      auVar19 = divps(auVar17,auVar19);
      local_50 = auVar19._0_4_;
      if (local_50 <= auVar19._4_4_) {
        local_50 = local_50 * fVar14;
        local_60 = fVar14;
      }
      else {
        local_60 = fVar15 / local_50;
        local_50 = fVar15;
      }
      local_60 = local_60 / fVar20;
      local_50 = local_50 / fVar21;
      local_5c = local_60 * 0.0;
      local_58 = (fVar20 * DAT_005d98c8 - (float)local_88) * local_60 +
                 fVar14 * DAT_005d9044 + DAT_005d9078;
      local_54 = local_50 * 0.0;
      local_4c = (DAT_005d98c8 * fVar21 - (float)uStack_80) * local_50 +
                 fVar15 * DAT_005d9044 + DAT_005d9078;
    }
  }
                    /* try { // try from 001fe88c to 001fe913 has its CatchHandler @ 001fe938 */
  cVar2 = (**(code **)(**(long **)(param_5_00 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)uStack_90._4_4_ != 0)) {
    pfVar5 = local_98;
    do {
      fVar14 = *pfVar5;
      if ((fVar14 != DAT_005de3d0) || (NAN(fVar14) || NAN(DAT_005de3d0))) {
        if ((fVar14 != DAT_005de3d4) || (NAN(fVar14) || NAN(DAT_005de3d4))) {
          if (((fVar14 != DAT_005de3d8) || (NAN(fVar14) || NAN(DAT_005de3d8))) &&
             ((fVar14 != DAT_005de3dc || (NAN(fVar14) || NAN(DAT_005de3dc))))) goto LAB_001fe8d4;
        }
        (**(code **)(**(long **)(param_5_00 + 8) + 200))
                  (*(long **)(param_5_00 + 8),&local_98,&local_60);
        break;
      }
      pfVar5 = pfVar5 + 2;
LAB_001fe8d4:
      pfVar5 = pfVar5 + 1;
    } while (pfVar5 != local_98 + uStack_90._4_4_);
  }
  uStack_90 = (ulong)(uint)uStack_90;
  free(local_98);
  if (Component::currentlyFocusedComponent != pCVar4) {
    return;
  }
LAB_001fe275:
  Graphics::setColour(param_5_00,uVar7 & 0xffffff | 0x66000000);
  uStack_90 = CONCAT44((float)(int)param_7,(float)(int)param_6);
  local_98 = (float *)0x0;
  (**(code **)(**(long **)(param_5_00 + 8) + 0xd0))(*(long **)(param_5_00 + 8),&local_98);
  return;
}


