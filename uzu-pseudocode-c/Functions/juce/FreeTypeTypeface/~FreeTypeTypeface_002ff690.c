// Function : ~FreeTypeTypeface
// Namespace: juce:FreeTypeTypeface
// Entry    : 002ff690
// Prototype: undefined ~FreeTypeTypeface(FreeTypeTypeface * this)
// Body     : 002ff690 - 002ffa2a


/* juce::FreeTypeTypeface::~FreeTypeTypeface() */

void __thiscall juce::FreeTypeTypeface::~FreeTypeTypeface(FreeTypeTypeface *this)

{
  int iVar1;
  Native *pNVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  long lVar8;
  FreeTypeTypeface *pFVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  void *local_50;
  FreeTypeTypeface *local_48;
  long local_40;
  undefined8 *local_38;
  
  pNVar2 = *(Native **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (pNVar2 != (Native *)0x0) {
    Typeface::Native::~Native(pNVar2);
    operator_delete(pNVar2);
  }
  lVar8 = FTTypefaceList::singletonHolder;
  pFVar9 = this + 0x30;
  if ((*(int *)(this + 0x28) != 1) || (FTTypefaceList::singletonHolder == 0)) goto LAB_002ff999;
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 != (void *)0x0) {
    LOCK();
    *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
    UNLOCK();
  }
  puVar13 = *(undefined8 **)(lVar8 + 0x10);
  local_40 = lVar8;
  local_38 = *(undefined8 **)(lVar8 + 0x18);
  uVar11 = (long)local_38 - (long)puVar13;
  if (0x1f < (long)uVar11) {
    lVar8 = (uVar11 >> 5) + 1;
    local_48 = pFVar9;
    do {
      plVar4 = (long *)*puVar13;
      if (pvVar3 != (void *)0x0) {
        LOCK();
        *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
        UNLOCK();
      }
                    /* try { // try from 002ff746 to 002ff74d has its CatchHandler @ 002ffa46 */
      local_50 = pvVar3;
      cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
      if (cVar6 != '\0') {
LAB_002ff90b:
        pFVar9 = local_48;
        goto LAB_002ff910;
      }
      plVar4 = (long *)puVar13[1];
      if (pvVar3 != (void *)0x0) {
        LOCK();
        *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
        UNLOCK();
      }
                    /* try { // try from 002ff779 to 002ff780 has its CatchHandler @ 002ffa44 */
      local_50 = pvVar3;
      cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
      if (cVar6 != '\0') {
        puVar13 = puVar13 + 1;
        goto LAB_002ff90b;
      }
      plVar4 = (long *)puVar13[2];
      if (pvVar3 != (void *)0x0) {
        LOCK();
        *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
        UNLOCK();
      }
                    /* try { // try from 002ff7ac to 002ff7b3 has its CatchHandler @ 002ffa42 */
      local_50 = pvVar3;
      cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
      if (cVar6 != '\0') {
        puVar13 = puVar13 + 2;
        goto LAB_002ff90b;
      }
      plVar4 = (long *)puVar13[3];
      if (pvVar3 != (void *)0x0) {
        LOCK();
        *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
        UNLOCK();
      }
                    /* try { // try from 002ff7df to 002ff7e6 has its CatchHandler @ 002ffa40 */
      local_50 = pvVar3;
      cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
      if (cVar6 != '\0') {
        puVar13 = puVar13 + 3;
        goto LAB_002ff90b;
      }
      puVar13 = puVar13 + 4;
      lVar8 = lVar8 + -1;
      uVar11 = uVar11 - 0x20;
    } while (1 < lVar8);
    pFVar9 = local_48;
  }
  lVar8 = local_40;
  lVar12 = (long)uVar11 >> 3;
  if (lVar12 == 1) {
    plVar4 = (long *)*puVar13;
joined_r0x002ff886:
    if (pvVar3 != (void *)0x0) {
      LOCK();
      *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
      UNLOCK();
    }
                    /* try { // try from 002ff891 to 002ff898 has its CatchHandler @ 002ffa39 */
    local_50 = pvVar3;
    cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
    ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
    if (cVar6 == '\0') {
      puVar13 = local_38;
    }
  }
  else if (lVar12 == 2) {
LAB_002ff8b5:
    plVar4 = (long *)*puVar13;
    if (pvVar3 != (void *)0x0) {
      LOCK();
      *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
      UNLOCK();
    }
                    /* try { // try from 002ff8cb to 002ff8d2 has its CatchHandler @ 002ffa32 */
    local_50 = pvVar3;
    cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
    ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
    if (cVar6 == '\0') {
      puVar13 = puVar13 + 1;
      plVar4 = (long *)*puVar13;
      goto joined_r0x002ff886;
    }
  }
  else if (lVar12 == 3) {
    plVar4 = (long *)*puVar13;
    if (pvVar3 != (void *)0x0) {
      LOCK();
      *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
      UNLOCK();
    }
                    /* try { // try from 002ff854 to 002ff85b has its CatchHandler @ 002ffa2b */
    local_50 = pvVar3;
    cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
    ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
    if (cVar6 == '\0') {
      puVar13 = puVar13 + 1;
      goto LAB_002ff8b5;
    }
  }
  else {
    puVar13 = local_38;
LAB_002ff910:
    lVar8 = local_40;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0x18);
  if (puVar13 != puVar7) {
    puVar13 = puVar13 + 1;
    if ((puVar13 != puVar7) && (0 < (long)puVar7 - (long)puVar13)) {
      lVar12 = ((ulong)((long)puVar7 - (long)puVar13) >> 3) + 1;
      do {
        plVar4 = (long *)puVar13[-1];
        uVar5 = *puVar13;
        *puVar13 = 0;
        puVar13[-1] = uVar5;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        puVar13 = puVar13 + 1;
        lVar12 = lVar12 + -1;
      } while (1 < lVar12);
      puVar7 = *(undefined8 **)(lVar8 + 0x18);
    }
    *(undefined8 **)(lVar8 + 0x18) = puVar7 + -1;
    if ((long *)puVar7[-1] != (long *)0x0) {
      (**(code **)(*(long *)puVar7[-1] + 8))();
    }
    puVar7[-1] = 0;
  }
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(pvVar3);
LAB_002ff999:
  pNVar2 = *(Native **)pFVar9;
  if (pNVar2 != (Native *)0x0) {
    Typeface::Native::~Native(pNVar2);
    operator_delete(pNVar2);
  }
  *(undefined8 *)(this + 0x30) = 0;
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(*(void **)(this + 0x20));
  *(undefined ***)this = &PTR__Typeface_00711980;
  piVar10 = (int *)(*(long *)(this + 0x18) + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar10);
    }
  }
  piVar10 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar10);
    }
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


