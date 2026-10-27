// Function : paint
// Namespace: juce:Component:EffectState
// Entry    : 00284730
// Prototype: undefined paint(EffectState * this, long param_1, Component * param_2, undefined4 param_3)
// Body     : 00284730 - 00284afa


/* juce::Component::EffectState::paint(juce::Graphics&, juce::Component&, bool) */

void __thiscall
juce::Component::EffectState::paint
          (EffectState *this,long param_1,Component *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  Image *this_00;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  undefined4 local_5c;
  long *local_58;
  float local_50;
  undefined4 local_4c;
  float local_48 [5];
  undefined4 local_34;
  
  local_4c = param_3;
  fVar10 = (float)(**(code **)(**(long **)(param_1 + 8) + 0x28))();
  fVar12 = fVar10 * 0.0;
  iVar3 = *(int *)(param_2 + 0x44);
  iVar6 = -0x80000000;
  fVar11 = (float)*(int *)(param_2 + 0x40) * fVar10;
  if (DAT_00653430 < fVar12) {
    local_50 = (float)*(int *)(param_2 + 0x40) * fVar10;
    fVar11 = floorf(fVar12);
    iVar6 = (int)fVar11;
    fVar11 = local_50;
  }
  iVar9 = 0x7fffffff;
  iVar7 = 0x7fffffff;
  if (fVar11 + fVar12 < DAT_00653434) {
    fVar11 = ceilf(fVar11 + fVar12);
    iVar7 = (int)fVar11;
  }
  fVar12 = fVar12 + (float)iVar3 * fVar10;
  if (fVar12 < DAT_00653434) {
    fVar11 = ceilf(fVar12);
    iVar9 = (int)fVar11;
  }
  iVar7 = iVar7 - iVar6;
  iVar9 = iVar9 - iVar6;
  (**(code **)(**(long **)(param_1 + 8) + 0x110))(&local_58);
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    if (((int)plVar1[2] == iVar7) && (*(int *)((long)plVar1 + 0x14) == iVar9)) {
                    /* try { // try from 00284863 to 0028486a has its CatchHandler @ 00284afb */
      (**(code **)(*plVar1 + 0x20))(&local_70);
                    /* try { // try from 00284873 to 00284884 has its CatchHandler @ 00284b00 */
      iVar3 = (**(code **)(*(long *)CONCAT44(uStack_6c,local_70) + 0x18))();
      iVar6 = (**(code **)(*local_58 + 0x18))();
      if ((long *)CONCAT44(uStack_6c,local_70) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT44(uStack_6c,local_70) + 8))();
      }
      if (iVar3 == iVar6) goto LAB_00284930;
    }
  }
                    /* try { // try from 002848c0 to 002848d0 has its CatchHandler @ 00284b3d */
  (**(code **)(*local_58 + 0x10))
            (&local_70,local_58,((*(ushort *)(param_2 + 0xe8) & 4) == 0) + '\x01',iVar7,iVar9,0);
  plVar2 = *(long **)this;
  plVar8 = (long *)CONCAT44(uStack_6c,local_70);
  *(long **)this = plVar8;
  local_70 = SUB84(plVar2,0);
  uStack_6c = (undefined4)((ulong)plVar2 >> 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar8 = *(long **)this;
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
                    /* try { // try from 0028490a to 0028491e has its CatchHandler @ 00284b27 */
    puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x28))(plVar8);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
    }
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
LAB_00284930:
  if ((*(ushort *)(param_2 + 0xe8) & 4) == 0) {
    this_00 = *(Image **)this;
    if (this_00 == (Image *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(this_00 + 0x10);
    }
    local_70 = 0.0;
    uStack_6c = 0;
    local_68 = (float)uVar5;
    uStack_64 = (undefined4)((ulong)uVar5 >> 0x20);
                    /* try { // try from 0028495a to 00284965 has its CatchHandler @ 00284b1d */
    Image::clear(this_00,&local_70,0);
  }
                    /* try { // try from 0028496d to 00284974 has its CatchHandler @ 00284b5b */
  (**(code **)(**(long **)this + 0x10))(&local_70);
  local_68 = local_70;
  uStack_64 = uStack_6c;
  local_60 = (float)((uint)local_60 & 0xffffff00);
  local_48[0] = (float)iVar7 / (float)*(int *)(param_2 + 0x40);
  local_48[4] = (float)iVar9 / (float)*(int *)(param_2 + 0x44);
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_34 = 0;
                    /* try { // try from 002849d4 to 002849db has its CatchHandler @ 00284b46 */
  (**(code **)(*(long *)CONCAT44(uStack_6c,local_70) + 0x20))
            ((long *)CONCAT44(uStack_6c,local_70),local_48);
                    /* try { // try from 002849dc to 002849e8 has its CatchHandler @ 00284b44 */
  paintComponentAndChildren(param_2,(long)&local_70);
  if ((long *)CONCAT44(uStack_6c,local_70) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(uStack_6c,local_70) + 8))();
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00284a0f to 00284a11 has its CatchHandler @ 00284b22 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  local_70 = DAT_005d9038 / fVar10;
  uStack_6c = 0;
  local_68 = 0.0;
  uStack_64 = 0;
  local_5c = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00284a59 to 00284a6b has its CatchHandler @ 00284b60 */
  local_60 = local_70;
  (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_70);
  fVar11 = DAT_005d9038;
  if ((char)local_4c == '\0') {
    fVar11 = (float)(byte)~(byte)param_2[0xec] / DAT_005de3b0;
  }
                    /* try { // try from 00284a9c to 00284aa9 has its CatchHandler @ 00284b42 */
  (**(code **)**(undefined8 **)(this + 8))(fVar10,fVar11,*(undefined8 **)(this + 8),this,param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
                    /* try { // try from 00284ac2 to 00284ac4 has its CatchHandler @ 00284b15 */
    (**(code **)(**(long **)(param_1 + 8) + 0x78))();
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  return;
}


