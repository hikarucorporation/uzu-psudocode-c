// Function : paint
// Namespace: juce:AlertWindow
// Entry    : 0028f2e0
// Prototype: undefined paint(AlertWindow * this, Graphics * param_1)
// Body     : 0028f2e0 - 0028f6d5


/* juce::AlertWindow::paint(juce::Graphics&) */

void __thiscall juce::AlertWindow::paint(AlertWindow *this,Graphics *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *in_RAX;
  AlertWindow *pAVar6;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *local_38;
  
  pAVar6 = this;
  do {
    local_38 = in_RAX;
    if ((*(long *)(pAVar6 + 0x68) != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(*(long *)(pAVar6 + 0x68) + 0x10),
       pLVar7 != (LookAndFeel_V4 *)0x0)) goto LAB_0028f350;
    pAVar6 = *(AlertWindow **)(pAVar6 + 0x30);
  } while (pAVar6 != (AlertWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028f329 to 0028f332 has its CatchHandler @ 0028f6e9 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028f336 to 0028f33d has its CatchHandler @ 0028f6d6 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0028f350:
  (**(code **)(*(long *)(pLVar7 + 0x38) + 0x18))
            (pLVar7 + 0x38,param_1,this,this + 0x380,this + 0x100);
  uVar8 = Component::findColour((Component *)this,0x1001810,'\0');
  Graphics::setColour(param_1,(int)uVar8);
  (**(code **)(*(long *)(pLVar7 + 0x38) + 0x48))(&local_38,pLVar7 + 0x38);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 0028f3ad to 0028f3bf has its CatchHandler @ 0028f6f1 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_38);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar10 = local_38 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  uVar2 = *(uint *)(this + 0x3ac);
  if (0 < (int)uVar2) {
    lVar9 = (ulong)uVar2 << 0x20;
    uVar8 = (ulong)uVar2;
    do {
      lVar9 = lVar9 + -0x100000000;
      uVar12 = uVar8 - 1;
      lVar11 = *(long *)(*(long *)(this + 0x3a0) + (uVar12 & 0xffffffff) * 8);
      if ((uint)uVar12 < *(uint *)(this + 0x40c)) {
        plVar10 = (long *)((lVar9 >> 0x1d) + *(long *)(this + 0x400));
      }
      else {
        plVar10 = (long *)&StringArray::operator[](int)::empty;
        if (StringArray::operator[](int)::empty == '\0') {
          iVar5 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
          plVar10 = (long *)&StringArray::operator[](int)::empty;
          if (iVar5 != 0) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
            plVar10 = (long *)&StringArray::operator[](int)::empty;
          }
        }
      }
      Graphics::drawFittedText
                (0,DAT_005d9960,(long)param_1,plVar10,
                 CONCAT44(*(int *)(lVar11 + 0x44) + -0xe,*(undefined4 *)(lVar11 + 0x40)),
                 (ulong)*(uint *)(lVar11 + 0x48) | 0xe00000000,(uint *)0x21,1);
      bVar4 = 1 < uVar8;
      uVar8 = uVar12;
    } while (bVar4);
  }
  uVar8 = (ulong)*(uint *)(this + 0x41c);
  if (0 < (int)*(uint *)(this + 0x41c)) {
    lVar9 = uVar8 << 0x20;
    uVar12 = uVar8;
    while( true ) {
      lVar9 = lVar9 + -0x100000000;
      uVar1 = uVar12 - 1;
      lVar11 = *(long *)(*(long *)(this + 0x3b0) + (uVar1 & 0xffffffff) * 8);
      if ((uint)uVar1 < (uint)uVar8) {
        plVar10 = (long *)((lVar9 >> 0x1d) + *(long *)(this + 0x410));
      }
      else {
        plVar10 = (long *)&StringArray::operator[](int)::empty;
        if (StringArray::operator[](int)::empty == '\0') {
          iVar5 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
          plVar10 = (long *)&StringArray::operator[](int)::empty;
          if (iVar5 != 0) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
            plVar10 = (long *)&StringArray::operator[](int)::empty;
          }
        }
      }
      Graphics::drawFittedText
                (0,DAT_005d9960,(long)param_1,plVar10,
                 CONCAT44(*(int *)(lVar11 + 0x3c) + -0xe,*(undefined4 *)(lVar11 + 0x38)),
                 (ulong)*(uint *)(lVar11 + 0x40) | 0xe00000000,(uint *)0x21,1);
      if (uVar12 < 2) break;
      uVar8 = (ulong)*(uint *)(this + 0x41c);
      uVar12 = uVar1;
    }
  }
  iVar5 = *(int *)(this + 0x3dc);
  if ((long)iVar5 != 0) {
    lVar9 = *(long *)(this + 0x3d0);
    lVar11 = 0;
    do {
      lVar3 = *(long *)(lVar9 + lVar11);
      local_38 = *(long **)(lVar3 + 8);
      plVar10 = local_38 + -2;
      if (plVar10 != (long *)&emptyString) {
        LOCK();
        *(int *)plVar10 = (int)*plVar10 + 1;
        UNLOCK();
      }
                    /* try { // try from 0028f682 to 0028f6a2 has its CatchHandler @ 0028f712 */
      Graphics::drawFittedText
                (0,DAT_005d9960,(long)param_1,(long *)&local_38,
                 CONCAT44(*(int *)(lVar3 + 0x3c) + -0xe,*(undefined4 *)(lVar3 + 0x38)),
                 (ulong)*(uint *)(lVar3 + 0x40) | 0xe00000000,(uint *)0x21,1);
      plVar10 = local_38 + -2;
      if (plVar10 != (long *)&emptyString) {
        LOCK();
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 0) {
          operator_delete__(plVar10);
        }
      }
      lVar11 = lVar11 + 8;
    } while ((long)iVar5 * 8 != lVar11);
  }
  return;
}


