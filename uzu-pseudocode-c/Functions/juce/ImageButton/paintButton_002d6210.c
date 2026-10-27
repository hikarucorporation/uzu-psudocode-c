// Function : paintButton
// Namespace: juce:ImageButton
// Entry    : 002d6210
// Prototype: undefined paintButton(ImageButton * this, undefined8 param_1, undefined4 param_3_00, byte param_3)
// Body     : 002d6210 - 002d64a9


/* juce::ImageButton::paintButton(juce::Graphics&, bool, bool) */

void __thiscall
juce::ImageButton::paintButton
          (ImageButton *this,undefined8 param_1,undefined4 param_3_00,byte param_3)

{
  long *plVar1;
  ImageButton *pIVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ImageButton *pIVar6;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar7;
  long lVar8;
  double dVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *local_68;
  undefined4 local_5c;
  double local_58;
  double local_50;
  undefined8 local_48;
  long local_40;
  undefined1 local_38 [8];
  
  pIVar6 = this;
  do {
    pIVar2 = pIVar6 + 0xe8;
    if ((*(uint3 *)pIVar2 & 0x8000) != 0) break;
    pIVar6 = *(ImageButton **)(pIVar6 + 0x30);
  } while (pIVar6 != (ImageButton *)0x0);
  bVar13 = (*(uint3 *)pIVar2 & 0x8000) == 0;
  getCurrentImage((long *)&local_68,(long)this);
  if (local_68 == (long *)0x0) {
    return;
  }
  local_58 = (double)(ulong)*(uint *)((long)local_68 + 0x14);
  uVar3 = *(uint *)(this + 0x40);
  local_50 = (double)(ulong)uVar3;
  uVar4 = *(uint *)(this + 0x44);
  dVar9 = (double)(ulong)*(uint *)(local_68 + 2);
  if (this[0x1f8] != (ImageButton)0x0) {
    if (this[0x1f9] == (ImageButton)0x0) {
      iVar12 = 0;
      local_58 = (double)(ulong)uVar4;
      iVar10 = 0;
      goto LAB_002d6342;
    }
    auVar15._4_4_ = (float)(int)uVar4;
    auVar15._0_4_ = (float)(int)*(uint *)((long)local_68 + 0x14);
    auVar16._0_4_ = (float)(int)*(uint *)(local_68 + 2);
    auVar16._4_4_ = (float)(int)uVar3;
    auVar16._8_8_ = 0;
    auVar15._8_8_ = 0;
    auVar15 = divps(auVar15,auVar16);
    fVar14 = auVar15._0_4_;
    if (fVar14 <= auVar15._4_4_) {
      local_58 = (double)(fVar14 * auVar16._4_4_) + DAT_005d9098;
      dVar9 = local_50;
    }
    else {
      local_58 = (double)(ulong)uVar4;
      dVar9 = (double)((float)(int)uVar4 / fVar14) + DAT_005d9098;
    }
  }
  iVar10 = (int)(uVar3 - SUB84(dVar9,0)) / 2;
  iVar12 = (int)(uVar4 - SUB84(local_58,0)) / 2;
  local_50 = dVar9;
LAB_002d6342:
  *(int *)(this + 0x1fc) = iVar10;
  *(int *)(this + 0x200) = iVar12;
  *(int *)(this + 0x204) = SUB84(local_50,0);
  *(int *)(this + 0x208) = SUB84(local_58,0);
  cVar5 = '\x01';
  local_5c = param_3_00;
  local_48 = param_1;
  if ((param_3 & bVar13) == 0) {
                    /* try { // try from 002d6381 to 002d6388 has its CatchHandler @ 002d64d5 */
    (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_40);
                    /* try { // try from 002d6393 to 002d6398 has its CatchHandler @ 002d64cd */
    cVar5 = (**(code **)(local_40 + 0x30))(local_38);
                    /* try { // try from 002d63a0 to 002d63a5 has its CatchHandler @ 002d64c5 */
    (**(code **)(local_40 + 0x58))(local_38);
  }
  bVar11 = bVar13 & (byte)local_5c;
  pIVar6 = this;
  do {
    if ((*(long *)(pIVar6 + 0x68) != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(*(long *)(pIVar6 + 0x68) + 0x10),
       pLVar7 != (LookAndFeel_V4 *)0x0)) goto LAB_002d6400;
    pIVar6 = *(ImageButton **)(pIVar6 + 0x30);
  } while (pIVar6 != (ImageButton *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d63d9 to 002d63e2 has its CatchHandler @ 002d64bd */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002d63e6 to 002d63ed has its CatchHandler @ 002d64aa */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002d6400:
  lVar8 = 0x23c;
  if (cVar5 == '\0') {
    lVar8 = (ulong)bVar11 * 4 + 0x234;
  }
                    /* try { // try from 002d646c to 002d6484 has its CatchHandler @ 002d64dd */
  (**(code **)(*(long *)(pLVar7 + 0x10) + 0x10))
            (pLVar7 + 0x10,local_48,&local_68,iVar10,iVar12,local_50,local_58,this + lVar8,this);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_68 + 8))();
    }
  }
  return;
}


