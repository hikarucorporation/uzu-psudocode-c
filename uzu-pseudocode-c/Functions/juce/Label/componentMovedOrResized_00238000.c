// Function : componentMovedOrResized
// Namespace: juce:Label
// Entry    : 00238000
// Prototype: undefined componentMovedOrResized(undefined8 param_1_00, float param_2, Label * this, long param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 00238000 - 002381fc


/* juce::Label::componentMovedOrResized(juce::Component&, bool, bool) */

void __thiscall
juce::Label::componentMovedOrResized
          (undefined8 param_1_00,float param_2,Label *this,long param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  SharedFontInternal *pSVar1;
  int iVar2;
  undefined8 uVar3;
  Label *pLVar4;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar5;
  long lVar6;
  undefined8 extraout_RDX;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  SharedFontInternal *local_50;
  byte *local_48;
  float local_3c;
  long local_38;
  undefined1 local_30 [8];
  
  pLVar4 = this;
  do {
    lVar6 = *(long *)(pLVar4 + 0x68);
    if ((lVar6 != 0) &&
       (pLVar5 = *(LookAndFeel_V4 **)(lVar6 + 0x10), pLVar5 != (LookAndFeel_V4 *)0x0))
    goto LAB_00238070;
    pLVar4 = *(Label **)(pLVar4 + 0x30);
  } while (pLVar4 != (Label *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00238049 to 00238052 has its CatchHandler @ 00238218 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00238056 to 0023805d has its CatchHandler @ 00238205 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar5 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00238070:
  (**(code **)(*(long *)(pLVar5 + 0x50) + 0x18))(&local_50,pLVar5 + 0x50,this);
                    /* try { // try from 0023808a to 00238092 has its CatchHandler @ 00238272 */
  auVar9 = (**(code **)(*(long *)(pLVar5 + 0x50) + 0x20))(pLVar5 + 0x50,this);
  if (this[0x213] == (Label)0x0) {
    fVar8 = *(float *)(local_50 + 100);
    if (fVar8 <= 0.0) {
      local_3c = *(float *)(local_50 + 0x68);
                    /* try { // try from 00238178 to 00238181 has its CatchHandler @ 002381fd */
      uVar3 = Font::SharedFontInternal::getAscentDescent
                        (local_50,(long *)&local_50,auVar9._8_8_,lVar6,param_7,param_8);
      fVar8 = local_3c * ((float)((ulong)uVar3 >> 0x20) + (float)uVar3);
    }
    iVar7 = SUB84((double)(fVar8 + DAT_005d9044) + DAT_005d9098,0) + auVar9._8_4_ + auVar9._0_4_ + 6
    ;
                    /* try { // try from 002381d0 to 002381d7 has its CatchHandler @ 00238220 */
    Component::setBounds
              ((Component *)this,*(int *)(param_4 + 0x38),*(int *)(param_4 + 0x3c) - iVar7,
               *(int *)(param_4 + 0x40),iVar7);
  }
  else {
                    /* try { // try from 002380b1 to 002380b8 has its CatchHandler @ 00238270 */
    (**(code **)(**(long **)(this + 0x178) + 0x10))(&local_38);
                    /* try { // try from 002380c3 to 002380cd has its CatchHandler @ 00238258 */
    (**(code **)(local_38 + 0x28))(&local_48,local_30);
                    /* try { // try from 002380d3 to 002380d8 has its CatchHandler @ 00238250 */
    (**(code **)(local_38 + 0x58))(local_30);
                    /* try { // try from 002380de to 002380e7 has its CatchHandler @ 00238224 */
    GlyphArrangement::getStringBounds(&local_50,local_48,extraout_RDX,lVar6,param_7,param_8);
    iVar7 = auVar9._12_4_ + auVar9._4_4_ + SUB84((double)(param_2 + DAT_005d9044) + DAT_005d9098,0);
    if (*(int *)(param_4 + 0x38) < iVar7) {
      iVar7 = *(int *)(param_4 + 0x38);
    }
    local_48 = local_48 + -0x10;
    if (local_48 != (byte *)&emptyString) {
      LOCK();
      iVar2 = *(int *)local_48;
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(local_48);
      }
    }
                    /* try { // try from 0023814f to 00238158 has its CatchHandler @ 00238222 */
    Component::setBounds
              ((Component *)this,*(int *)(param_4 + 0x38) - iVar7,*(int *)(param_4 + 0x3c),iVar7,
               *(int *)(param_4 + 0x44));
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


