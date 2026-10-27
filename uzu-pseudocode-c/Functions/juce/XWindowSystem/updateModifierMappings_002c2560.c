// Function : updateModifierMappings
// Namespace: juce:XWindowSystem
// Entry    : 002c2560
// Prototype: undefined updateModifierMappings(XWindowSystem * this)
// Body     : 002c2560 - 002c2b36


/* juce::XWindowSystem::updateModifierMappings() const */

void __thiscall juce::XWindowSystem::updateModifierMappings(XWindowSystem *this)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x210))(lVar6);
  }
                    /* try { // try from 002c2591 to 002c25a7 has its CatchHandler @ 002c2b4b */
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  cVar3 = (**(code **)(lVar6 + 0x200))(*(undefined8 *)(this + 0x148),0xffe9);
                    /* try { // try from 002c25aa to 002c25c0 has its CatchHandler @ 002c2b49 */
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  cVar4 = (**(code **)(lVar6 + 0x200))(*(undefined8 *)(this + 0x148));
  Keys::AltMask = 0;
  Keys::NumLockMask = 0;
                    /* try { // try from 002c25d8 to 002c25e9 has its CatchHandler @ 002c2b47 */
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  puVar7 = (uint *)(**(code **)(lVar6 + 0x188))();
  if (puVar7 == (uint *)0x0) goto LAB_002c2b08;
  uVar2 = *puVar7;
  uVar10 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    lVar6 = *(long *)(puVar7 + 2);
    if (uVar2 == 1) {
      uVar9 = 0;
LAB_002c2676:
      if (*(char *)(lVar6 + uVar9) == cVar3) {
        puVar8 = &Keys::AltMask;
      }
      else {
        if (*(char *)(lVar6 + uVar9) != cVar4) goto LAB_002c2699;
        puVar8 = &Keys::NumLockMask;
      }
      *puVar8 = 1;
    }
    else {
      uVar9 = 0;
      do {
        puVar8 = &Keys::AltMask;
        if ((*(char *)(lVar6 + uVar9) == cVar3) ||
           (puVar8 = &Keys::NumLockMask, *(char *)(lVar6 + uVar9) == cVar4)) {
          *puVar8 = 1;
        }
        cVar1 = *(char *)(lVar6 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 1;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) != 0) goto LAB_002c2676;
    }
LAB_002c2699:
    if (uVar2 == 1) {
      uVar9 = 0;
LAB_002c2714:
      cVar1 = *(char *)(lVar6 + uVar9 + uVar10);
      if (cVar1 == cVar3) {
        puVar8 = &Keys::AltMask;
      }
      else {
        if (cVar1 != cVar4) goto LAB_002c273a;
        puVar8 = &Keys::NumLockMask;
      }
      *puVar8 = 2;
    }
    else {
      uVar9 = 0;
      do {
        cVar1 = *(char *)(uVar10 + lVar6 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 2;
        }
        cVar1 = *(char *)(uVar10 + lVar6 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 2;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) != 0) goto LAB_002c2714;
    }
LAB_002c273a:
    if (uVar2 == 1) {
      uVar9 = 0;
LAB_002c27b4:
      cVar1 = *(char *)(lVar6 + uVar9 + uVar10 * 2);
      if (cVar1 == cVar3) {
        puVar8 = &Keys::AltMask;
      }
      else {
        if (cVar1 != cVar4) goto LAB_002c27da;
        puVar8 = &Keys::NumLockMask;
      }
      *puVar8 = 4;
    }
    else {
      lVar5 = uVar10 * 2 + lVar6;
      uVar9 = 0;
      do {
        cVar1 = *(char *)(lVar5 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 4;
        }
        cVar1 = *(char *)(lVar5 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 4;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) != 0) goto LAB_002c27b4;
    }
