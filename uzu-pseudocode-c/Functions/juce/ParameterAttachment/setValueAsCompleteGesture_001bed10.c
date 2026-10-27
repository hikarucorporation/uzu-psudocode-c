// Function : setValueAsCompleteGesture
// Namespace: juce:ParameterAttachment
// Entry    : 001bed10
// Prototype: undefined setValueAsCompleteGesture(undefined8 param_1, ParameterAttachment * this)
// Body     : 001bed10 - 001bef0c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ParameterAttachment::setValueAsCompleteGesture(float) */

void __thiscall
juce::ParameterAttachment::setValueAsCompleteGesture(undefined8 param_1,ParameterAttachment *this)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = RangedAudioParameter::convertTo0to1(param_1,*(RangedAudioParameter **)(this + 0x18));
  fVar11 = (float)(**(code **)(**(long **)(this + 0x18) + 0x10))();
  fVar13 = (float)((uint)fVar11 & _DAT_005d91c0);
  if ((fVar13 == DAT_005d94c8) ||
     (fVar12 = (float)(_DAT_005d91c0 & (uint)fVar10), fVar12 == DAT_005d94c8)) {
    if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) {
LAB_001bed96:
      lVar4 = *(long *)(this + 0x28);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x88) = 1;
        LOCK();
        lVar2 = *(long *)(lVar4 + 0x70);
        *(long *)(lVar4 + 0x70) = (long)&DAT_0061ac58;
        UNLOCK();
        piVar8 = (int *)(lVar2 + -0x10);
        if (piVar8 != &emptyString) {
          LOCK();
          iVar1 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar8);
          }
        }
      }
      lVar4 = *(long *)(this + 0x18);
      pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
      uVar3 = *(uint *)(lVar4 + 0x44);
      uVar6 = (ulong)uVar3;
      if (0 < (int)uVar3) {
        uVar7 = uVar6 - 1;
        uVar9 = uVar6;
        if (uVar3 <= (uint)uVar7) goto LAB_001bee20;
        do {
          plVar5 = *(long **)(*(long *)(lVar4 + 0x38) + (uVar7 & 0xffffffff) * 8);
          uVar9 = uVar6;
          if (plVar5 != (long *)0x0) {
                    /* try { // try from 001bee18 to 001bee1f has its CatchHandler @ 001bef13 */
            (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(lVar4 + 8),1);
          }
LAB_001bee20:
          do {
            uVar6 = uVar7;
            if (uVar9 < 2) goto LAB_001bee55;
            uVar7 = uVar6 - 1;
            uVar9 = uVar6;
          } while (*(uint *)(lVar4 + 0x44) <= (uint)uVar7);
        } while( true );
      }
LAB_001bee55:
      plVar5 = *(long **)(lVar4 + 0x48);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 001bee67 to 001bee6e has its CatchHandler @ 001bef0f */
        (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(lVar4 + 8),1);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
      AudioProcessorParameter::setValueNotifyingHost
                (fVar10,*(AudioProcessorParameter **)(this + 0x18));
      lVar4 = *(long *)(this + 0x18);
      pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
      uVar3 = *(uint *)(lVar4 + 0x44);
      uVar6 = (ulong)uVar3;
      if ((int)uVar3 < 1) {
LAB_001beee3:
        plVar5 = *(long **)(lVar4 + 0x48);
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 001beef3 to 001beef7 has its CatchHandler @ 001bef0d */
          (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(lVar4 + 8),0);
        }
        pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
        return;
      }
      uVar7 = uVar6 - 1;
      uVar9 = uVar6;
      if (uVar3 <= (uint)uVar7) goto LAB_001beecb;
      do {
        plVar5 = *(long **)(*(long *)(lVar4 + 0x38) + (uVar7 & 0xffffffff) * 8);
        uVar9 = uVar6;
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 001beec6 to 001beeca has its CatchHandler @ 001bef11 */
          (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(lVar4 + 8),0);
        }
LAB_001beecb:
        do {
          uVar6 = uVar7;
          if (uVar9 < 2) goto LAB_001beee3;
          uVar7 = uVar6 - 1;
          uVar9 = uVar6;
        } while (*(uint *)(lVar4 + 0x44) <= (uint)uVar7);
      } while( true );
    }
  }
  else {
    fVar11 = (float)((uint)(fVar11 - fVar10) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar11) {
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      if (fVar12 * DAT_005d94d0 < fVar11) goto LAB_001bed96;
    }
  }
  return;
}


