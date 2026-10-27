// Function : setTypefaceName
// Namespace: juce:Font
// Entry    : 002f9800
// Prototype: undefined setTypefaceName(Font * this, long * param_1)
// Body     : 002f9800 - 002f9adb


/* juce::Font::setTypefaceName(juce::String const&) */

void __thiscall juce::Font::setTypefaceName(Font *this,long *param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  int *piVar13;
  bool bVar14;
  long local_a0;
  long *local_98;
  long lStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  
  pbVar4 = *(byte **)(*(long *)this + 0x18);
  pbVar1 = pbVar4 + -0x10;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
  }
  if ((byte *)*param_1 == pbVar4) {
    bVar14 = false;
  }
  else {
    uVar11 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       ((byte *)*param_1,pbVar4);
    bVar14 = uVar11 != 0;
  }
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    iVar3 = *(int *)pbVar1;
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(pbVar1);
    }
  }
  if (bVar14) {
    if (1 < *(int *)(*(long *)this + 8)) {
      SharedFontInternal::copy(&local_98,*(long *)this);
      plVar12 = *(long **)this;
      *(long **)this = local_98;
      local_98 = plVar12;
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    SharedFontInternal::setTypeface(*(SharedFontInternal **)this,(long *)0x0);
    lVar5 = *(long *)this;
    local_a0 = *param_1;
    piVar2 = (int *)(local_a0 + -0x10);
    if (piVar2 != &emptyString) {
      LOCK();
      *(int *)(local_a0 + -0x10) = *(int *)(local_a0 + -0x10) + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_a0 + -0x10) = *(int *)(local_a0 + -0x10) + 1;
      UNLOCK();
    }
                    /* try { // try from 002f98e9 to 002f98fa has its CatchHandler @ 002f9adc */
    plVar12 = (long *)(lVar5 + 0x18);
    FontOptions::withName((FontOptions *)&local_98,plVar12,&local_a0);
    plVar9 = (long *)*plVar12;
    lVar10 = *(long *)(lVar5 + 0x20);
    *plVar12 = (long)local_98;
    *(long *)(lVar5 + 0x20) = lStack_90;
    plVar12 = *(long **)(lVar5 + 0x28);
    *(long **)(lVar5 + 0x28) = local_88;
    plVar6 = *(long **)(lVar5 + 0x30);
    plVar7 = *(long **)(lVar5 + 0x38);
    *(long **)(lVar5 + 0x30) = local_80;
    *(long **)(lVar5 + 0x38) = plStack_78;
    *(undefined8 *)(lVar5 + 0x40) = local_70;
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_70 = 0;
    local_98 = plVar9;
    lStack_90 = lVar10;
    local_88 = plVar12;
    if (plVar6 != plVar7) {
      plVar12 = plVar6;
      do {
        piVar13 = (int *)(*plVar12 + -0x10);
        if (piVar13 != &emptyString) {
          LOCK();
          iVar3 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            operator_delete__(piVar13);
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar7);
    }
    if (plVar6 != (long *)0x0) {
      operator_delete(plVar6);
    }
    pvVar8 = *(void **)(lVar5 + 0x48);
    *(undefined8 *)(lVar5 + 0x48) = local_68;
    *(undefined8 *)(lVar5 + 0x50) = uStack_60;
    *(undefined8 *)(lVar5 + 0x58) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    plVar6 = plStack_78;
    *(ulong *)(lVar5 + 0x6e) = CONCAT62(uStack_40,uStack_42);
    *(undefined8 *)(lVar5 + 0x76) = uStack_3a;
    *(undefined8 *)(lVar5 + 0x60) = local_50;
    *(ulong *)(lVar5 + 0x68) = CONCAT26(uStack_42,uStack_48);
    for (plVar12 = local_80; plVar12 != plVar6; plVar12 = plVar12 + 1) {
      piVar13 = (int *)(*plVar12 + -0x10);
      if (piVar13 != &emptyString) {
        LOCK();
        iVar3 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          operator_delete__(piVar13);
        }
      }
    }
    if (local_80 != (long *)0x0) {
      operator_delete(local_80);
    }
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar12 = local_88 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)(*local_88 + 8))();
      }
    }
    piVar13 = (int *)(lStack_90 + -0x10);
    if (piVar13 != &emptyString) {
      LOCK();
      iVar3 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar13);
      }
    }
    plVar12 = local_98 + -2;
    if (plVar12 != (long *)&emptyString) {
      LOCK();
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 0) {
        operator_delete__(plVar12);
      }
    }
    piVar13 = (int *)(local_a0 + -0x10);
    if (piVar13 != &emptyString) {
      LOCK();
      iVar3 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar13);
      }
    }
    if (piVar2 != &emptyString) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar2);
      }
    }
  }
  return;
}


