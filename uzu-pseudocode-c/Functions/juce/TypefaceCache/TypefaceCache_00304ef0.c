// Function : TypefaceCache
// Namespace: juce:TypefaceCache
// Entry    : 00304ef0
// Prototype: undefined TypefaceCache(TypefaceCache * this)
// Body     : 00304ef0 - 0030550d


/* juce::TypefaceCache::TypefaceCache() */

void __thiscall juce::TypefaceCache::TypefaceCache(TypefaceCache *this)

{
  long *plVar1;
  int *piVar2;
  TypefaceCache *pTVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  void *__ptr;
  undefined8 uVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  
  DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)this);
  *(undefined ***)this = &PTR__TypefaceCache_00711fc8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x18] = (TypefaceCache)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x48));
  this[0x78] = (TypefaceCache)0x0;
  this[0x80] = (TypefaceCache)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xb0));
  this[0xe0] = (TypefaceCache)0x0;
  pvVar10 = malloc(0x200);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(void **)(this + 0xf8) = pvVar10;
  *(undefined4 *)(this + 0x100) = 0x20;
  pTVar3 = this + 0x108;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  ReadWriteLock::enterWrite((ReadWriteLock *)(this + 0x10));
  if (0 < *(int *)(this + 0x114)) {
    lVar14 = 0;
    lVar12 = 0;
    do {
      lVar13 = *(long *)pTVar3;
      plVar6 = *(long **)(lVar13 + 0x18 + lVar14);
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      piVar15 = (int *)(*(long *)(lVar13 + 8 + lVar14) + -0x10);
      if (piVar15 == &emptyString) {
LAB_0030504a:
        piVar15 = (int *)(*(long *)(lVar13 + lVar14) + -0x10);
        if (piVar15 != &emptyString) {
LAB_00305058:
          LOCK();
          iVar9 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            operator_delete__(piVar15);
          }
        }
      }
      else {
        LOCK();
        iVar9 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar9 != 0) goto LAB_0030504a;
        operator_delete__(piVar15);
        piVar15 = (int *)(*(long *)(lVar13 + lVar14) + -0x10);
        if (piVar15 != &emptyString) goto LAB_00305058;
      }
      lVar12 = lVar12 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar12 < *(int *)(this + 0x114));
  }
  *(undefined4 *)(this + 0x114) = 0;
  if (*(int *)(this + 0x110) != 0) {
    free(*(void **)pTVar3);
    *(long *)pTVar3 = 0;
  }
  *(undefined4 *)(this + 0x110) = 0;
  if ((getFontPlaceholderNames()::names == '\0') &&
     (iVar9 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar9 != 0)) {
                    /* try { // try from 0030548e to 00305492 has its CatchHandler @ 00305539 */
    FontPlaceholderNames::FontPlaceholderNames();
    __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                 &__dso_handle);
    __cxa_guard_release(&getFontPlaceholderNames()::names);
  }
  lVar12 = getFontPlaceholderNames()::names;
  piVar15 = (int *)(getFontPlaceholderNames()::names + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  if ((getFontPlaceholderNames()::names == '\0') &&
     (iVar9 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar9 != 0)) {
                    /* try { // try from 003054d2 to 003054dc has its CatchHandler @ 0030550e */
    FontPlaceholderNames::FontPlaceholderNames();
    __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                 &__dso_handle);
    __cxa_guard_release(&getFontPlaceholderNames()::names);
  }
  lVar14 = DAT_0071cd48;
  piVar2 = (int *)(DAT_0071cd48 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  iVar9 = *(int *)(this + 0x114);
  if ((int)*(uint *)(this + 0x110) < iVar9 + 10) {
    uVar11 = iVar9 + (iVar9 + 10) / 2 + 0x12U & 0xfffffff8;
    if (*(uint *)(this + 0x110) != uVar11) {
      if ((int)uVar11 < 1) {
        free(*(void **)pTVar3);
        *(long *)pTVar3 = 0;
      }
      else {
        pvVar10 = malloc((long)(int)uVar11 << 5);
        if (0 < iVar9) {
          lVar13 = 0;
          lVar17 = 0;
          do {
            lVar7 = *(long *)pTVar3;
            *(undefined8 *)((long)pvVar10 + lVar13) = *(undefined8 *)(lVar7 + lVar13);
            *(undefined1 **)(lVar7 + lVar13) = &DAT_0061ac58;
            puVar4 = (undefined8 *)(lVar7 + 8 + lVar13);
            uVar8 = puVar4[1];
            puVar5 = (undefined8 *)((long)pvVar10 + lVar13 + 8);
            *puVar5 = *puVar4;
            puVar5[1] = uVar8;
            *(undefined1 **)(lVar7 + 8 + lVar13) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar10 + lVar13 + 0x18) = *(undefined8 *)(lVar7 + 0x18 + lVar13);
            *(undefined8 *)(lVar7 + 0x18 + lVar13) = 0;
            piVar16 = (int *)(*(long *)(lVar7 + 8 + lVar13) + -0x10);
            if (piVar16 != &emptyString) {
              LOCK();
              iVar9 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar9 == 0) {
                operator_delete__(piVar16);
              }
            }
            piVar16 = (int *)(*(long *)(lVar7 + lVar13) + -0x10);
            if (piVar16 != &emptyString) {
              LOCK();
              iVar9 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar9 == 0) {
                operator_delete__(piVar16);
              }
            }
            lVar17 = lVar17 + 1;
            lVar13 = lVar13 + 0x20;
          } while (lVar17 < *(int *)(this + 0x114));
        }
        __ptr = *(void **)pTVar3;
        *(void **)pTVar3 = pvVar10;
        free(__ptr);
      }
    }
    *(uint *)(this + 0x110) = uVar11;
    iVar9 = *(int *)(this + 0x114);
  }
  lVar17 = (long)iVar9 * 0x20;
  lVar13 = *(long *)pTVar3;
  *(long *)(lVar13 + lVar17) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  lVar7 = lVar13 + lVar17;
  *(long *)(lVar13 + 8 + lVar17) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)(lVar13 + 0x10 + lVar17);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(long *)(lVar7 + 0x20) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0x28) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(long *)(lVar7 + 0x40) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0x48) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(long *)(lVar7 + 0x60) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0x68) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0x70) = 0;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  *(long *)(lVar7 + 0x80) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0x88) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(undefined8 *)(lVar7 + 0x98) = 0;
  *(long *)(lVar7 + 0xa0) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0xa8) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(undefined8 *)(lVar7 + 0xb8) = 0;
  *(long *)(lVar7 + 0xc0) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 200) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  *(undefined8 *)(lVar7 + 0xd8) = 0;
  *(long *)(lVar7 + 0xe0) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0xe8) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0xf0) = 0;
  *(undefined8 *)(lVar7 + 0xf8) = 0;
  *(long *)(lVar7 + 0x100) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0x108) = lVar14;
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x118) = 0;
  *(long *)(lVar7 + 0x120) = lVar12;
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(long *)(lVar7 + 0x128) = lVar14;
  if (piVar2 == &emptyString) {
    *(undefined8 *)(lVar7 + 0x130) = 0;
    *(undefined8 *)(lVar7 + 0x138) = 0;
    *(int *)(this + 0x114) = *(int *)(this + 0x114) + 10;
  }
  else {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    *(undefined8 *)(lVar7 + 0x130) = 0;
    *(undefined8 *)(lVar7 + 0x138) = 0;
    *(int *)(this + 0x114) = *(int *)(this + 0x114) + 10;
    LOCK();
    iVar9 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar2);
    }
  }
  if (piVar15 != &emptyString) {
    LOCK();
    iVar9 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar15);
    }
  }
  ReadWriteLock::exitWrite((ReadWriteLock *)(this + 0x10));
  return;
}


