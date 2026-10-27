// Function : addChild
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c1b90
// Prototype: undefined addChild(SharedObject * this, SharedObject * param_1, uint param_2, UndoManager * param_3)
// Body     : 004c1b90 - 004c1f12


/* juce::ValueTree::SharedObject::addChild(juce::ValueTree::SharedObject*, int, juce::UndoManager*)
    */

void __thiscall
juce::ValueTree::SharedObject::addChild
          (SharedObject *this,SharedObject *param_1,uint param_2,UndoManager *param_3)

{
  ulong *puVar1;
  SharedObject *this_00;
  SharedObject *pSVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong *__dest;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  SharedObject **local_a0;
  SharedObject **local_98;
  SharedObject *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  SharedObject *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (((param_1 != (SharedObject *)0x0) && (param_1 != this)) &&
     (this_00 = *(SharedObject **)(param_1 + 0x48), this_00 != this)) {
    pSVar2 = this;
    do {
      pSVar2 = *(SharedObject **)(pSVar2 + 0x48);
      if (pSVar2 == (SharedObject *)0x0) break;
    } while (pSVar2 != param_1);
    if (pSVar2 == (SharedObject *)0x0) {
      if (this_00 != (SharedObject *)0x0) {
        uVar7 = 0xffffffff;
        if ((long)*(int *)(this_00 + 0x34) != 0) {
          lVar3 = (long)*(int *)(this_00 + 0x34) << 3;
          lVar6 = 0;
          do {
            if (*(SharedObject **)(*(long *)(this_00 + 0x28) + lVar6 * 8) == param_1) {
              uVar7 = (uint)lVar6;
              break;
            }
            lVar6 = lVar6 + 1;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
        removeChild(this_00,uVar7,param_3);
      }
      if (param_3 == (UndoManager *)0x0) {
        uVar7 = *(uint *)(this + 0x34);
        if ((int)*(uint *)(this + 0x30) <= (int)uVar7) {
          uVar7 = uVar7 + ((int)((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
          if (*(uint *)(this + 0x30) != uVar7) {
            if ((int)uVar7 < 1) {
              free(*(void **)(this + 0x28));
              *(undefined8 *)(this + 0x28) = 0;
            }
            else {
              pvVar5 = realloc(*(void **)(this + 0x28),(ulong)uVar7 << 3);
              *(void **)(this + 0x28) = pvVar5;
            }
          }
          *(uint *)(this + 0x30) = uVar7;
          uVar7 = *(uint *)(this + 0x34);
        }
        lVar3 = *(long *)(this + 0x28);
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          puVar8 = (undefined8 *)(lVar3 + (long)(int)uVar7 * 8);
        }
        else {
          lVar6 = (long)(int)param_2;
          memmove((void *)(lVar3 + lVar6 * 8 + 8),(void *)(lVar3 + lVar6 * 8),
                  (long)(int)(uVar7 - param_2) << 3);
          puVar8 = (undefined8 *)(lVar6 * 8 + *(long *)(this + 0x28));
          uVar7 = *(uint *)(this + 0x34);
        }
        *puVar8 = param_1;
        *(uint *)(this + 0x34) = uVar7 + 1;
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
        *(SharedObject **)(param_1 + 0x48) = this;
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_68 = 0;
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_38 = 0;
        local_90 = param_1;
        local_60 = this;
        do {
          local_a0 = &local_60;
          local_98 = &local_90;
          uVar7 = *(uint *)(this + 0x44);
          uVar12 = (ulong)(int)uVar7;
          if (uVar12 != 0) {
            if (uVar7 != 1) {
              if ((int)uVar7 < 1) {
                __dest = (ulong *)0x0;
              }
              else {
                pvVar5 = *(void **)(this + 0x38);
                uVar9 = (uVar7 >> 1) + uVar7 + 8 & 0xfffffff8;
                if ((int)uVar9 < 1) {
                  __dest = (ulong *)0x0;
                }
                else {
                  __dest = malloc((ulong)uVar9 << 3);
                }
                memcpy(__dest,pvVar5,(ulong)uVar7 << 3);
              }
              puVar1 = __dest + uVar12;
              uVar11 = 0;
              puVar13 = __dest;
              if (uVar7 == 0) goto LAB_004c1e30;
LAB_004c1e10:
              uVar10 = *puVar13;
              if (*(ulong *)(*(long *)(this + 0x38) + uVar11 * 8) != uVar10) goto LAB_004c1e3a;
LAB_004c1ea0:
                    /* try { // try from 004c1ea4 to 004c1ead has its CatchHandler @ 004c1f2a */
              ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
              ::
              callCheckedExcluding<juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                        ((long *)(uVar10 + 8),&local_a0);
LAB_004c1eae:
              do {
                puVar13 = puVar13 + 1;
                if (puVar13 == puVar1) {
                  free(__dest);
                  goto LAB_004c1d85;
                }
                uVar11 = uVar11 + 1;
                uVar12 = (ulong)*(uint *)(this + 0x44);
                if (uVar11 < uVar12) goto LAB_004c1e10;
LAB_004c1e30:
                uVar10 = *puVar13;
                if (uVar10 == 0) goto LAB_004c1ea0;
LAB_004c1e3a:
                if (0 < (int)uVar12) {
                  uVar7 = 0;
                  do {
                    while( true ) {
                      if (uVar10 == *(ulong *)(*(long *)(this + 0x38) + (long)(int)uVar7 * 8)) {
                        if (-1 < (int)uVar7) goto LAB_004c1ea0;
                        goto LAB_004c1eae;
                      }
                      uVar9 = (int)(uVar7 + (int)uVar12) / 2;
                      if (uVar9 == uVar7) goto LAB_004c1eae;
                      if (*(ulong *)(*(long *)(this + 0x38) + (long)(int)uVar9 * 8) <= uVar10)
                      break;
                      uVar12 = (ulong)uVar9;
                      if ((int)uVar9 <= (int)uVar7) goto LAB_004c1eae;
                    }
                    uVar7 = uVar9;
                  } while ((int)uVar9 < (int)uVar12);
                }
              } while( true );
            }
                    /* try { // try from 004c1d7b to 004c1d84 has its CatchHandler @ 004c1f25 */
            ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
            ::
            callCheckedExcluding<juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                      ((long *)(**(long **)(this + 0x38) + 8),&local_a0);
          }
LAB_004c1d85:
          this = *(SharedObject **)(this + 0x48);
        } while (this != (SharedObject *)0x0);
        ~ValueTree((ValueTree *)&local_60);
        ~ValueTree((ValueTree *)&local_90);
        sendParentChangeMessage(param_1);
      }
      else {
        uVar7 = *(uint *)(this + 0x34);
        if (param_2 < *(uint *)(this + 0x34)) {
          uVar7 = param_2;
        }
        plVar4 = operator_new(0x20);
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        *plVar4 = (long)&PTR__AddOrRemoveChildAction_00714028;
        plVar4[1] = (long)this;
        plVar4[2] = (long)param_1;
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
        *(uint *)(plVar4 + 3) = uVar7;
        *(undefined1 *)((long)plVar4 + 0x1c) = 0;
                    /* try { // try from 004c1c6b to 004c1c75 has its CatchHandler @ 004c1f13 */
        UndoManager::perform(param_3,plVar4);
      }
    }
  }
  return;
}


