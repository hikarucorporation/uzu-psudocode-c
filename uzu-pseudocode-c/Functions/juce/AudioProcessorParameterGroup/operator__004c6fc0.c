// Function : operator=
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c6fc0
// Prototype: AudioProcessorParameterGroup * operator=(AudioProcessorParameterGroup * this, AudioProcessorParameterGroup * param_1)
// Body     : 004c6fc0 - 004c7190


/* juce::AudioProcessorParameterGroup::TEMPNAMEPLACEHOLDERVALUE(juce::AudioProcessorParameterGroup&&)
    */

AudioProcessorParameterGroup * __thiscall
juce::AudioProcessorParameterGroup::operator=
          (AudioProcessorParameterGroup *this,AudioProcessorParameterGroup *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *__ptr;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  
  uVar3 = *(undefined8 *)this;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = uVar3;
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar2 = *(uint *)(this + 0x24);
  uVar9 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
LAB_004c7125:
    if (this != param_1) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      __ptr = *(void **)(this + 0x18);
      *(undefined8 *)(this + 0x18) = uVar3;
      *(undefined8 *)(this + 0x20) = uVar8;
      free(__ptr);
    }
    iVar12 = *(int *)(this + 0x24);
    if ((long)iVar12 != 0) {
      lVar4 = *(long *)(this + 0x18);
      lVar11 = 0;
      do {
        plVar6 = *(long **)(lVar4 + lVar11);
        plVar6[2] = (long)this;
        lVar7 = *plVar6;
        if (lVar7 != 0) {
          *(AudioProcessorParameterGroup **)(lVar7 + 0x28) = this;
        }
        lVar11 = lVar11 + 8;
      } while ((long)iVar12 * 8 != lVar11);
    }
    return this;
  }
  iVar12 = -uVar2;
  uVar14 = uVar9;
  do {
    uVar10 = (ulong)((int)uVar14 - 1);
    lVar4 = *(long *)(this + 0x18);
    puVar5 = *(undefined8 **)(lVar4 + uVar10 * 8);
    memmove((void *)(lVar4 + uVar10 * 8),(void *)(lVar4 + uVar10 * 8 + 8),
            (long)((int)uVar9 + iVar12) << 3);
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
    if (puVar5 != (undefined8 *)0x0) {
      if ((long *)puVar5[1] != (long *)0x0) {
        (**(code **)(*(long *)puVar5[1] + 8))();
      }
      puVar5[1] = 0;
      plVar6 = (long *)*puVar5;
      if (plVar6 != (long *)0x0) {
        OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
        ::~OwnedArray((OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
                       *)(plVar6 + 3));
        piVar13 = (int *)(plVar6[2] + -0x10);
        if (piVar13 == &emptyString) {
LAB_004c709c:
          piVar13 = (int *)(plVar6[1] + -0x10);
          if (piVar13 != &emptyString) {
LAB_004c70aa:
            LOCK();
            iVar1 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar13);
            }
          }
        }
        else {
          LOCK();
          iVar1 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar1 != 0) goto LAB_004c709c;
          operator_delete__(piVar13);
          piVar13 = (int *)(plVar6[1] + -0x10);
          if (piVar13 != &emptyString) goto LAB_004c70aa;
        }
        piVar13 = (int *)(*plVar6 + -0x10);
        if (piVar13 != &emptyString) {
          LOCK();
          iVar1 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar13);
          }
        }
        operator_delete(plVar6);
      }
      operator_delete(puVar5);
    }
    if (uVar14 < 2) goto LAB_004c7125;
    uVar9 = (ulong)*(uint *)(this + 0x24);
    iVar12 = iVar12 + 1;
    uVar14 = uVar14 - 1;
  } while( true );
}


