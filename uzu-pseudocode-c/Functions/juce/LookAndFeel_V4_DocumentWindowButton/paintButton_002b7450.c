// Function : paintButton
// Namespace: juce:LookAndFeel_V4_DocumentWindowButton
// Entry    : 002b7450
// Prototype: undefined paintButton(LookAndFeel_V4_DocumentWindowButton * this, Graphics * param_1, char param_2, char param_3)
// Body     : 002b7450 - 002b7821


/* juce::LookAndFeel_V4_DocumentWindowButton::paintButton(juce::Graphics&, bool, bool) */

void __thiscall
juce::LookAndFeel_V4_DocumentWindowButton::paintButton
          (LookAndFeel_V4_DocumentWindowButton *this,Graphics *param_1,char param_2,char param_3)

{
  float *pfVar1;
  char cVar2;
  long lVar3;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar4;
  LookAndFeel_V4_DocumentWindowButton *pLVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar7 = _ZN4juce7ColoursL4greyE_57;
  pLVar5 = this;
  do {
    pLVar5 = *(LookAndFeel_V4_DocumentWindowButton **)(pLVar5 + 0x30);
    if (pLVar5 == (LookAndFeel_V4_DocumentWindowButton *)0x0) goto LAB_002b7536;
    lVar3 = __dynamic_cast(pLVar5,&Component::typeinfo,&ResizableWindow::typeinfo,0);
  } while (lVar3 == 0);
  do {
    if ((*(long *)(lVar3 + 0x68) != 0) &&
       (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(lVar3 + 0x68) + 0x10),
       pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_002b7515;
    lVar3 = *(long *)(lVar3 + 0x30);
  } while (lVar3 != 0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002b74ee to 002b74f7 has its CatchHandler @ 002b7835 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002b74fb to 002b7502 has its CatchHandler @ 002b7822 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002b7515:
  lVar3 = __dynamic_cast(pLVar4,&LookAndFeel::typeinfo,&LookAndFeel_V4::typeinfo,0);
  if (lVar3 != 0) {
    uVar7 = *(uint *)(lVar3 + 0x160);
  }
LAB_002b7536:
  Graphics::fillAll(param_1,uVar7);
  pLVar5 = this;
  do {
    if ((*(ushort *)(pLVar5 + 0xe8) & 0x8000) != 0) goto LAB_002b7573;
    pLVar5 = *(LookAndFeel_V4_DocumentWindowButton **)(pLVar5 + 0x30);
  } while (pLVar5 != (LookAndFeel_V4_DocumentWindowButton *)0x0);
  if (param_3 == '\0') {
    Graphics::setColour(param_1,*(undefined4 *)(this + 0x1f8));
  }
  else {
LAB_002b7573:
    Graphics::setColour(param_1,*(uint *)(this + 0x1f8) & 0xffffff | 0x99000000);
  }
  if (param_2 != '\0') {
    (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
    Graphics::setColour(param_1,uVar7);
  }
                    /* try { // try from 002b75b7 to 002b75be has its CatchHandler @ 002b784d */
  (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_48);
                    /* try { // try from 002b75c9 to 002b75ce has its CatchHandler @ 002b7845 */
  cVar2 = (**(code **)(CONCAT44(fStack_44,local_48) + 0x30))(&local_40);
                    /* try { // try from 002b75d6 to 002b75db has its CatchHandler @ 002b783d */
  (**(code **)(CONCAT44(fStack_44,local_48) + 0x58))(&local_40);
  pLVar5 = this + 0x200;
  if (cVar2 != '\0') {
    pLVar5 = this + 0x228;
  }
  fVar8 = (float)*(int *)(this + 0x44);
  fVar12 = DAT_005d9088 * fVar8;
  fVar8 = fVar8 - (fVar12 + fVar12);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  local_48 = DAT_005d9038;
  local_38 = DAT_005d9038;
  if (0.0 < fVar8) {
    fVar9 = *(float *)(pLVar5 + 0x14) - *(float *)(pLVar5 + 0x10);
    fStack_44 = 0.0;
    if (0.0 < fVar9) {
      fVar13 = *(float *)(pLVar5 + 0x1c) - *(float *)(pLVar5 + 0x18);
      local_40 = 0.0;
      local_3c = 0.0;
      local_34 = 0.0;
      if (0.0 < fVar13) {
        auVar10._4_4_ = fVar8;
        auVar10._0_4_ = fVar13;
        auVar10._8_8_ = 0;
        auVar11._4_4_ = fVar8;
        auVar11._0_4_ = fVar9;
        auVar11._8_8_ = 0;
        auVar11 = divps(auVar10,auVar11);
        local_38 = auVar11._0_4_;
        if (local_38 <= auVar11._4_4_) {
          local_38 = local_38 * fVar8;
          local_48 = fVar8;
        }
        else {
          local_48 = fVar8 / local_38;
          local_38 = fVar8;
        }
        local_48 = local_48 / fVar9;
        local_38 = local_38 / fVar13;
        fStack_44 = local_48 * 0.0;
        local_40 = (fVar9 * DAT_005d98c8 - *(float *)(pLVar5 + 0x10)) * local_48 +
                   fVar8 * DAT_005d9044 +
                   (float)((*(int *)(this + 0x40) - *(int *)(this + 0x44)) / 2) + fVar12;
        local_3c = local_38 * 0.0;
        local_34 = (DAT_005d98c8 * fVar13 - *(float *)(pLVar5 + 0x18)) * local_38 +
                   fVar8 * DAT_005d9044 + fVar12 + 0.0;
      }
      goto LAB_002b7762;
    }
  }
  fStack_44 = 0.0;
  local_40 = 0.0;
  local_3c = 0.0;
  local_34 = 0.0;
LAB_002b7762:
  cVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)*(int *)(pLVar5 + 0xc) != 0)) {
    pfVar6 = *(float **)pLVar5;
    pfVar1 = pfVar6 + *(int *)(pLVar5 + 0xc);
    do {
      fVar8 = *pfVar6;
      if ((fVar8 != DAT_005de3d0) || (NAN(fVar8) || NAN(DAT_005de3d0))) {
        if ((fVar8 == DAT_005de3d4) && (!NAN(fVar8) && !NAN(DAT_005de3d4))) {
LAB_002b77fd:
          (**(code **)(**(long **)(param_1 + 8) + 200))(*(long **)(param_1 + 8),pLVar5,&local_48);
          return;
        }
        if ((fVar8 == DAT_005de3d8) && (!NAN(fVar8) && !NAN(DAT_005de3d8))) goto LAB_002b77fd;
        if ((fVar8 == DAT_005de3dc) && (!NAN(fVar8) && !NAN(DAT_005de3dc))) goto LAB_002b77fd;
      }
      else {
        pfVar6 = pfVar6 + 2;
      }
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != pfVar1);
  }
  return;
}


