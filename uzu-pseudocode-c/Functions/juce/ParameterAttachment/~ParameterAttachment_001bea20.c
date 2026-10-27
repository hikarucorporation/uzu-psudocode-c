// Function : ~ParameterAttachment
// Namespace: juce:ParameterAttachment
// Entry    : 001bea20
// Prototype: undefined ~ParameterAttachment(ParameterAttachment * this)
// Body     : 001bea20 - 001beb39


/* juce::ParameterAttachment::~ParameterAttachment() */

void __thiscall juce::ParameterAttachment::~ParameterAttachment(ParameterAttachment *this)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  
  *(undefined ***)this = &PTR__ParameterAttachment_00706a20;
  *(undefined ***)(this + 8) = &PTR__ParameterAttachment_00706a58;
  lVar4 = *(long *)(this + 0x18);
  pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  uVar3 = *(uint *)(lVar4 + 0x44);
  if (0 < (int)uVar3) {
    lVar5 = *(long *)(lVar4 + 0x38);
    uVar8 = 0;
    do {
      if (*(ParameterAttachment **)(lVar5 + uVar8 * 8) == this) {
        memmove((void *)(lVar5 + uVar8 * 8),(void *)(lVar5 + uVar8 * 8 + 8),
                (long)(int)(~(uint)uVar8 + uVar3) << 3);
        iVar9 = *(int *)(lVar4 + 0x44);
        uVar3 = iVar9 - 1;
        *(uint *)(lVar4 + 0x44) = uVar3;
        iVar7 = iVar9 * 2 + -2;
        iVar9 = 0;
        if (-1 < iVar7) {
          iVar9 = iVar7;
        }
        if (iVar9 < *(int *)(lVar4 + 0x40)) {
          uVar8 = 8;
          if (8 < (int)uVar3) {
            uVar8 = (ulong)uVar3;
          }
          if ((int)uVar8 < *(int *)(lVar4 + 0x40)) {
            pvVar6 = realloc(*(void **)(lVar4 + 0x38),uVar8 << 3);
            *(void **)(lVar4 + 0x38) = pvVar6;
            *(int *)(lVar4 + 0x40) = (int)uVar8;
          }
        }
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
  LOCK();
  uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x18);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
  UNLOCK();
  if (*(code **)(this + 0x40) != (code *)0x0) {
                    /* try { // try from 001beaf4 to 001beafd has its CatchHandler @ 001beb3a */
    (**(code **)(this + 0x40))(this + 0x30,this + 0x30,3,uVar2);
  }
  *(undefined ***)(this + 8) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
  UNLOCK();
  pvVar6 = *(void **)(this + 0x10);
  if (pvVar6 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar6 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


