// Function : addButton
// Namespace: juce:AlertWindow
// Entry    : 002880e0
// Prototype: undefined addButton(undefined8 param_1_00, undefined8 param_2_00, AlertWindow * this, long * param_4, undefined4 param_5, int * param_6, uint * param_7, ulong param_8)
// Body     : 002880e0 - 002885c9


/* juce::AlertWindow::addButton(juce::String const&, int, juce::KeyPress const&, juce::KeyPress
   const&) */

void __thiscall
juce::AlertWindow::addButton
          (undefined8 param_1_00,undefined8 param_2_00,AlertWindow *this,long *param_4,
          undefined4 param_5,int *param_6,uint *param_7,ulong param_8)

{
  Component *this_00;
  int iVar1;
  Button *this_01;
  void *pvVar2;
  AlertWindow *pAVar3;
  Desktop *this_02;
  LookAndFeel_V4 *pLVar4;
  undefined1 **ppuVar5;
  undefined8 extraout_RDX;
  uint uVar6;
  LookAndFeel_V4 *pLVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined1 *local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 local_50;
  void *local_40;
  uint local_34;
  
  puVar14 = param_7;
  this_01 = operator_new(0x1f8);
                    /* try { // try from 00288109 to 00288113 has its CatchHandler @ 00288616 */
  Button::Button(this_01,param_4);
  *(undefined ***)this_01 = &PTR__Button_00707668;
  *(undefined ***)(this_01 + 0xf0) = &PTR__TextButton_00707848;
  LOCK();
  lVar12 = *(long *)(this_01 + 0xf8);
  *(undefined1 **)(this_01 + 0xf8) = &DAT_0061ac58;
  UNLOCK();
  piVar13 = (int *)(lVar12 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar1 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar13);
    }
  }
  this_01[0x1f7] = (Button)0x0;
  iVar1 = *(int *)(this + 0x39c);
  if ((int)*(uint *)(this + 0x398) <= iVar1) {
    uVar6 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x398) != uVar6) {
      if ((int)uVar6 < 1) {
        free(*(void **)(this + 0x390));
        *(undefined8 *)(this + 0x390) = 0;
      }
      else {
        pvVar2 = realloc(*(void **)(this + 0x390),(ulong)uVar6 << 3);
        *(void **)(this + 0x390) = pvVar2;
      }
    }
    *(uint *)(this + 0x398) = uVar6;
    iVar1 = *(int *)(this + 0x39c);
  }
  *(int *)(this + 0x39c) = iVar1 + 1;
  *(Button **)(*(long *)(this + 0x390) + (long)iVar1 * 8) = this_01;
  this_01[0xe8] = (Button)((byte)this_01[0xe8] | 0x20);
  local_68 = &var::Instance::attributesInt;
  uStack_60 = CONCAT44(uStack_60._4_4_,1);
                    /* try { // try from 00288218 to 00288226 has its CatchHandler @ 002885ff */
  NamedValueSet::set((NamedValueSet *)(this_01 + 200),&explicitFocusOrderId,(long *)&local_68);
                    /* try { // try from 0028822b to 00288230 has its CatchHandler @ 002885f7 */
  (**(code **)(local_68 + 0x58))(&uStack_60);
  this_01[0xe9] = (Button)((byte)this_01[0xe9] | 2);
  *(undefined4 *)(this_01 + 0x1b4) = param_5;
  this_01[0x1f7] = (Button)0x0;
  if (*(long *)(this_01 + 0x198) != 0) {
    lVar12 = *(long *)(this_01 + 0x188) + 0x28;
    if (*(long *)(this_01 + 0x188) == 0) {
      lVar12 = 0;
    }
    ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>
              *)(*(long *)(this_01 + 0x198) + 0x28),lVar12);
    *(undefined8 *)(this_01 + 0x198) = 0;
  }
  Component::setEnabled((Component *)this_01,'\x01');
  if (*param_6 != 0) {
    iVar1 = *(int *)(this_01 + 0x14c);
    if ((int)*(uint *)(this_01 + 0x148) <= iVar1) {
      uVar6 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this_01 + 0x148) != uVar6) {
        if ((int)uVar6 < 1) {
          free(*(void **)(this_01 + 0x140));
          *(undefined8 *)(this_01 + 0x140) = 0;
        }
        else {
          pvVar2 = realloc(*(void **)(this_01 + 0x140),(ulong)uVar6 * 0xc);
          *(void **)(this_01 + 0x140) = pvVar2;
        }
      }
      *(uint *)(this_01 + 0x148) = uVar6;
      iVar1 = *(int *)(this_01 + 0x14c);
    }
    *(int *)(this_01 + 0x14c) = iVar1 + 1;
    lVar12 = *(long *)(this_01 + 0x140);
    *(int *)(lVar12 + 8 + (long)iVar1 * 0xc) = param_6[2];
    *(undefined8 *)(lVar12 + (long)iVar1 * 0xc) = *(undefined8 *)param_6;
    (**(code **)(*(long *)this_01 + 0x90))();
  }
  if (*param_7 != 0) {
    iVar1 = *(int *)(this_01 + 0x14c);
    if ((int)*(uint *)(this_01 + 0x148) <= iVar1) {
      uVar6 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this_01 + 0x148) != uVar6) {
        if ((int)uVar6 < 1) {
          free(*(void **)(this_01 + 0x140));
          *(undefined8 *)(this_01 + 0x140) = 0;
        }
        else {
          pvVar2 = realloc(*(void **)(this_01 + 0x140),(ulong)uVar6 * 0xc);
          *(void **)(this_01 + 0x140) = pvVar2;
        }
      }
      *(uint *)(this_01 + 0x148) = uVar6;
      iVar1 = *(int *)(this_01 + 0x14c);
    }
    *(int *)(this_01 + 0x14c) = iVar1 + 1;
    lVar12 = *(long *)(this_01 + 0x140);
    *(uint *)(lVar12 + 8 + (long)iVar1 * 0xc) = param_7[2];
    *(undefined8 *)(lVar12 + (long)iVar1 * 0xc) = *(undefined8 *)param_7;
    (**(code **)(*(long *)this_01 + 0x90))();
  }
  local_68 = *(undefined1 **)(this_01 + 0x100);
  uStack_60 = *(ulong *)(this_01 + 0x108);
  *(AlertWindow **)(this_01 + 0x100) = this;
  *(Button **)(this_01 + 0x108) = this_01;
  local_58 = *(code **)(this_01 + 0x110);
  *(code **)(this_01 + 0x110) =
       std::
       _Function_handler<void(),juce::AlertWindow::addButton(juce::String_const&,int,juce::KeyPress_const&,juce::KeyPress_const&)::$_156>
       ::_M_manager;
  local_50 = *(undefined8 *)(this_01 + 0x118);
  *(code **)(this_01 + 0x118) =
       std::
       _Function_handler<void(),juce::AlertWindow::addButton(juce::String_const&,int,juce::KeyPress_const&,juce::KeyPress_const&)::$_156>
       ::_M_invoke;
  if (local_58 != (code *)0x0) {
                    /* try { // try from 00288443 to 0028844f has its CatchHandler @ 002885e5 */
    (*local_58)(&local_68,&local_68,3);
  }
  pvVar2 = *(void **)(this + 0x390);
  uVar6 = *(uint *)(this + 0x39c);
  local_68 = (undefined1 *)0x0;
  uStack_60 = 0;
  if (0 < (int)uVar6) {
    uVar9 = uVar6 + (uVar6 >> 1) + 8;
    uVar10 = uVar9 & 0xfffffff8;
    if (0 < (int)uVar10) {
      local_68 = malloc((ulong)uVar10 << 3);
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar9) & 0xfffffffffffffff8;
    memcpy(local_68,pvVar2,(ulong)uVar6 * 8);
  }
  uStack_60 = CONCAT44(uVar6,(undefined4)uStack_60);
  pAVar3 = this;
  do {
    if ((*(long *)(pAVar3 + 0x68) != 0) &&
       (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pAVar3 + 0x68) + 0x10),
       pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_00288500;
    pAVar3 = *(AlertWindow **)(pAVar3 + 0x30);
  } while (pAVar3 != (AlertWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002884d9 to 002884e2 has its CatchHandler @ 002885dd */
    this_02 = operator_new(0x1d0);
                    /* try { // try from 002884e6 to 002884ed has its CatchHandler @ 002885ca */
    Desktop::Desktop(this_02);
    Desktop::instance = this_02;
  }
  pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00288500:
  pLVar7 = pLVar4 + 0x38;
                    /* try { // try from 00288508 to 0028850d has its CatchHandler @ 002885f2 */
  uVar6 = (**(code **)(*(long *)(pLVar4 + 0x38) + 0x30))(pLVar7);
  ppuVar5 = &local_68;
                    /* try { // try from 00288514 to 00288524 has its CatchHandler @ 002885ed */
  (**(code **)(*(long *)pLVar7 + 0x28))(&local_40,pLVar7,this);
  if ((long)*(int *)(this + 0x39c) != 0) {
    lVar12 = *(long *)(this + 0x390);
    lVar8 = (long)*(int *)(this + 0x39c) << 3;
    uVar11 = 0;
    do {
      ppuVar5 = (undefined1 **)0x0;
      if (uVar11 < local_34) {
        ppuVar5 = (undefined1 **)(ulong)*(uint *)((long)local_40 + uVar11 * 4);
      }
      this_00 = *(Component **)(lVar12 + uVar11 * 8);
      puVar14 = (uint *)(ulong)uVar6;
                    /* try { // try from 00288560 to 00288567 has its CatchHandler @ 0028862b */
      Component::setBounds
                (this_00,*(int *)(this_00 + 0x38),*(int *)(this_00 + 0x3c),(int)ppuVar5,uVar6);
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
                    /* try { // try from 00288576 to 00288597 has its CatchHandler @ 00288629 */
  (**(code **)(*(long *)this_01 + 0x60))(this_01,1);
  uVar15 = Component::addChildComponent((Component *)this,(Component *)this_01,0);
  updateLayout(uVar15,param_2_00,(Component *)this,0,extraout_RDX,ppuVar5,puVar14,param_8);
  local_34 = 0;
  free(local_40);
  uStack_60 = uStack_60 & 0xffffffff;
  free(local_68);
  return;
}


