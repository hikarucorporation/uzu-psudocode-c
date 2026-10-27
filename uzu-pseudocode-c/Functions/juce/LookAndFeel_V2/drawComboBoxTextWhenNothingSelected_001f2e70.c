// Function : drawComboBoxTextWhenNothingSelected
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f2e70
// Prototype: undefined drawComboBoxTextWhenNothingSelected(LookAndFeel_V2 * this, Graphics * param_1, long param_2, long param_3, uint * param_4, ulong param_5)
// Body     : 001f2e70 - 001f311d


/* juce::LookAndFeel_V2::drawComboBoxTextWhenNothingSelected(juce::Graphics&, juce::ComboBox&,
   juce::Label&) */

void __thiscall
juce::LookAndFeel_V2::drawComboBoxTextWhenNothingSelected
          (LookAndFeel_V2 *this,Graphics *param_1,long param_2,long param_3,uint *param_4,
          ulong param_5)

{
  SharedFontInternal *pSVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  float fVar13;
  undefined1 auVar14 [16];
  SharedFontInternal *local_50;
  long local_48;
  float local_3c;
  Graphics *local_38;
  
  uVar2 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar2) {
    lVar5 = *(long *)(this + 0xe8);
    uVar4 = uVar2;
    uVar9 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar9 * 8) == 0x1000a00) {
          if (-1 < (int)uVar9) {
            uVar4 = 0;
            if (uVar9 < uVar2) {
              uVar4 = *(uint *)(lVar5 + 4 + (ulong)uVar9 * 8);
            }
            goto LAB_001f2efe;
          }
          goto LAB_001f2ef8;
        }
        uVar10 = (int)(uVar9 + uVar4) / 2;
        if (uVar10 == uVar9) goto LAB_001f2ef8;
        if (*(int *)(lVar5 + (long)(int)uVar10 * 8) < 0x1000a01) break;
        uVar4 = uVar10;
        if ((int)uVar10 <= (int)uVar9) goto LAB_001f2ef8;
      }
      uVar9 = uVar10;
    } while ((int)uVar10 < (int)uVar4);
  }
LAB_001f2ef8:
  uVar4 = _ZN4juce7ColoursL5blackE_14;
LAB_001f2efe:
  iVar12 = SUB84((double)((float)(uVar4 >> 0x18) * DAT_005d9044) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar12 < 0xff) {
    iVar8 = iVar12;
  }
  Graphics::setColour(param_1,uVar4 & 0xffffff | iVar8 << 0x18);
  lVar5 = param_3;
  do {
    if ((*(long *)(lVar5 + 0x68) != 0) &&
       (pLVar6 = *(LookAndFeel_V4 **)(*(long *)(lVar5 + 0x68) + 0x10),
       pLVar6 != (LookAndFeel_V4 *)0x0)) goto LAB_001f2fa0;
    lVar5 = *(long *)(lVar5 + 0x30);
  } while (lVar5 != 0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001f2f79 to 001f2f82 has its CatchHandler @ 001f3131 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 001f2f86 to 001f2f8d has its CatchHandler @ 001f311e */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar6 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_001f2fa0:
  (**(code **)(*(long *)(pLVar6 + 0x50) + 0x18))(&local_50,pLVar6 + 0x50,param_3);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 001f2fc4 to 001f2fd8 has its CatchHandler @ 001f316f */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_50);
                    /* try { // try from 001f2fe2 to 001f2ff3 has its CatchHandler @ 001f316d */
  local_38 = param_1;
  auVar14 = (**(code **)(*(long *)this + 0x2b0))(this,param_3);
  iVar8 = *(int *)(param_3 + 0x40);
  iVar12 = *(int *)(param_3 + 0x44);
  local_48 = *(long *)(param_2 + 0x1c0);
  piVar7 = (int *)(local_48 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  uVar2 = *(uint *)(param_3 + 0x1b8);
  fVar13 = *(float *)(local_50 + 100);
  if (fVar13 <= 0.0) {
    local_3c = *(float *)(local_50 + 0x68);
                    /* try { // try from 001f3046 to 001f304f has its CatchHandler @ 001f3139 */
    uVar3 = Font::SharedFontInternal::getAscentDescent
                      (local_50,(long *)&local_50,auVar14._8_8_,&emptyString,param_4,param_5);
    fVar13 = local_3c * ((float)((ulong)uVar3 >> 0x20) + (float)uVar3);
  }
  iVar12 = (iVar12 - auVar14._8_4_) - auVar14._0_4_;
  uVar4 = (uint)((float)iVar12 / fVar13);
  uVar11 = 1;
  if (0 < (int)uVar4) {
    uVar11 = (ulong)uVar4;
  }
                    /* try { // try from 001f30b2 to 001f30d0 has its CatchHandler @ 001f3141 */
  Graphics::drawFittedText
            (*(undefined4 *)(param_3 + 0x208),DAT_005d9960,(long)local_38,&local_48,
             auVar14._0_8_ << 0x20 | auVar14._0_8_ >> 0x20,
             CONCAT44(iVar12,iVar8 - (auVar14._12_4_ + auVar14._4_4_)),(uint *)(ulong)uVar2,uVar11);
  piVar7 = (int *)(local_48 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar7);
    }
  }
  if (local_50 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar1 = local_50 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_50 + 8))();
    }
  }
  return;
}


