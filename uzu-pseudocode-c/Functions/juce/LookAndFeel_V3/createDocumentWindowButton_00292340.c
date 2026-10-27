// Function : createDocumentWindowButton
// Namespace: juce:LookAndFeel_V3
// Entry    : 00292340
// Prototype: Button * createDocumentWindowButton(undefined8 param_1_00, int param_2)
// Body     : 00292340 - 002929d2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V3::createDocumentWindowButton(int) */

Button * __thiscall
juce::LookAndFeel_V3::createDocumentWindowButton(undefined8 param_1_00,int param_2)

{
  int iVar1;
  int *__src;
  Button BVar2;
  Button *this;
  int *piVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  Button local_88;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  Button local_58;
  void *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_58 = (Button)0x1;
  if (param_2 == 1) {
    Path::addLineSegment(_DAT_005dce70,_DAT_005dce80,DAT_0065b200,(Path *)&local_78);
                    /* try { // try from 00292587 to 00292590 has its CatchHandler @ 00292a3d */
    this = operator_new(0x250);
                    /* try { // try from 00292594 to 0029259d has its CatchHandler @ 00292a2e */
    piVar3 = operator_new__(0x23);
    LOCK();
    *piVar3 = 0;
    UNLOCK();
    piVar3[2] = 0xc;
    piVar3[3] = 0;
    local_a8 = piVar3 + 4;
    piVar3[4] = 0x696e696d;
    piVar3[5] = 0x6573696d;
    *(undefined1 *)(piVar3 + 6) = 0;
                    /* try { // try from 002925cc to 002925d6 has its CatchHandler @ 002929d3 */
    Button::Button(this,(long *)&local_a8);
    *(undefined ***)this = &PTR__LookAndFeel_V3_DocumentWindowButton_0070ef80;
    *(undefined ***)(this + 0xf0) = &PTR__LookAndFeel_V3_DocumentWindowButton_0070f160;
    *(undefined4 *)(this + 0x1f8) = 0xffaa8811;
  }
  else {
    if (param_2 == 2) {
      Path::addLineSegment((ulong)DAT_005d9044,_DAT_005dce60,DAT_0065b200,(Path *)&local_78);
      Path::addLineSegment(_DAT_005dce70,_DAT_005dce80,DAT_0065b200,(Path *)&local_78);
      local_a8 = (int *)0x0;
      uStack_a0 = 0;
      local_88 = (Button)0x1;
      local_98 = _DAT_005dce90;
      uStack_90 = _UNK_005dce98;
      local_a8 = malloc(0x20);
      local_a8[0] = 0x47c35100;
      local_a8[1] = 0x42340000;
      uStack_a0 = 0x300000008;
      local_a8[2] = 0x42c80000;
      Path::lineTo(0.0,DAT_005d94c4,(Path *)&local_a8);
      Path::lineTo(0.0,0.0,(Path *)&local_a8);
      Path::lineTo(DAT_005d94c4,0.0,(Path *)&local_a8);
      Path::lineTo(DAT_005d94c4,DAT_005de43c,(Path *)&local_a8);
      iVar1 = uStack_a0._4_4_;
      lVar6 = (long)(int)uStack_a0._4_4_;
      if (lVar6 == 0) {
        local_98 = CONCAT44(_UNK_005dcec4,_DAT_005dcec0);
        uStack_90 = CONCAT44(_UNK_005dcecc,_UNK_005dcec8);
      }
      else {
        local_98 = CONCAT44(-(uint)(local_98._4_4_ < DAT_005dceb4) & _UNK_005dcec4 |
                            ~-(uint)(local_98._4_4_ < DAT_005dceb4) & (uint)local_98._4_4_,
                            -(uint)(DAT_005dcea0 < (float)local_98) & _DAT_005dcec0 |
                            ~-(uint)(DAT_005dcea0 < (float)local_98) & (uint)(float)local_98);
        uStack_90 = CONCAT44(-(uint)(uStack_90._4_4_ < DAT_005dcebc) & _UNK_005dcecc |
                             ~-(uint)(uStack_90._4_4_ < DAT_005dcebc) & (uint)uStack_90._4_4_,
                             -(uint)(DAT_005dcea8 < (float)uStack_90) & _UNK_005dcec8 |
                             ~-(uint)(DAT_005dcea8 < (float)uStack_90) & (uint)(float)uStack_90);
      }
      if ((int)(uint)uStack_a0 < (int)(uStack_a0._4_4_ + 0xd)) {
        uVar8 = uStack_a0._4_4_ + (int)(uStack_a0._4_4_ + 0xd) / 2 + 0x15 & 0xfffffff8;
        if ((uint)uStack_a0 != uVar8) {
          if ((int)uVar8 < 1) {
            free(local_a8);
            local_a8 = (int *)0x0;
          }
          else {
            local_a8 = realloc(local_a8,(ulong)uVar8 << 2);
          }
        }
        uStack_a0 = (ulong)uVar8;
      }
      (local_a8 + lVar6)[0] = 0x47c35100;
      (local_a8 + lVar6)[1] = 0x42340000;
      (local_a8 + lVar6 + 2)[0] = 0x43110000;
      (local_a8 + lVar6 + 2)[1] = 0x47c35080;
      (local_a8 + lVar6 + 4)[0] = 0x42340000;
      (local_a8 + lVar6 + 4)[1] = 0x42340000;
      (local_a8 + lVar6 + 6)[0] = 0x47c35080;
      (local_a8 + lVar6 + 6)[1] = 0x43110000;
      (local_a8 + lVar6 + 8)[0] = 0x42340000;
      (local_a8 + lVar6 + 8)[1] = 0x47c35080;
      (local_a8 + lVar6 + 10)[0] = 0x43110000;
      (local_a8 + lVar6 + 10)[1] = 0x43110000;
      uStack_a0 = CONCAT44(iVar1 + 0xd,(uint)uStack_a0);
      local_a8[lVar6 + 0xc] = 0x47c35280;
      local_48 = ZEXT416((uint)DAT_005d9038);
      local_38 = 0x3f800000;
      PathStrokeHelpers::createStroke
                (DAT_005de440,DAT_005d9038,0,0,(Path *)&local_a8,(Path *)&local_a8,(float *)local_48
                );
                    /* try { // try from 0029281d to 00292826 has its CatchHandler @ 00292a18 */
      this = operator_new(0x250);
                    /* try { // try from 0029282a to 00292833 has its CatchHandler @ 00292a0b */
      piVar3 = operator_new__(0x23);
      LOCK();
      *piVar3 = 0;
      UNLOCK();
      piVar3[2] = 0xc;
      piVar3[3] = 0;
      piVar3[4] = 0x6978616d;
      piVar3[5] = 0x6573696d;
      *(undefined1 *)(piVar3 + 6) = 0;
      local_48._0_8_ = piVar3 + 4;
                    /* try { // try from 00292863 to 0029286f has its CatchHandler @ 002929f0 */
      Button::Button(this,(long *)local_48);
      pvVar5 = local_78;
      *(undefined ***)this = &PTR__LookAndFeel_V3_DocumentWindowButton_0070ef80;
      *(undefined ***)(this + 0xf0) = &PTR__LookAndFeel_V3_DocumentWindowButton_0070f160;
      *(undefined4 *)(this + 0x1f8) = 0xff119911;
      *(undefined8 *)(this + 0x200) = 0;
      *(undefined8 *)(this + 0x208) = 0;
      uVar8 = uStack_70._4_4_;
      uVar9 = (ulong)uStack_70._4_4_;
      if (0 < (int)uStack_70._4_4_) {
        uVar7 = uStack_70._4_4_ + (uStack_70._4_4_ >> 1) + 8 & 0xfffffff8;
        if ((int)uVar7 < 1) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = malloc((ulong)uVar7 << 2);
          *(void **)(this + 0x200) = pvVar4;
        }
        *(uint *)(this + 0x208) = uVar7;
        memcpy(pvVar4,pvVar5,uVar9 * 4);
      }
      __src = local_a8;
      *(uint *)(this + 0x20c) = uVar8;
      *(undefined8 *)(this + 0x210) = local_68;
      *(undefined8 *)(this + 0x218) = uStack_60;
      this[0x220] = local_58;
      *(undefined8 *)(this + 0x228) = 0;
      *(undefined8 *)(this + 0x230) = 0;
      uVar8 = uStack_a0._4_4_;
      uVar9 = (ulong)uStack_a0._4_4_;
      if (0 < (int)uStack_a0._4_4_) {
        uVar7 = uStack_a0._4_4_ + (uStack_a0._4_4_ >> 1) + 8 & 0xfffffff8;
        if ((int)uVar7 < 1) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = malloc((ulong)uVar7 << 2);
          *(void **)(this + 0x228) = pvVar5;
        }
        *(uint *)(this + 0x230) = uVar7;
        memcpy(pvVar5,__src,uVar9 * 4);
      }
      *(uint *)(this + 0x234) = uVar8;
      *(undefined8 *)(this + 0x238) = local_98;
      *(undefined8 *)(this + 0x240) = uStack_90;
      this[0x248] = local_88;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
      uStack_a0 = uStack_a0 & 0xffffffff;
      free(local_a8);
      goto LAB_002929b7;
    }
    if (param_2 != 4) {
      this = (Button *)0x0;
      goto LAB_002929b7;
    }
    Path::addLineSegment(0,_DAT_005dcc70,DAT_005de474,(Path *)&local_78);
    Path::addLineSegment((ulong)(uint)DAT_005d9038,DAT_005d9960,DAT_005de474,(Path *)&local_78);
                    /* try { // try from 002923b9 to 002923c2 has its CatchHandler @ 00292a3d */
    this = operator_new(0x250);
                    /* try { // try from 002923c6 to 002923cf has its CatchHandler @ 00292a30 */
    piVar3 = operator_new__(0x1f);
    LOCK();
    *piVar3 = 0;
    UNLOCK();
    piVar3[2] = 8;
    piVar3[3] = 0;
    local_a8 = piVar3 + 4;
    piVar3[4] = 0x736f6c63;
    *(undefined2 *)(piVar3 + 5) = 0x65;
                    /* try { // try from 002923fa to 00292404 has its CatchHandler @ 002929d5 */
    Button::Button(this,(long *)&local_a8);
    *(undefined ***)this = &PTR__LookAndFeel_V3_DocumentWindowButton_0070ef80;
    *(undefined ***)(this + 0xf0) = &PTR__LookAndFeel_V3_DocumentWindowButton_0070f160;
    *(undefined4 *)(this + 0x1f8) = 0xffdd1100;
  }
  pvVar5 = local_78;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  uVar8 = uStack_70._4_4_;
  uVar9 = (ulong)uStack_70._4_4_;
  if (0 < (int)uStack_70._4_4_) {
    uVar7 = uStack_70._4_4_ + (uStack_70._4_4_ >> 1) + 8 & 0xfffffff8;
    if ((int)uVar7 < 1) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = malloc((ulong)uVar7 << 2);
      *(void **)(this + 0x200) = pvVar4;
    }
    *(uint *)(this + 0x208) = uVar7;
    memcpy(pvVar4,pvVar5,uVar9 * 4);
  }
  BVar2 = local_58;
  *(uint *)(this + 0x20c) = uVar8;
  *(undefined8 *)(this + 0x210) = local_68;
  *(undefined8 *)(this + 0x218) = uStack_60;
  this[0x220] = local_58;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  if (0 < (int)uVar8) {
    uVar7 = uVar8 + (uVar8 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar7 < 1) {
      pvVar4 = (void *)0x0;
    }
    else {
      local_50 = pvVar5;
      pvVar4 = malloc((ulong)uVar7 << 2);
      *(void **)(this + 0x228) = pvVar4;
      pvVar5 = local_50;
    }
    *(uint *)(this + 0x230) = uVar7;
    memcpy(pvVar4,pvVar5,uVar9 * 4);
  }
  *(uint *)(this + 0x234) = uVar8;
  *(undefined8 *)(this + 0x238) = local_68;
  *(undefined8 *)(this + 0x240) = uStack_60;
  this[0x248] = BVar2;
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar3);
  }
LAB_002929b7:
  free(local_78);
  return this;
}