LAB_002c27da:
    if (uVar2 == 1) {
      uVar9 = 0;
LAB_002c2854:
      cVar1 = *(char *)(lVar6 + uVar10 * 3 + uVar9);
      if (cVar1 == cVar3) {
        puVar8 = &Keys::AltMask;
      }
      else {
        if (cVar1 != cVar4) goto LAB_002c287a;
        puVar8 = &Keys::NumLockMask;
      }
      *puVar8 = 8;
    }
    else {
      lVar5 = uVar10 * 3 + lVar6;
      uVar9 = 0;
      do {
        cVar1 = *(char *)(lVar5 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 8;
        }
        cVar1 = *(char *)(lVar5 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 8;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) != 0) goto LAB_002c2854;
    }
LAB_002c287a:
    if (uVar2 == 1) {
      uVar9 = 0;
LAB_002c28f4:
      cVar1 = *(char *)(lVar6 + uVar10 * 4 + uVar9);
      if (cVar1 == cVar3) {
        puVar8 = &Keys::AltMask;
      }
      else {
        if (cVar1 != cVar4) goto LAB_002c291a;
        puVar8 = &Keys::NumLockMask;
      }
      *puVar8 = 0x10;
    }
    else {
      lVar5 = uVar10 * 4 + lVar6;
      uVar9 = 0;
      do {
        cVar1 = *(char *)(lVar5 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x10;
        }
        cVar1 = *(char *)(lVar5 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x10;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) != 0) goto LAB_002c28f4;
    }
LAB_002c291a:
    if (uVar2 == 1) {
      uVar9 = 0;
LAB_002c2994:
      cVar1 = *(char *)(lVar6 + uVar10 * 5 + uVar9);
      if (cVar1 == cVar3) {
        puVar8 = &Keys::AltMask;
      }
      else {
        if (cVar1 != cVar4) goto LAB_002c29ba;
        puVar8 = &Keys::NumLockMask;
      }
      *puVar8 = 0x20;
    }
    else {
      lVar5 = uVar10 * 5 + lVar6;
      uVar9 = 0;
      do {
        cVar1 = *(char *)(lVar5 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x20;
        }
        cVar1 = *(char *)(lVar5 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x20;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) != 0) goto LAB_002c2994;
    }
LAB_002c29ba:
    if (uVar2 == 1) {
      uVar9 = 0;
LAB_002c2a34:
      cVar1 = *(char *)(lVar6 + uVar10 * 6 + uVar9);
      if (cVar1 == cVar3) {
        puVar8 = &Keys::AltMask;
      }
      else {
        if (cVar1 != cVar4) goto LAB_002c2a5a;
        puVar8 = &Keys::NumLockMask;
      }
      *puVar8 = 0x40;
    }
    else {
      lVar5 = uVar10 * 6 + lVar6;
      uVar9 = 0;
      do {
        cVar1 = *(char *)(lVar5 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x40;
        }
        cVar1 = *(char *)(lVar5 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x40;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) != 0) goto LAB_002c2a34;
    }
LAB_002c2a5a:
    if (uVar2 == 1) {
      uVar9 = 0;
    }
    else {
      lVar5 = uVar10 * 7 + lVar6;
      uVar9 = 0;
      do {
        cVar1 = *(char *)(lVar5 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x80;
        }
        cVar1 = *(char *)(lVar5 + 1 + uVar9);
        puVar8 = &Keys::AltMask;
        if ((cVar1 == cVar3) || (puVar8 = &Keys::NumLockMask, cVar1 == cVar4)) {
          *puVar8 = 0x80;
        }
        uVar9 = uVar9 + 2;
      } while ((uVar2 & 0xfffffffe) != uVar9);
      if ((uVar2 & 1) == 0) goto LAB_002c2afa;
    }
    cVar1 = *(char *)(lVar6 + uVar10 * 7 + uVar9);
    if (cVar1 == cVar3) {
      puVar8 = &Keys::AltMask;
    }
    else {
      if (cVar1 != cVar4) goto LAB_002c2afa;
      puVar8 = &Keys::NumLockMask;
    }
    *puVar8 = 0x80;
  }
LAB_002c2afa:
                    /* try { // try from 002c2afa to 002c2b07 has its CatchHandler @ 002c2b3f */
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar6 + 0x148))(puVar7);
LAB_002c2b08:
  if ((singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
                    /* try { // try from 002c2b20 to 002c2b2d has its CatchHandler @ 002c2b37 */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x360))(lVar6);
  }
  return;
}


