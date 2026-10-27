// Function : ~TextEditor
// Namespace: juce:TextEditor
// Entry    : 0026a340
// Prototype: undefined ~TextEditor(TextEditor * this)
// Body     : 0026a340 - 0026a8ef


/* juce::TextEditor::~TextEditor() */

void __thiscall juce::TextEditor::~TextEditor(TextEditor *this)

{
  Value *this_00;
  uint uVar1;
  long lVar2;
  TextEditorStorage *this_01;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  Desktop *pDVar6;
  uint uVar7;
  int iVar8;
  Component *pCVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  int *piVar15;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined ***)this = &PTR__TextEditor_0070c670;
  *(undefined ***)(this + 8) = &PTR__TextEditor_0070c798;
  *(undefined ***)(this + 0xf8) = &PTR__TextEditor_0070c940;
  pCVar9 = (Component *)(this + 8);
  do {
    if ((*(ushort *)(pCVar9 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026a3c1 to 0026a3ca has its CatchHandler @ 0026a905 */
        pDVar6 = operator_new(0x1d0);
                    /* try { // try from 0026a3ce to 0026a3d5 has its CatchHandler @ 0026a8f2 */
        Desktop::Desktop(pDVar6);
        iVar11 = *(int *)(pDVar6 + 0xdc);
        Desktop::instance = pDVar6;
      }
      else {
        iVar11 = *(int *)(Desktop::instance + 0xdc);
      }
      if ((long)iVar11 != 0) {
        lVar12 = 0;
        goto LAB_0026a400;
      }
      break;
    }
    pCVar9 = *(Component **)(pCVar9 + 0x30);
  } while (pCVar9 != (Component *)0x0);
  goto LAB_0026a41a;
  while (lVar12 = lVar12 + 8, (long)iVar11 * 8 != lVar12) {
LAB_0026a400:
    if (*(Component **)(*(ComponentPeer **)(*(long *)(Desktop::instance + 0xd0) + lVar12) + 8) ==
        pCVar9) {
                    /* try { // try from 0026a415 to 0026a419 has its CatchHandler @ 0026a8f0 */
      ComponentPeer::refreshTextInputTarget
                (*(ComponentPeer **)(*(long *)(Desktop::instance + 0xd0) + lVar12));
      break;
    }
  }
LAB_0026a41a:
  this_00 = (Value *)(this + 0x2b8);
  lVar12 = *(long *)(this + 400);
  if (lVar12 != 0) {
    lVar12 = lVar12 + 0x118;
  }
  Value::removeListener(this_00,lVar12);
                    /* try { // try from 0026a43e to 0026a447 has its CatchHandler @ 0026a959 */
  plVar3 = operator_new(0x40);
  *plVar3 = (long)&PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[2] = (long)&PTR__AsyncUpdater_00712b58;
  plVar3[3] = 0;
                    /* try { // try from 0026a46f to 0026a478 has its CatchHandler @ 0026a94c */
  puVar4 = operator_new(0x20);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar4[2] = plVar3 + 2;
  *(undefined4 *)(puVar4 + 3) = 0;
  LOCK();
  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  UNLOCK();
  pvVar5 = (void *)plVar3[3];
  plVar3[3] = (long)puVar4;
  if (pvVar5 != (void *)0x0) {
    LOCK();
    piVar15 = (int *)((long)pvVar5 + 8);
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (*piVar15 == 0) {
      operator_delete(pvVar5);
    }
  }
  plVar3[4] = 0;
  plVar3[5] = 0;
  *plVar3 = (long)&PTR__SimpleValueSource_00713f78;
  plVar3[2] = (long)&PTR__SimpleValueSource_00713fb0;
  plVar3[6] = (long)&var::Instance::attributesVoid;
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  local_60 = plVar3;
  if (plVar3 == *(long **)this_00) goto LAB_0026a64e;
  if ((*(int *)(this + 0x2e0) == 2) && (0 < *(int *)(*(long *)(this + 0x2c0) + 0xc))) {
    lVar12 = *(long *)this_00;
    uVar1 = *(uint *)(lVar12 + 0x2c);
    if (0 < (int)uVar1) {
      lVar2 = *(long *)(lVar12 + 0x20);
      uVar10 = uVar1;
      uVar7 = 0;
      do {
        while( true ) {
          if (*(Value **)(lVar2 + (long)(int)uVar7 * 8) == this_00) {
            if (uVar7 < uVar1) {
              pvVar5 = (void *)(lVar2 + (long)(int)uVar7 * 8);
              memmove(pvVar5,(void *)((long)pvVar5 + 8),(long)(int)(uVar1 + ~uVar7) << 3);
              iVar11 = *(int *)(lVar12 + 0x2c);
              uVar1 = iVar11 - 1;
              *(uint *)(lVar12 + 0x2c) = uVar1;
              iVar8 = iVar11 * 2 + -2;
              iVar11 = 0;
              if (-1 < iVar8) {
                iVar11 = iVar8;
              }
              if (iVar11 < *(int *)(lVar12 + 0x28)) {
                uVar10 = 8;
                if (8 < (int)uVar1) {
                  uVar10 = uVar1;
                }
                if ((int)uVar10 < *(int *)(lVar12 + 0x28)) {
                  pvVar5 = realloc(*(void **)(lVar12 + 0x20),(ulong)uVar10 << 3);
                  *(void **)(lVar12 + 0x20) = pvVar5;
                  *(uint *)(lVar12 + 0x28) = uVar10;
                }
              }
            }
            goto LAB_0026a60e;
          }
          uVar13 = (int)(uVar7 + uVar10) / 2;
          if (uVar13 == uVar7) goto LAB_0026a60e;
          if (*(Value **)(lVar2 + (long)(int)uVar13 * 8) <= this_00) break;
          uVar10 = uVar13;
          if ((int)uVar13 <= (int)uVar7) goto LAB_0026a60e;
        }
        uVar7 = uVar13;
      } while ((int)uVar13 < (int)uVar10);
    }
LAB_0026a60e:
    plVar3 = local_60;
    SortedSet<juce::Value*,juce::DummyCriticalSection>::add
              ((SortedSet<juce::Value*,juce::DummyCriticalSection> *)(local_60 + 4),(ulong)this_00);
    plVar14 = *(long **)this_00;
    if (plVar3 == (long *)0x0) goto LAB_0026a62c;
LAB_0026a58d:
    if (plVar14 != plVar3) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plVar14 = *(long **)this_00;
      *(long **)this_00 = plVar3;
      if (plVar14 == (long *)0x0) goto LAB_0026a646;
      goto LAB_0026a639;
    }
  }
  else {
    plVar14 = *(long **)this_00;
    if (plVar3 != (long *)0x0) goto LAB_0026a58d;
LAB_0026a62c:
    *(undefined8 *)this_00 = 0;
    if (plVar14 != (long *)0x0) {
LAB_0026a639:
      LOCK();
      plVar3 = plVar14 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar14 + 8))();
      }
    }
  }
