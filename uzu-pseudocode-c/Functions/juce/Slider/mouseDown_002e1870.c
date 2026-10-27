// Function : mouseDown
// Namespace: juce:Slider
// Entry    : 002e1870
// Prototype: undefined mouseDown(Slider * this, float * param_1)
// Body     : 002e1870 - 002e2a51


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::mouseDown(juce::MouseEvent const&) */

void __thiscall juce::Slider::mouseDown(Slider *this,float *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  Pimpl *this_00;
  Component *this_01;
  double dVar4;
  __time_t __ptr;
  undefined8 uVar5;
  LookAndFeel_V4 *pLVar6;
  long *plVar7;
  float *pfVar8;
  long *plVar9;
  Desktop *pDVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  Item *pIVar14;
  Item *pIVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  Pimpl *pPVar19;
  int *piVar20;
  int iVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar27;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  timespec local_218;
  long *local_208;
  long *local_200;
  long *local_1f8;
  long *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  Item *local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  ulong local_1b0;
  Item *local_1a8;
  undefined8 uStack_1a0;
  long *local_198;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  long local_118;
  undefined1 local_110 [8];
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  Options local_80 [16];
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  this_00 = *(Pimpl **)(this + 0x1a0);
  *(undefined2 *)(this_00 + 0x239) = 0;
  uVar26 = *(undefined8 *)param_1;
  *(undefined8 *)(this_00 + 0x1d0) = uVar26;
  *(undefined8 *)(this_00 + 0x1c8) = uVar26;
  plVar7 = *(long **)(this_00 + 0x200);
  *(undefined8 *)(this_00 + 0x200) = 0;
  if (plVar7 != (long *)0x0) {
    if (*(Pimpl **)(*plVar7 + 0x1a0) != (Pimpl *)0x0) {
                    /* try { // try from 002e18cc to 002e18d0 has its CatchHandler @ 002e2dc2 */
      Pimpl::sendDragEnd(*(Pimpl **)(*plVar7 + 0x1a0));
    }
    operator_delete(plVar7);
  }
  this_01 = *(Component **)(this_00 + 0x270);
  *(undefined8 *)(this_00 + 0x270) = 0;
  if (this_01 != (Component *)0x0) {
    if (*(long *)(*(long *)(this_01 + 0x138) + 0x1a0) != 0) {
      clock_gettime(1,&local_218);
      *(double *)(*(long *)(*(long *)(this_01 + 0x138) + 0x1a0) + 0x248) =
           (double)(local_218.tv_nsec / 1000 + local_218.tv_sec * 1000000) * DAT_00651e50;
    }
    piVar20 = (int *)(*(long *)(this_01 + 0x148) + -0x10);
    if (piVar20 != &emptyString) {
      LOCK();
      iVar12 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar20);
      }
    }
    plVar7 = *(long **)(this_01 + 0x140);
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    Timer::~Timer((Timer *)(this_01 + 0x110));
    Component::~Component(this_01);
    operator_delete(this_01);
  }
  lVar18 = *(long *)(this_00 + 0x18);
  lVar13 = lVar18;
  do {
    if ((*(ushort *)(lVar13 + 0xe8) & 0x8000) != 0) {
      return;
    }
    lVar13 = *(long *)(lVar13 + 0x30);
  } while (lVar13 != 0);
  if ((((uint)param_1[4] & 0x20) == 0) || (this_00[0x238] == (Pimpl)0x0)) {
    iVar12 = *(int *)(this_00 + 0x20);
    if ((this_00[0x231] == (Pimpl)0x0) || (iVar12 == 8)) {
      uVar22 = (undefined4)*(undefined8 *)(this_00 + 0xf8);
      uVar27 = (undefined4)((ulong)*(undefined8 *)(this_00 + 0xf8) >> 0x20);
      uVar28 = (undefined4)*(undefined8 *)(this_00 + 0x100);
      uVar29 = (undefined4)((ulong)*(undefined8 *)(this_00 + 0x100) >> 0x20);
    }
    else {
      dVar24 = *(double *)(this_00 + 0xf8);
      uVar22 = SUB84(dVar24,0);
      uVar27 = (undefined4)((ulong)dVar24 >> 0x20);
      dVar25 = *(double *)(this_00 + 0x100);
      uVar28 = SUB84(dVar25,0);
      uVar29 = (undefined4)((ulong)dVar25 >> 0x20);
      if ((((dVar24 <= *(double *)(this_00 + 0x180)) && (*(double *)(this_00 + 0x180) <= dVar25)) &&
          (*(uint *)(this_00 + 0x250) != 0)) &&
         (((uint)param_1[4] & 0xfffffe0f) == *(uint *)(this_00 + 0x250))) {
        Pimpl::mouseDoubleClick(this_00);
        return;
      }
    }
    if ((double)CONCAT44(uVar29,uVar28) < (double)CONCAT44(uVar27,uVar22) ||
        (double)CONCAT44(uVar29,uVar28) == (double)CONCAT44(uVar27,uVar22)) {
      return;
    }
    this_00[0x239] = (Pimpl)0x1;
    if (*(Label **)(this_00 + 600) != (Label *)0x0) {
      Label::hideEditor(*(Label **)(this_00 + 600),'\x01');
      iVar12 = *(int *)(this_00 + 0x20);
    }
    iVar21 = 0;
    switch(iVar12) {
    case 9:
    case 0xb:
      pfVar8 = param_1;
      break;
    case 10:
    case 0xc:
      pfVar8 = param_1 + 1;
      break;
    default:
      goto switchD_002e1e55_default;
    }
    local_1b0 = CONCAT44(local_1b0._4_4_,*pfVar8);
    (**(code **)(**(long **)(this_00 + 0x50) + 0x10))(&local_218);
                    /* try { // try from 002e1e8c to 002e1e91 has its CatchHandler @ 002e2b19 */
    dVar25 = (double)(**(code **)(local_218.tv_sec + 0x20))(&local_218.tv_nsec);
    dVar24 = DAT_005db338;
    if (((*(double *)(this_00 + 0xf8) < *(double *)(this_00 + 0x100)) &&
        (dVar24 = 0.0, *(double *)(this_00 + 0xf8) <= dVar25)) &&
       (dVar24 = _DAT_005d9000, dVar25 <= *(double *)(this_00 + 0x100))) {
                    /* try { // try from 002e2a2d to 002e2a36 has its CatchHandler @ 002e2a6d */
      dVar24 = (double)(**(code **)(**(long **)(this_00 + 0x18) + 0x1c8))(SUB84(dVar25,0));
    }
    uVar3 = *(int *)(this_00 + 0x20) - 1;
    dVar31 = _DAT_005d9000 - dVar24;
    local_120 = dVar31;
    dVar25 = dVar31;
    if ((*(int *)(this_00 + 0x20) != 8) &&
       (local_120 = dVar24, dVar25 = dVar24, (0xa05U >> (uVar3 & 0x1f) & 1) != 0)) {
      local_120 = dVar31;
    }
    if (0xb < uVar3) {
      local_120 = dVar25;
    }
    local_150 = (double)*(int *)(this_00 + 0x1d8);
    local_158 = (double)*(int *)(this_00 + 0x1dc);
                    /* try { // try from 002e1f47 to 002e1f4c has its CatchHandler @ 002e2b11 */
    (**(code **)(local_218.tv_sec + 0x58))(&local_218.tv_nsec);
    (**(code **)(**(long **)(this_00 + 0x80) + 0x10))(&local_218);
                    /* try { // try from 002e1f69 to 002e1f6e has its CatchHandler @ 002e2b09 */
    dVar25 = (double)(**(code **)(local_218.tv_sec + 0x20))(&local_218.tv_nsec);
    dVar24 = DAT_005db338;
    if (((*(double *)(this_00 + 0xf8) < *(double *)(this_00 + 0x100)) &&
        (dVar24 = 0.0, *(double *)(this_00 + 0xf8) <= dVar25)) &&
       (dVar24 = _DAT_005d9000, dVar25 <= *(double *)(this_00 + 0x100))) {
                    /* try { // try from 002e2a43 to 002e2a4c has its CatchHandler @ 002e2a52 */
      dVar24 = (double)(**(code **)(**(long **)(this_00 + 0x18) + 0x1c8))(SUB84(dVar25,0));
    }
    uVar3 = *(uint *)(this_00 + 0x20);
    dVar31 = _DAT_005d9000 - dVar24;
    dVar25 = dVar31;
    local_128 = dVar31;
    if ((uVar3 != 8) &&
       (dVar25 = dVar24, local_128 = dVar24, (0xa05U >> (uVar3 - 1 & 0x1f) & 1) != 0)) {
      dVar25 = dVar31;
    }
    if (uVar3 - 1 < 0xc) {
      local_128 = dVar25;
    }
    uVar16 = DAT_005de52c;
    if ((uVar3 < 0xd) && ((0x140aU >> (uVar3 & 0x1f) & 1) != 0)) {
      uVar16 = DAT_005d9068;
    }
    local_98 = ZEXT416(uVar16);
    local_138 = (double)*(int *)(this_00 + 0x1dc);
    local_130 = (double)*(int *)(this_00 + 0x1d8);
                    /* try { // try from 002e208e to 002e2093 has its CatchHandler @ 002e2b01 */
    (**(code **)(local_218.tv_sec + 0x58))(&local_218.tv_nsec);
    (**(code **)(**(long **)(this_00 + 0xb0) + 0x10))(&local_218);
                    /* try { // try from 002e20b0 to 002e20b5 has its CatchHandler @ 002e2af9 */
    dVar25 = (double)(**(code **)(local_218.tv_sec + 0x20))(&local_218.tv_nsec);
    dVar24 = DAT_005db338;
    if (((*(double *)(this_00 + 0xf8) < *(double *)(this_00 + 0x100)) &&
        (dVar24 = 0.0, *(double *)(this_00 + 0xf8) <= dVar25)) &&
       (dVar24 = _DAT_005d9000, dVar25 <= *(double *)(this_00 + 0x100))) {
                    /* try { // try from 002e20f1 to 002e20fa has its CatchHandler @ 002e2a88 */
      dVar24 = (double)(**(code **)(**(long **)(this_00 + 0x18) + 0x1c8))(SUB84(dVar25,0));
    }
    uVar3 = *(uint *)(this_00 + 0x20);
    dVar25 = _DAT_005d9000 - dVar24;
    dVar4 = dVar25;
    dVar31 = dVar25;
    if ((uVar3 != 8) && (dVar4 = dVar24, dVar31 = dVar24, (0xa05U >> (uVar3 - 1 & 0x1f) & 1) != 0))
    {
      dVar4 = dVar25;
    }
    if (uVar3 - 1 < 0xc) {
      dVar31 = dVar4;
    }
    uVar16 = DAT_005d9068;
    if ((uVar3 < 0xd) && ((0x140aU >> (uVar3 & 0x1f) & 1) != 0)) {
      uVar16 = DAT_005de52c;
    }
    local_a8 = ZEXT416(uVar16);
    local_148 = (double)*(int *)(this_00 + 0x1dc);
    local_140 = (double)*(int *)(this_00 + 0x1d8);
                    /* try { // try from 002e21b6 to 002e21bb has its CatchHandler @ 002e2af1 */
    (**(code **)(local_218.tv_sec + 0x58))(&local_218.tv_nsec);
    fVar30 = (float)((uint)(((float)local_98._0_4_ + (float)(local_128 * local_138 + local_130)) -
                           (float)local_1b0) & _DAT_005d91c0);
    fVar32 = (float)((uint)(((float)local_a8._0_4_ + (float)(dVar31 * local_148 + local_140)) -
                           (float)local_1b0) & _DAT_005d91c0);
    if (*(int *)(this_00 + 0x20) - 9U < 2) {
      iVar12 = 2 - (uint)(fVar30 < fVar32);
    }
    else {
      fVar23 = (float)((uint)((float)(local_120 * local_158 + local_150) - (float)local_1b0) &
                      _DAT_005d91c0);
      if (((fVar23 < fVar30) || (iVar12 = 1, fVar32 < fVar30)) && (iVar12 = 2, fVar23 < fVar32))
      goto switchD_002e1e55_default;
    }
    iVar21 = iVar12;
switchD_002e1e55_default:
    *(int *)(this_00 + 0x1e0) = iVar21;
    (**(code **)(**(long **)(this_00 + 0xb0) + 0x10))(&local_218);
                    /* try { // try from 002e22ac to 002e22b7 has its CatchHandler @ 002e2b8f */
    dVar24 = (double)(**(code **)(local_218.tv_sec + 0x20))(&local_218.tv_nsec);
                    /* try { // try from 002e22c2 to 002e22cc has its CatchHandler @ 002e2b74 */
    (**(code **)(**(long **)(this_00 + 0x80) + 0x10))(&local_118);
                    /* try { // try from 002e22dd to 002e22e2 has its CatchHandler @ 002e2b6c */
    dVar25 = (double)(**(code **)(local_118 + 0x20))(local_110);
    *(double *)(this_00 + 0x1b0) = dVar24 - dVar25;
                    /* try { // try from 002e22fe to 002e2303 has its CatchHandler @ 002e2b64 */
    (**(code **)(local_118 + 0x58))(local_110);
                    /* try { // try from 002e2309 to 002e230e has its CatchHandler @ 002e2b5c */
    (**(code **)(local_218.tv_sec + 0x58))(&local_218.tv_nsec);
    if (1 < *(int *)(this_00 + 0x20) - 9U) {
      fVar30 = *(float *)(this_00 + 0x1bc);
      local_1b0 = CONCAT44(local_1b0._4_4_,*(undefined4 *)(this_00 + 0x1c0));
      plVar7 = *(long **)(this_00 + 0x18);
      (**(code **)(**(long **)(this_00 + 0x50) + 0x10))(&local_218);
                    /* try { // try from 002e235a to 002e235f has its CatchHandler @ 002e2ace */
      (**(code **)(local_218.tv_sec + 0x20))(&local_218.tv_nsec);
                    /* try { // try from 002e2364 to 002e236c has its CatchHandler @ 002e2ab3 */
      dVar24 = (double)(**(code **)(*plVar7 + 0x1c8))(plVar7);
      *(double *)(this_00 + 0x198) = (double)((float)local_1b0 - fVar30) * dVar24 + (double)fVar30;
                    /* try { // try from 002e239b to 002e23a0 has its CatchHandler @ 002e2aab */
      (**(code **)(local_218.tv_sec + 0x58))(&local_218.tv_nsec);
    }
    pPVar19 = this_00 + 0x50;
    if (*(int *)(this_00 + 0x1e0) == 1) {
      pPVar19 = this_00 + 0x80;
    }
    if (*(int *)(this_00 + 0x1e0) == 2) {
      pPVar19 = this_00 + 0xb0;
    }
    (**(code **)(**(long **)pPVar19 + 0x10))(&local_218);
                    /* try { // try from 002e23e0 to 002e23e5 has its CatchHandler @ 002e2b54 */
    uVar26 = (**(code **)(local_218.tv_sec + 0x20))(&local_218.tv_nsec);
    *(undefined8 *)(this_00 + 0x188) = uVar26;
                    /* try { // try from 002e23f4 to 002e23f9 has its CatchHandler @ 002e2b4c */
    (**(code **)(local_218.tv_sec + 0x58))(&local_218.tv_nsec);
    *(undefined8 *)(this_00 + 400) = *(undefined8 *)(this_00 + 0x188);
    if (this_00[0x236] != (Pimpl)0x0 || this_00[0x237] != (Pimpl)0x0) {
      Pimpl::showPopupDisplay(this_00);
      if (*(long *)(this_00 + 0x270) != 0) {
        Timer::stopTimer((Timer *)(*(long *)(this_00 + 0x270) + 0x110));
      }
    }
    lVar18 = *(long *)(this_00 + 0x18);
    plVar9 = operator_new(8);
    *plVar9 = lVar18;
                    /* try { // try from 002e2457 to 002e245b has its CatchHandler @ 002e2b39 */
    Pimpl::sendDragStart(*(Pimpl **)(lVar18 + 0x1a0));
    plVar7 = *(long **)(this_00 + 0x200);
    *(long **)(this_00 + 0x200) = plVar9;
    if (plVar7 != (long *)0x0) {
      if (*(Pimpl **)(*plVar7 + 0x1a0) != (Pimpl *)0x0) {
                    /* try { // try from 002e247e to 002e2482 has its CatchHandler @ 002e2aa3 */
        Pimpl::sendDragEnd(*(Pimpl **)(*plVar7 + 0x1a0));
      }
      operator_delete(plVar7);
    }
    Pimpl::mouseDrag(this_00,param_1);
    return;
  }
  local_1a8 = (Item *)0x0;
  uStack_1a0 = 0;
  local_198 = (long *)0x0;
  do {
    if ((*(long *)(lVar18 + 0x68) != 0) &&
       (pLVar6 = *(LookAndFeel_V4 **)(*(long *)(lVar18 + 0x68) + 0x10),
       pLVar6 != (LookAndFeel_V4 *)0x0)) {
      plVar7 = *(long **)(pLVar6 + 0x120);
      goto joined_r0x002e1a49;
    }
    lVar18 = *(long *)(lVar18 + 0x30);
  } while (lVar18 != 0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e1ae0 to 002e1ae9 has its CatchHandler @ 002e2ae9 */
    pDVar10 = operator_new(0x1d0);
                    /* try { // try from 002e1aed to 002e1af4 has its CatchHandler @ 002e2ad6 */
    Desktop::Desktop(pDVar10);
    Desktop::instance = pDVar10;
  }
  pLVar6 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  plVar7 = *(long **)(pLVar6 + 0x120);
