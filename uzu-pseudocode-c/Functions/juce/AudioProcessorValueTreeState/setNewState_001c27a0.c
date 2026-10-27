// Function : setNewState
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c27a0
// Prototype: undefined setNewState(AudioProcessorValueTreeState * this, long * param_1)
// Body     : 001c27a0 - 001c2af7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessorValueTreeState::setNewState(juce::ValueTree) */

void __thiscall
juce::AudioProcessorValueTreeState::setNewState(AudioProcessorValueTreeState *this,long *param_1)

{
  AudioProcessorValueTreeState *pAVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  AudioProcessorValueTreeState *pAVar6;
  long *plVar7;
  AudioProcessorValueTreeState *pAVar8;
  AudioProcessorValueTreeState *pAVar9;
  long lVar10;
  undefined1 *puVar11;
  float fVar12;
  undefined8 uVar13;
  ulong uVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  double local_38;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    plVar7 = (long *)&_ZZN4juceL13getNullVarRefEvE7nullVar_2182;
    if ((getNullVarRef()::nullVar__clone__2181_ == '\0') &&
       (iVar2 = __cxa_guard_acquire(&getNullVarRef()::nullVar__clone__2181_), iVar2 != 0)) {
      _ZZN4juceL13getNullVarRefEvE7nullVar_2182 = &var::Instance::attributesVoid;
      plVar7 = (long *)&_ZZN4juceL13getNullVarRefEvE7nullVar_2182;
      __cxa_atexit(var::~var,&_ZZN4juceL13getNullVarRefEvE7nullVar_2182,&__dso_handle);
      puVar11 = &getNullVarRef()::nullVar__clone__2181_;
      goto LAB_001c2aee;
    }
  }
  else {
    if ((long)*(int *)(lVar4 + 0x24) != 0) {
      plVar7 = (long *)(*(long *)(lVar4 + 0x18) + 8);
      lVar4 = (long)*(int *)(lVar4 + 0x24) * 0x18;
      do {
        if (plVar7[-1] == *(long *)(this + 0x80)) goto LAB_001c285d;
        plVar7 = plVar7 + 3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    plVar7 = (long *)&getNullVarRef()::nullVar;
    if ((getNullVarRef()::nullVar == '\0') &&
       (iVar2 = __cxa_guard_acquire(&getNullVarRef()::nullVar), iVar2 != 0)) {
      getNullVarRef()::nullVar = &var::Instance::attributesVoid;
      plVar7 = (long *)&getNullVarRef()::nullVar;
      __cxa_atexit(var::~var,&getNullVarRef()::nullVar,&__dso_handle);
      puVar11 = &getNullVarRef()::nullVar;
LAB_001c2aee:
      __cxa_guard_release(puVar11);
    }
  }
LAB_001c285d:
  (**(code **)(*plVar7 + 0x28))(&local_50,plVar7 + 1);
  pAVar9 = *(AudioProcessorValueTreeState **)(this + 0x98);
  if (pAVar9 == (AudioProcessorValueTreeState *)0x0) {
LAB_001c2a0b:
    local_50 = local_50 + -0x10;
    if (local_50 != (byte *)&emptyString) {
      LOCK();
      iVar2 = *(int *)local_50;
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(local_50);
      }
    }
    return;
  }
  pAVar1 = this + 0x90;
  pAVar8 = pAVar1;
  do {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (*(byte **)(pAVar9 + 0x20),local_50);
    pAVar6 = pAVar9 + 0x18;
    if (-1 < (int)uVar3) {
      pAVar6 = pAVar9 + 0x10;
      pAVar8 = pAVar9;
    }
    pAVar9 = *(AudioProcessorValueTreeState **)pAVar6;
  } while (pAVar9 != (AudioProcessorValueTreeState *)0x0);
  if (pAVar8 == pAVar1) goto LAB_001c2a0b;
  uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_50,*(byte **)(pAVar8 + 0x20));
  if ((int)uVar3 < 0) {
    pAVar8 = pAVar1;
  }
  if (pAVar8 == pAVar1) goto LAB_001c2a0b;
  lVar4 = *(long *)(pAVar8 + 0x28);
  local_50 = local_50 + -0x10;
  if (local_50 != (byte *)&emptyString) {
    LOCK();
    iVar2 = *(int *)local_50;
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(local_50);
    }
  }
  if (lVar4 == 0) {
    return;
  }
  ValueTree::operator=((ValueTree *)(lVar4 + 8),param_1);
  uVar13 = (**(code **)(**(long **)(lVar4 + 0x38) + 0x20))();
  uVar14 = RangedAudioParameter::convertFrom0to1(uVar13,*(RangedAudioParameter **)(lVar4 + 0x38));
  local_38 = (double)(float)uVar14;
  local_40 = &var::Instance::attributesDouble;
  lVar5 = *(long *)(lVar4 + 8);
  if ((lVar5 != 0) && ((long)*(int *)(lVar5 + 0x24) != 0)) {
    lVar10 = *(long *)(lVar5 + 0x18) + 0x10;
    lVar5 = (long)*(int *)(lVar5 + 0x24) * 0x18;
    do {
      if (*(long *)(lVar10 + -0x10) == *(long *)(this + 0x78)) {
        local_50 = *(byte **)(lVar10 + -8);
                    /* try { // try from 001c2aa0 to 001c2aa2 has its CatchHandler @ 001c2b15 */
        (**(code **)(local_50 + 0x60))(&local_48);
        goto LAB_001c299d;
      }
      lVar10 = lVar10 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  local_50 = &var::Instance::attributesDouble;
  var::VariantType::defaultCreateCopy(&local_48,&local_38);
LAB_001c299d:
                    /* try { // try from 001c29a7 to 001c29ac has its CatchHandler @ 001c2b3e */
  dVar15 = (double)(**(code **)(local_50 + 0x20))(&local_48);
  fVar12 = (float)dVar15;
  fVar18 = *(float *)(lVar4 + 0x90);
  fVar17 = (float)((uint)fVar12 & _DAT_005d91c0);
  if ((fVar17 == DAT_005d94c8) ||
     (fVar16 = (float)(_DAT_005d91c0 & (uint)fVar18), fVar16 == DAT_005d94c8)) {
    if ((fVar12 == fVar18) && (!NAN(fVar12) && !NAN(fVar18))) goto LAB_001c2a5a;
  }
  else {
    fVar18 = (float)((uint)(fVar12 - fVar18) & _DAT_005d91c0);
    if (fVar18 <= DAT_005d94cc) goto LAB_001c2a5a;
    if (fVar16 <= fVar17) {
      fVar16 = fVar17;
    }
    if (fVar18 <= fVar16 * DAT_005d94d0) goto LAB_001c2a5a;
  }
  fVar18 = RangedAudioParameter::convertTo0to1
                     (CONCAT44((int)((ulong)dVar15 >> 0x20),fVar12),
                      *(RangedAudioParameter **)(lVar4 + 0x38));
  if (*(char *)(lVar4 + 0x96) == '\0') {
                    /* try { // try from 001c2a55 to 001c2a59 has its CatchHandler @ 001c2af8 */
    AudioProcessorParameter::setValueNotifyingHost
              (fVar18,*(AudioProcessorParameter **)(lVar4 + 0x38));
  }
LAB_001c2a5a:
                    /* try { // try from 001c2a5f to 001c2a64 has its CatchHandler @ 001c2b36 */
  (**(code **)(local_50 + 0x58))(&local_48);
                    /* try { // try from 001c2a6a to 001c2a6f has its CatchHandler @ 001c2b2e */
  (**(code **)(local_40 + 0x58))(&local_38);
  return;
}


