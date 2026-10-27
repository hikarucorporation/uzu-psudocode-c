// Function : drawTableHeaderColumn
// Namespace: juce:LookAndFeel_V2
// Entry    : 001fc7b0
// Prototype: undefined drawTableHeaderColumn(LookAndFeel_V2 * this, Graphics * param_1, Component * param_2, long * param_3, undefined8 param_5_00, int param_5, uint param_6, char param_7, char param_8, uint param_9)
// Body     : 001fc7b0 - 001fce7f


/* juce::LookAndFeel_V2::drawTableHeaderColumn(juce::Graphics&, juce::TableHeaderComponent&,
   juce::String const&, int, int, int, bool, bool, int) */

void __thiscall
juce::LookAndFeel_V2::drawTableHeaderColumn
          (LookAndFeel_V2 *this,Graphics *param_1,Component *param_2,long *param_3,
          undefined8 param_5_00,int param_5,uint param_6,char param_7,char param_8,uint param_9)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  int local_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_12a;
  long *local_118;
  LookAndFeel_V2 *local_110;
  float *local_108;
  ulong uStack_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_aa;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  local_118 = param_3;
  local_110 = this;
  uVar8 = Component::findColour(param_2,0x1003830,'\0');
  uVar5 = (uint)uVar8;
  if (param_8 == '\0') {
    if (param_7 != '\0') {
      iVar10 = SUB84((double)((float)((uint)(uVar8 >> 0x18) & 0xff) * DAT_0065b21c) + DAT_005d9098,0
                    );
      iVar11 = 0xff;
      if (iVar10 < 0xff) {
        iVar11 = iVar10;
      }
      uVar5 = uVar5 & 0xffffff | iVar11 << 0x18;
      goto LAB_001fc840;
    }
  }
  else {
LAB_001fc840:
    Graphics::fillAll(param_1,uVar5);
  }
  iVar11 = 8;
  if (8 < param_5) {
    iVar11 = param_5;
  }
  local_1a4 = iVar11 + -8;
  uVar5 = 0;
  if (-1 < (int)param_6) {
    uVar5 = param_6;
  }
  if ((param_9 & 0x60) == 0) goto LAB_001fcb1a;
  local_178 = (long *)0x0;
  uStack_170 = (long *)0x0;
  local_188 = (float *)0x0;
  uStack_180 = (undefined1 *)0x0;
  local_168 = (long *)CONCAT71(local_168._1_7_,1);
  Path::addTriangle(0.0,0.0,DAT_005d9044,
                    *(float *)(&DAT_005de610 + (ulong)((param_9 & 0x20) == 0) * 4),DAT_005d9038,0.0,
                    (Path *)&local_188);
                    /* try { // try from 001fc8c4 to 001fc8d0 has its CatchHandler @ 001fce80 */
  Graphics::setColour(param_1,0x99000000);
  iVar10 = (int)param_6 / 2;
  if (local_1a4 < (int)param_6 / 2) {
    iVar10 = local_1a4;
  }
  iVar6 = 4;
  if (4 < iVar10) {
    iVar6 = iVar10;
  }
  iVar12 = 0;
  if (4 < uVar5) {
    iVar12 = param_6 - 4;
  }
  fVar14 = (float)(iVar6 + -4);
  fVar15 = (float)iVar12;
  local_1a0 = DAT_005d9038;
  local_190 = DAT_005d9038;
  if ((fVar14 <= 0.0) || (fStack_19c = 0.0, fVar15 <= 0.0)) {
LAB_001fc9d8:
    local_198 = 0.0;
    local_194 = 0.0;
    fStack_19c = 0.0;
    local_18c = 0.0;
  }
  else {
    fVar16 = local_178._4_4_ - (float)local_178;
    if (fVar16 <= 0.0) goto LAB_001fc9d8;
    fVar19 = uStack_170._4_4_ - (float)uStack_170;
    local_198 = 0.0;
    local_194 = 0.0;
    local_18c = 0.0;
    if (0.0 < fVar19) {
      auVar17._4_4_ = fVar15;
      auVar17._0_4_ = fVar19;
      auVar17._8_8_ = 0;
      auVar18._4_4_ = fVar14;
      auVar18._0_4_ = fVar16;
      auVar18._8_4_ = 0;
      auVar18._12_4_ = fVar15;
      auVar18 = divps(auVar17,auVar18);
      local_190 = auVar18._0_4_;
      if (local_190 <= auVar18._4_4_) {
        local_190 = local_190 * fVar14;
        local_1a0 = fVar14;
      }
      else {
        local_1a0 = fVar15 / local_190;
        local_190 = fVar15;
      }
      local_1a0 = local_1a0 / fVar16;
      local_190 = local_190 / fVar19;
      fStack_19c = local_1a0 * 0.0;
      local_198 = (fVar16 * DAT_005d98c8 - (float)local_178) * local_1a0 +
                  fVar14 * DAT_005d9044 + (float)((iVar11 - iVar10) + -2);
      local_194 = local_190 * 0.0;
      local_18c = (DAT_005d98c8 * fVar19 - (float)uStack_170) * local_190 +
                  fVar15 * DAT_005d9044 + DAT_005d9078;
    }
  }
                    /* try { // try from 001fca76 to 001fcb03 has its CatchHandler @ 001fce82 */
  cVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if (cVar4 == '\0') {
    if ((long)uStack_180._4_4_ != 0) {
      pfVar9 = local_188;
      do {
        fVar14 = *pfVar9;
        if ((fVar14 != DAT_005de3d0) || (NAN(fVar14) || NAN(DAT_005de3d0))) {
          if ((fVar14 != DAT_005de3d4) || (NAN(fVar14) || NAN(DAT_005de3d4))) {
            if (((fVar14 != DAT_005de3d8) || (NAN(fVar14) || NAN(DAT_005de3d8))) &&
               ((fVar14 != DAT_005de3dc || (NAN(fVar14) || NAN(DAT_005de3dc))))) goto LAB_001fcac4;
          }
          (**(code **)(**(long **)(param_1 + 8) + 200))
                    (*(long **)(param_1 + 8),&local_188,&local_1a0);
          break;
        }
        pfVar9 = pfVar9 + 2;
LAB_001fcac4:
        pfVar9 = pfVar9 + 1;
      } while (pfVar9 != local_188 + uStack_180._4_4_);
    }
  }
  local_1a4 = local_1a4 - iVar10;
  uStack_180 = (undefined1 *)((ulong)uStack_180 & 0xffffffff);
  free(local_188);
