// Function : ~ComponentPeer
// Namespace: juce:ComponentPeer
// Entry    : 001d9ac0
// Prototype: undefined ~ComponentPeer(ComponentPeer * this)
// Body     : 001d9ac0 - 001d9d4e


/* juce::ComponentPeer::~ComponentPeer() */

void __thiscall juce::ComponentPeer::~ComponentPeer(ComponentPeer *this)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  Desktop *this_00;
  undefined8 *puVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  *(undefined ***)this = &PTR__ComponentPeer_0070cbd8;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001d9af2 to 001d9afb has its CatchHandler @ 001d9d5c */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 001d9aff to 001d9b06 has its CatchHandler @ 001d9d4f */
    Desktop::Desktop(this_00);
    iVar13 = *(int *)(this_00 + 0x90);
  }
  else {
    iVar13 = *(int *)(Desktop::instance + 0x90);
    this_00 = Desktop::instance;
  }
  Desktop::instance = this_00;
  if (iVar13 == 2) {
    plVar6 = *(long **)(this_00 + 0x70);
    uVar2 = *(uint *)((long)plVar6 + 0xc);
    if (0 < (int)uVar2) {
      lVar5 = *plVar6;
      uVar10 = 0;
      do {
        if (*(ComponentPeer **)(lVar5 + uVar10 * 8) == this) {
          uVar11 = (uint)uVar10;
          memmove((void *)(lVar5 + uVar10 * 8),(void *)(lVar5 + uVar10 * 8 + 8),
                  (long)(int)(~uVar11 + uVar2) << 3);
          iVar13 = *(int *)((long)plVar6 + 0xc);
          uVar2 = iVar13 - 1;
          *(uint *)((long)plVar6 + 0xc) = uVar2;
          iVar9 = iVar13 * 2 + -2;
          iVar13 = 0;
          if (-1 < iVar9) {
            iVar13 = iVar9;
          }
          if (iVar13 < (int)plVar6[1]) {
            uVar12 = 8;
            if (8 < (int)uVar2) {
              uVar12 = uVar2;
            }
            if ((int)uVar12 < (int)plVar6[1]) {
              pvVar8 = realloc((void *)*plVar6,(ulong)uVar12 << 3);
              *plVar6 = (long)pvVar8;
              *(uint *)(plVar6 + 1) = uVar12;
            }
          }
          if (-1 < (int)uVar11) {
            puVar3 = (undefined8 *)(*(undefined8 **)(this_00 + 0x80))[1];
            for (puVar7 = (undefined8 *)**(undefined8 **)(this_00 + 0x80); puVar7 != puVar3;
                puVar7 = puVar7 + 1) {
              piVar4 = (int *)*puVar7;
              if ((int)uVar11 < piVar4[1]) {
                piVar4[1] = piVar4[1] + -1;
              }
              if ((int)uVar11 <= *piVar4) {
                *piVar4 = *piVar4 + -1;
              }
            }
          }
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
  }
  uVar2 = *(uint *)(this_00 + 0xdc);
  if (0 < (int)uVar2) {
    lVar5 = *(long *)(this_00 + 0xd0);
    uVar10 = 0;
    do {
      if (*(ComponentPeer **)(lVar5 + uVar10 * 8) == this) {
        memmove((void *)(lVar5 + uVar10 * 8),(void *)(lVar5 + uVar10 * 8 + 8),
                (long)(int)(~(uint)uVar10 + uVar2) << 3);
        iVar13 = *(int *)(this_00 + 0xdc);
        uVar2 = iVar13 - 1;
        *(uint *)(this_00 + 0xdc) = uVar2;
        iVar9 = iVar13 * 2 + -2;
        iVar13 = 0;
        if (-1 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar13 < *(int *)(this_00 + 0xd8)) {
          uVar11 = 8;
          if (8 < (int)uVar2) {
            uVar11 = uVar2;
          }
          if ((int)uVar11 < *(int *)(this_00 + 0xd8)) {
            pvVar8 = realloc(*(void **)(this_00 + 0xd0),(ulong)uVar11 << 3);
            *(void **)(this_00 + 0xd0) = pvVar8;
            *(uint *)(this_00 + 0xd8) = uVar11;
          }
        }
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  LOCK();
  bVar14 = *(int *)(*(long *)(this_00 + 0x38) + 0x18) == 0;
  if (bVar14) {
    *(int *)(*(long *)(this_00 + 0x38) + 0x18) = 1;
  }
  UNLOCK();
  if (bVar14) {
    plVar6 = *(long **)(this_00 + 0x38);
    if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
       (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar6);
      plVar6 = *(long **)(this + 0x90);
      goto joined_r0x001d9ce8;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    LOCK();
    *(undefined4 *)(*(long *)(this_00 + 0x38) + 0x18) = 0;
    UNLOCK();
  }
  plVar6 = *(long **)(this + 0x90);
joined_r0x001d9ce8:
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = *(long **)(this + 0x88);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x58));
  ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x30));
  return;
}