joined_r0x002e1a49:
  if (plVar7 == (long *)0x0) {
                    /* try { // try from 002e1b13 to 002e1b1c has its CatchHandler @ 002e2dca */
    plVar7 = operator_new(0x18);
    *(undefined4 *)(plVar7 + 1) = 0;
    *plVar7 = (long)&PTR__ReferenceCountedObject_00710ff8;
    plVar7[2] = (long)pLVar6;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar9 = *(long **)(pLVar6 + 0x120);
    *(long **)(pLVar6 + 0x120) = plVar7;
    if (plVar9 == (long *)0x0) goto LAB_002e1b67;
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = local_198;
    plVar7 = *(long **)(pLVar6 + 0x120);
    if (plVar7 != (long *)0x0) goto LAB_002e1b67;
    local_198 = (long *)0x0;
    plVar7 = local_198;
  }
  else {
LAB_002e1b67:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar9 = local_198;
  }
  local_198 = plVar7;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
  }
                    /* try { // try from 002e1b8e to 002e1ba1 has its CatchHandler @ 002e2dca */
  translate((juce *)&local_160,(byte *)"Velocity-sensitive mode");
                    /* try { // try from 002e1baa to 002e1bc8 has its CatchHandler @ 002e2c4c */
  PopupMenu::addItem((PopupMenu *)&local_1a8,1,&local_160,1,this_00[0x232]);
  piVar20 = (int *)(local_160 + -0x10);
  if (piVar20 != &emptyString) {
    LOCK();
    iVar12 = *piVar20;
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      operator_delete__(piVar20);
    }
  }
                    /* try { // try from 002e1bf3 to 002e1bff has its CatchHandler @ 002e2dca */
  PopupMenu::addSeparator((PopupMenu *)&local_1a8);
  if ((*(uint *)(this_00 + 0x20) & 0xfffffffc) == 4) {
    local_218.tv_sec = 0;
    local_218.tv_nsec = 0;
    local_208 = (long *)0x0;
                    /* try { // try from 002e1c23 to 002e1c36 has its CatchHandler @ 002e2dd2 */
    translate((juce *)&local_168,(byte *)"Use circular dragging");
                    /* try { // try from 002e1c43 to 002e1c5e has its CatchHandler @ 002e2c05 */
    PopupMenu::addItem((PopupMenu *)&local_218,2,&local_168,1,*(int *)(this_00 + 0x20) == 4);
    piVar20 = (int *)(local_168 + -0x10);
    if (piVar20 != &emptyString) {
      LOCK();
      iVar12 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar20);
      }
    }
                    /* try { // try from 002e1c82 to 002e1c95 has its CatchHandler @ 002e2dd2 */
    translate((juce *)&local_170,(byte *)"Use left-right dragging");
                    /* try { // try from 002e1ca2 to 002e1cbd has its CatchHandler @ 002e2bf8 */
    PopupMenu::addItem((PopupMenu *)&local_218,3,&local_170,1,*(int *)(this_00 + 0x20) == 5);
    piVar20 = (int *)(local_170 + -0x10);
    if (piVar20 != &emptyString) {
      LOCK();
      iVar12 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar20);
      }
    }
                    /* try { // try from 002e1ce1 to 002e1cf4 has its CatchHandler @ 002e2dd2 */
    translate((juce *)&local_178,(byte *)"Use up-down dragging");
                    /* try { // try from 002e1d01 to 002e1d1c has its CatchHandler @ 002e2beb */
    PopupMenu::addItem((PopupMenu *)&local_218,4,&local_178,1,*(int *)(this_00 + 0x20) == 6);
    piVar20 = (int *)(local_178 + -0x10);
    if (piVar20 != &emptyString) {
      LOCK();
      iVar12 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar20);
      }
    }
                    /* try { // try from 002e1d40 to 002e1d53 has its CatchHandler @ 002e2dd2 */
    translate((juce *)&local_180,(byte *)"Use left-right/up-down dragging");
                    /* try { // try from 002e1d60 to 002e1d7b has its CatchHandler @ 002e2bde */
    PopupMenu::addItem((PopupMenu *)&local_218,5,&local_180,1,*(int *)(this_00 + 0x20) == 7);
    piVar20 = (int *)(local_180 + -0x10);
    if (piVar20 != &emptyString) {
      LOCK();
      iVar12 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar20);
      }
    }
                    /* try { // try from 002e1d9f to 002e1db2 has its CatchHandler @ 002e2dd2 */
    translate((juce *)&local_188,(byte *)"Rotary mode");
    pIVar15 = (Item *)local_218.tv_sec;
    local_1c8 = (Item *)0x0;
    uStack_1c0 = 0;
    uVar3 = local_218.tv_nsec._4_4_;
    local_1b0 = (ulong)local_218.tv_nsec._4_4_;
    if ((int)local_218.tv_nsec._4_4_ < 1) {
      iVar12 = 0;
    }
    else {
      uVar16 = local_218.tv_nsec._4_4_ + (local_218.tv_nsec._4_4_ >> 1) + 8;
      uVar17 = uVar16 & 0xfffffff8;
      if ((int)uVar17 < 1) {
        iVar12 = 0;
      }
      else {
        ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                  ((ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)&local_1c8,uVar17)
        ;
        iVar12 = uStack_1c0._4_4_;
      }
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16) & 0xfffffffffffffff8;
    }
    iVar21 = uVar3 + 1;
    pIVar14 = local_1c8 + (long)iVar12 * 0x70;
    while (iVar21 = iVar21 + -1, 0 < iVar21) {
                    /* try { // try from 002e24d1 to 002e24d8 has its CatchHandler @ 002e2dd7 */
      PopupMenu::Item::Item(pIVar14,(long *)pIVar15);
      pIVar14 = pIVar14 + 0x70;
      pIVar15 = pIVar15 + 0x70;
    }
    uStack_1c0 = CONCAT44(iVar12 + (int)(float)local_1b0,(undefined4)uStack_1c0);
    local_1b8 = local_208;
    if (local_208 != (long *)0x0) {
      LOCK();
      *(int *)(local_208 + 1) = (int)local_208[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 002e2501 to 002e251f has its CatchHandler @ 002e2b97 */
    PopupMenu::addSubMenu((PopupMenu *)&local_1a8,&local_188,(long *)&local_1c8,1);
    if (local_1b8 != (long *)0x0) {
      LOCK();
      plVar7 = local_1b8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_1b8 + 8))();
      }
    }
    pIVar15 = local_1c8;
    lVar18 = (long)uStack_1c0._4_4_;
    if (0 < lVar18) {
      pIVar14 = local_1c8;
      do {
        PopupMenu::Item::~Item(pIVar14);
        pIVar14 = pIVar14 + 0x70;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    uStack_1c0 = uStack_1c0 & 0xffffffff;
    free(pIVar15);
    piVar20 = (int *)(local_188 + -0x10);
    if (piVar20 != &emptyString) {
      LOCK();
      iVar12 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar20);
      }
    }
    if (local_208 != (long *)0x0) {
      LOCK();
      plVar7 = local_208 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_208 + 8))();
      }
    }
    __ptr = local_218.tv_sec;
    lVar18 = (long)(int)local_218.tv_nsec._4_4_;
    if (0 < lVar18) {
      pIVar15 = (Item *)local_218.tv_sec;
      do {
        PopupMenu::Item::~Item(pIVar15);
        pIVar15 = pIVar15 + 0x70;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    free((void *)__ptr);
  }
                    /* try { // try from 002e25f1 to 002e25fd has its CatchHandler @ 002e2c44 */
  PopupMenu::Options::Options(local_80);
                    /* try { // try from 002e2602 to 002e2616 has its CatchHandler @ 002e2c3c */
  PopupMenu::Options::withTargetComponent
            ((undefined1 (*) [16])&local_118,(undefined8 *)local_80,*(long *)(this_00 + 0x18));
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e2623 to 002e262c has its CatchHandler @ 002e2b31 */
    pDVar10 = operator_new(0x1d0);
                    /* try { // try from 002e2630 to 002e2637 has its CatchHandler @ 002e2b21 */
    Desktop::Desktop(pDVar10);
    Desktop::instance = pDVar10;
  }
  uVar26 = detail::MouseInputSourceImpl::getScreenPosition
                     ((MouseInputSourceImpl *)
                      **(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28));
  plVar2 = local_f8;
  plVar9 = local_100;
  plVar7 = local_108;
  dVar25 = (double)(float)uVar26 + DAT_005d9098;
  dVar24 = (double)(float)((ulong)uVar26 >> 0x20) + DAT_005d9098;
  if (local_108 != (long *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  if (local_100 != (long *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  if (local_f8 != (long *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  local_218.tv_sec = (long)dVar24 << 0x20 | (ulong)dVar25 & 0xffffffff;
  if (local_f0 != (long *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  local_b8 = local_d8;
  uStack_b0 = uStack_d0;
  local_c8 = local_e8;
  uVar26 = local_c8;
  uStack_c0 = uStack_e0;
  uVar5 = uStack_c0;
  local_218.tv_nsec = 0;
  local_208 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  local_200 = local_100;
  if (local_100 != (long *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  local_1f8 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  local_1f0 = local_f0;
  local_c8._0_4_ = (undefined4)local_e8;
  local_c8._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
  uStack_c0._0_4_ = (undefined4)uStack_e0;
  uStack_c0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
  local_c8 = uVar26;
  uStack_c0 = uVar5;
  if (local_f0 == (long *)0x0) {
    local_1d8 = local_d8;
    uStack_1d0 = uStack_d0;
    local_1e8 = (undefined4)local_c8;
    uStack_1e4 = local_c8._4_4_;
    uStack_1e0 = (undefined4)uStack_c0;
    uStack_1dc = uStack_c0._4_4_;
  }
  else {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
    local_1d8 = local_d8;
    uStack_1d0 = uStack_d0;
    local_1e8 = (undefined4)local_c8;
    uStack_1e4 = local_c8._4_4_;
    uStack_1e0 = (undefined4)uStack_c0;
    uStack_1dc = uStack_c0._4_4_;
    LOCK();
    plVar1 = local_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_f0 + 8))();
    }
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  lVar18 = *(long *)(this_00 + 0x18);
  if (lVar18 == 0) {
LAB_002e282f:
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = *(undefined8 **)(lVar18 + 0xd8);
    if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 002e27dc to 002e27e5 has its CatchHandler @ 002e2c86 */
      puVar11 = operator_new(0x18);
      *(undefined4 *)(puVar11 + 1) = 0;
      *puVar11 = &PTR__ReferenceCountedObject_00714b80;
      puVar11[2] = lVar18;
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
      plVar7 = *(long **)(lVar18 + 0xd8);
      *(undefined8 **)(lVar18 + 0xd8) = puVar11;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
        puVar11 = *(undefined8 **)(lVar18 + 0xd8);
        if (puVar11 == (undefined8 *)0x0) goto LAB_002e282f;
      }
    }
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
                    /* try { // try from 002e2831 to 002e283a has its CatchHandler @ 002e2c22 */
  plVar7 = operator_new(0x18);
  *plVar7 = (long)&PTR__Callable_00710278;
  plVar7[1] = (long)Pimpl::sliderMenuCallback;
  plVar7[2] = (long)puVar11;
                    /* try { // try from 002e2854 to 002e2868 has its CatchHandler @ 002e2c86 */
  PopupMenu::showWithOptionalCallback((long *)&local_1a8,&local_218.tv_sec,plVar7);
  if (local_1f0 != (long *)0x0) {
    LOCK();
    plVar7 = local_1f0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_1f0 + 8))();
    }
  }
  if (local_1f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_1f8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_1f8 + 8))();
    }
  }
  if (local_200 != (long *)0x0) {
    LOCK();
    plVar7 = local_200 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_200 + 8))();
    }
  }
  if (local_208 != (long *)0x0) {
    LOCK();
    plVar7 = local_208 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_208 + 8))();
    }
  }
  if (local_f0 != (long *)0x0) {
    LOCK();
    plVar7 = local_f0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_f0 + 8))();
    }
  }
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  if (local_100 != (long *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_100 + 8))();
    }
  }
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_108 + 8))();
    }
  }
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_58 + 8))();
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_68 + 8))();
    }
  }
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar7 = local_70 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_70 + 8))();
    }
  }
  if (local_198 != (long *)0x0) {
    LOCK();
    plVar7 = local_198 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_198 + 8))();
    }
  }
  pIVar15 = local_1a8;
  lVar18 = (long)uStack_1a0._4_4_;
  if (0 < lVar18) {
    pIVar14 = local_1a8;
    do {
      PopupMenu::Item::~Item(pIVar14);
      pIVar14 = pIVar14 + 0x70;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  free(pIVar15);
  return;
}