LAB_0026a646:
                    /* try { // try from 0026a646 to 0026a64d has its CatchHandler @ 0026a93d */
  Value::callListeners(this_00);
LAB_0026a64e:
  Value::removeFromListenerList((Value *)&local_60);
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)&local_58);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x188);
  *(undefined8 *)(this + 0x188) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined8 *)(this + 400) = 0;
  this_01 = *(TextEditorStorage **)(this + 0x330);
  if (this_01 != (TextEditorStorage *)0x0) {
    TextEditorStorage::~TextEditorStorage(this_01);
    operator_delete(this_01);
  }
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  free(*(void **)(this + 800));
  ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x2f8));
  Value::removeFromListenerList(this_00);
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x2c0));
  plVar3 = *(long **)(this + 0x2b8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (this[0x2b0] != (TextEditor)0x0) {
    plVar3 = *(long **)(this + 0x2a8);
    *(undefined8 *)(this + 0x2a8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (*(long **)(this + 0x2a8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x2a8) + 8))();
      }
    }
  }
  *(undefined8 *)(this + 0x2a8) = 0;
  piVar15 = (int *)(*(long *)(this + 0x298) + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    iVar11 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar15);
    }
  }
  plVar3 = *(long **)(this + 0x288);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(long **)(this + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x268) + 8))();
  }
  *(undefined8 *)(this + 0x268) = 0;
  UndoManager::~UndoManager((UndoManager *)(this + 0x1d8));
  *(undefined ***)(this + 0x1b0) = &PTR__GlobalMouseListener_00710598;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026a7e4 to 0026a7ed has its CatchHandler @ 0026aa2b */
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 0026a7f1 to 0026a7f8 has its CatchHandler @ 0026a90a */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  pDVar6 = Desktop::instance;
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  remove((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
          *)(Desktop::instance + 0x48),(long)(this + 0x1b0));
                    /* try { // try from 0026a810 to 0026a817 has its CatchHandler @ 0026aa2b */
  Desktop::resetTimer(pDVar6);
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 8))();
  }
  *(undefined8 *)(this + 0x188) = 0;
  if (*(code **)(this + 0x178) != (code *)0x0) {
                    /* try { // try from 0026a848 to 0026a851 has its CatchHandler @ 0026a935 */
    (**(code **)(this + 0x178))(this + 0x168,this + 0x168,3);
  }
  if (*(code **)(this + 0x158) != (code *)0x0) {
                    /* try { // try from 0026a865 to 0026a86e has its CatchHandler @ 0026a92d */
    (**(code **)(this + 0x158))(this + 0x148,this + 0x148,3);
  }
  if (*(code **)(this + 0x138) != (code *)0x0) {
                    /* try { // try from 0026a882 to 0026a88b has its CatchHandler @ 0026a925 */
    (**(code **)(this + 0x138))(this + 0x128,this + 0x128,3);
  }
  if (*(code **)(this + 0x118) != (code *)0x0) {
                    /* try { // try from 0026a89f to 0026a8a8 has its CatchHandler @ 0026a91d */
    (**(code **)(this + 0x118))(this + 0x108,this + 0x108,3);
  }
  *(undefined ***)(this + 0xf8) = &PTR__SettableTooltipClient_0070ded0;
  piVar15 = (int *)(*(long *)(this + 0x100) + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    iVar11 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar15);
    }
  }
  Component::~Component((Component *)(this + 8));
  return;
}