LAB_001fcb1a:
  uVar8 = Component::findColour(param_2,0x1003800,'\0');
  Graphics::setColour(param_1,(int)uVar8);
  FontOptions::FontOptions((float)(int)param_6 * DAT_005d9044,(FontOptions *)&local_98,1);
                    /* try { // try from 001fcb66 to 001fcb7c has its CatchHandler @ 001fcecd */
  uVar7 = (**(code **)(*(long *)local_110 + 0x50))();
  FontOptions::FontOptions((FontOptions *)&local_188,&local_98);
  local_108 = local_188;
  local_188 = (float *)&DAT_0061ac58;
  uStack_100 = (ulong)uStack_180;
  uStack_180 = &DAT_0061ac58;
  local_f8 = local_178;
  local_178 = (long *)0x0;
  local_f0 = uStack_170;
  plStack_e8 = local_168;
  local_e0 = local_160;
  uStack_170 = (long *)0x0;
  local_168 = (long *)0x0;
  local_160 = 0;
  local_d8 = local_158;
  uStack_d0 = uStack_150;
  local_c8 = local_148;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_c0 = CONCAT44(uStack_13c,uVar7);
  uStack_aa = uStack_12a;
                    /* try { // try from 001fcc22 to 001fcc33 has its CatchHandler @ 001fce9f */
  local_140 = uVar7;
  Font::Font((Font *)&local_1a0,(long *)&local_108);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 001fcc47 to 001fcc5b has its CatchHandler @ 001fcea4 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_1a0);
  plVar2 = (long *)CONCAT44(fStack_19c,local_1a0);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = local_f0;
  plVar1 = plStack_e8;
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
    plVar2 = local_f0;
    plVar1 = plStack_e8;
  }
  for (; plVar3 = plStack_e8, plVar2 != plStack_e8; plVar2 = plVar2 + 1) {
    piVar13 = (int *)(*plVar2 + -0x10);
    plStack_e8 = plVar1;
    if (piVar13 != &emptyString) {
      LOCK();
      iVar11 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        operator_delete__(piVar13);
      }
    }
    plVar1 = plStack_e8;
    plStack_e8 = plVar3;
  }
  plStack_e8 = plVar1;
  if (local_f0 != (long *)0x0) {
    operator_delete(local_f0);
  }
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar2 = local_f8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  piVar13 = (int *)(uStack_100 - 0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar11 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar13);
    }
  }
  pfVar9 = local_108 + -4;
  if (pfVar9 != (float *)&emptyString) {
    LOCK();
    fVar14 = *pfVar9;
    *pfVar9 = (float)((int)*pfVar9 + -1);
    UNLOCK();
    if (fVar14 == 0.0) {
      operator_delete__(pfVar9);
    }
  }
  plVar2 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar2 = local_80;
  }
  for (; plVar2 != local_78; plVar2 = plVar2 + 1) {
    piVar13 = (int *)(*plVar2 + -0x10);
    if (piVar13 != &emptyString) {
      LOCK();
      iVar11 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        operator_delete__(piVar13);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar13 = (int *)(local_90 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar11 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar13);
    }
  }
  piVar13 = (int *)(local_98 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar11 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar13);
    }
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,local_118,4,CONCAT44(uVar5,local_1a4),(uint *)0x21,1);
  return;
}


