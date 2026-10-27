// Function : createFileBrowserGoUpButton
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ee650
// Prototype: Button * createFileBrowserGoUpButton(void)
// Body     : 001ee650 - 001ee962


/* juce::LookAndFeel_V4::createFileBrowserGoUpButton() */

Button * juce::LookAndFeel_V4::createFileBrowserGoUpButton(void)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *__ptr;
  byte bVar5;
  Button *this;
  int *piVar6;
  ulong uVar7;
  void *__dest;
  uint uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  uint uVar9;
  undefined4 uVar10;
  void *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298;
  int local_288 [2];
  void *local_280;
  long *plStack_278;
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined **local_258 [8];
  ulong local_218;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  this = operator_new(0x250);
                    /* try { // try from 001ee66d to 001ee676 has its CatchHandler @ 001ee993 */
  piVar6 = operator_new__(0x1b);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  piVar6[2] = 4;
  piVar6[3] = 0;
  local_258[0] = (undefined **)(piVar6 + 4);
  *(undefined2 *)(piVar6 + 4) = 0x7075;
  *(undefined1 *)((long)piVar6 + 0x12) = 0;
                    /* try { // try from 001ee69c to 001ee6a8 has its CatchHandler @ 001ee979 */
  Button::Button(this,(long *)local_258);
  *(undefined ***)this = &PTR__DrawableButton_00707240;
  *(undefined ***)(this + 0xf0) = &PTR__DrawableButton_00707428;
  *(undefined4 *)(this + 0x1f8) = 3;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 3;
  LOCK();
  iVar2 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar2 == 0) {
    operator_delete__(piVar6);
  }
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = (void *)0x0;
  uStack_2b0 = 0;
  local_298 = 1;
  Path::addArrow((Path *)&local_2b8);
                    /* try { // try from 001ee733 to 001ee73c has its CatchHandler @ 001ee974 */
  Drawable::Drawable((Drawable *)local_258);
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 1;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 1;
  local_88[0] = _ZN4juce7ColoursL5blackE_14;
  local_80 = 0;
  uStack_78 = 0;
  uVar10 = 0;
  local_70 = ZEXT416(DAT_005d9038);
  local_60 = 0x3f800000;
  local_58 = _ZN4juce7ColoursL5blackE_14;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = ZEXT416(DAT_005d9038);
  local_30 = 0x3f800000;
  local_258[0] = &PTR__DrawablePath_00708098;
  uVar9 = DAT_005d9038;
                    /* try { // try from 001ee7ef to 001ee7fd has its CatchHandler @ 001ee972 */
  uVar7 = Component::findColour((Component *)this,0x1000102,'\0');
  local_288[0] = (int)uVar7;
  local_280 = (void *)0x0;
  plStack_278 = (long *)0x0;
  local_270 = ZEXT416(DAT_005d9038);
  local_260 = 0x3f800000;
  bVar5 = FillType::operator!=((FillType *)local_88,local_288);
  if (bVar5 != 0) {
                    /* try { // try from 001ee839 to 001ee85e has its CatchHandler @ 001ee963 */
    FillType::operator=((FillType *)local_88,(FillType *)local_288);
    Component::internalRepaintUnchecked((long)local_258,0,local_218,'\x01');
    if (plStack_278 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_278 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_278 + 8))();
      }
    }
  }
  pvVar3 = local_280;
  if (local_280 != (void *)0x0) {
    *(undefined4 *)((long)local_280 + 0x24) = 0;
    free(*(void **)((long)local_280 + 0x18));
    operator_delete(pvVar3);
  }
  pvVar3 = local_2b8;
  uVar4 = uStack_2b0._4_4_;
  uVar7 = (ulong)uStack_2b0._4_4_;
  if ((int)uStack_2b0._4_4_ < 1) {
    uVar8 = 0;
    __dest = (void *)0x0;
  }
  else {
    uVar8 = (uStack_2b0._4_4_ >> 1) + uStack_2b0._4_4_ + 8 & 0xfffffff8;
    if ((int)uVar8 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar8 << 2);
    }
    memcpy(__dest,pvVar3,uVar7 * 4);
  }
  __ptr = local_d8;
  uStack_d0 = CONCAT44(uVar4,uVar8);
  local_c8 = local_2a8;
  uStack_c0 = uStack_2a0;
  local_b8 = local_298;
  local_d8 = __dest;
  free(__ptr);
                    /* try { // try from 001ee924 to 001ee93c has its CatchHandler @ 001ee9a6 */
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar10,uVar9),
             (Component *)local_258);
  DrawableButton::setImages((long *)this,(long *)local_258,(long *)0x0);
  DrawableShape::~DrawableShape((DrawableShape *)local_258);
  free(pvVar3);
  return this;
}


