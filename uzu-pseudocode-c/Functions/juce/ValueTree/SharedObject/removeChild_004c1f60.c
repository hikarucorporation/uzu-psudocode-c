// Function : removeChild
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c1f60
// Prototype: undefined removeChild(SharedObject * this, uint param_1, UndoManager * param_2)
// Body     : 004c1f60 - 004c2246


/* juce::ValueTree::SharedObject::removeChild(int, juce::UndoManager*) */

void __thiscall
juce::ValueTree::SharedObject::removeChild(SharedObject *this,uint param_1,UndoManager *param_2)

{
  ulong *puVar1;
  SharedObject *pSVar2;
  SharedObject *this_00;
  long lVar3;
  void *__src;
  long *plVar4;
  ulong *__dest;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  SharedObject *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  SharedObject *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  SharedObject **local_48;
  SharedObject **local_40;
  uint local_38;
  
  if (param_1 < *(uint *)(this + 0x34)) {
    this_00 = *(SharedObject **)(*(long *)(this + 0x28) + (long)(int)param_1 * 8);
    if (this_00 != (SharedObject *)0x0) {
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
      if (param_2 == (UndoManager *)0x0) {
        ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection>::remove
                  ((ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection>
                    *)(this + 0x28),param_1);
        *(undefined8 *)(this_00 + 0x48) = 0;
        LOCK();
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        UNLOCK();
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_50 = 0;
        local_a8 = this_00;
        local_78 = this;
        do {
          local_40 = &local_a8;
          local_48 = &local_78;
          uVar5 = *(uint *)(this + 0x44);
          uVar10 = (ulong)(int)uVar5;
          local_38 = param_1;
          if (uVar10 != 0) {
            if (uVar5 != 1) {
              if ((int)uVar5 < 1) {
                __dest = (ulong *)0x0;
              }
              else {
                __src = *(void **)(this + 0x38);
                uVar7 = (uVar5 >> 1) + uVar5 + 8 & 0xfffffff8;
                if ((int)uVar7 < 1) {
                  __dest = (ulong *)0x0;
                }
                else {
                  __dest = malloc((ulong)uVar7 << 3);
                }
                memcpy(__dest,__src,(ulong)uVar5 << 3);
              }
              puVar1 = __dest + uVar10;
              uVar6 = 0;
              puVar9 = __dest;
              if (uVar5 == 0) goto LAB_004c2120;
LAB_004c2100:
              uVar8 = *puVar9;
              if (*(ulong *)(*(long *)(this + 0x38) + uVar6 * 8) != uVar8) goto LAB_004c212b;
LAB_004c2190:
                    /* try { // try from 004c2194 to 004c219b has its CatchHandler @ 004c2260 */
              ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
              ::
              callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                        ((long *)(uVar8 + 8),&local_48);
LAB_004c219c:
              do {
                puVar9 = puVar9 + 1;
                if (puVar9 == puVar1) {
                  free(__dest);
                  goto LAB_004c2073;
                }
                uVar6 = uVar6 + 1;
                uVar10 = (ulong)*(uint *)(this + 0x44);
                if (uVar6 < uVar10) goto LAB_004c2100;
LAB_004c2120:
                uVar8 = *puVar9;
                if (uVar8 == 0) goto LAB_004c2190;
LAB_004c212b:
                if (0 < (int)uVar10) {
                  uVar5 = 0;
                  do {
                    while( true ) {
                      if (uVar8 == *(ulong *)(*(long *)(this + 0x38) + (long)(int)uVar5 * 8)) {
                        if (-1 < (int)uVar5) goto LAB_004c2190;
                        goto LAB_004c219c;
                      }
                      uVar7 = (int)(uVar5 + (int)uVar10) / 2;
                      if (uVar7 == uVar5) goto LAB_004c219c;
                      if (*(ulong *)(*(long *)(this + 0x38) + (long)(int)uVar7 * 8) <= uVar8) break;
                      uVar10 = (ulong)uVar7;
                      if ((int)uVar7 <= (int)uVar5) goto LAB_004c219c;
                    }
                    uVar5 = uVar7;
                  } while ((int)uVar7 < (int)uVar10);
                }
              } while( true );
            }
                    /* try { // try from 004c206b to 004c2072 has its CatchHandler @ 004c225b */
            ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
            ::
            callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                      ((long *)(**(long **)(this + 0x38) + 8),&local_48);
          }
LAB_004c2073:
          this = *(SharedObject **)(this + 0x48);
        } while (this != (SharedObject *)0x0);
        ~ValueTree((ValueTree *)&local_78);
        ~ValueTree((ValueTree *)&local_a8);
                    /* try { // try from 004c21f2 to 004c21fe has its CatchHandler @ 004c2251 */
        sendParentChangeMessage(this_00);
      }
      else {
                    /* try { // try from 004c1fa6 to 004c1ff3 has its CatchHandler @ 004c2251 */
        plVar4 = operator_new(0x20);
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        *plVar4 = (long)&PTR__AddOrRemoveChildAction_00714028;
        plVar4[1] = (long)this;
        if (param_1 < *(uint *)(this + 0x34)) {
          lVar3 = *(long *)(*(long *)(this + 0x28) + (long)(int)param_1 * 8);
          plVar4[2] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
        }
        else {
          plVar4[2] = 0;
        }
        *(uint *)(plVar4 + 3) = param_1;
        *(undefined1 *)((long)plVar4 + 0x1c) = 1;
                    /* try { // try from 004c2211 to 004c221b has its CatchHandler @ 004c2247 */
        UndoManager::perform(param_2,plVar4);
      }
      LOCK();
      pSVar2 = this_00 + 8;
      *(int *)pSVar2 = *(int *)pSVar2 + -1;
      UNLOCK();
      if (*(int *)pSVar2 == 0) {
        ~SharedObject(this_00);
        operator_delete(this_00);
      }
    }
  }
  return;
}


