// Function : setHeight
// Namespace: juce:Font
// Entry    : 002f6270
// Prototype: undefined setHeight(float param_1, Font * this)
// Body     : 002f6270 - 002f6561


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Font::setHeight(float) */

void __thiscall juce::Font::setHeight(float param_1,Font *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  float fVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long *local_b8;
  long lStack_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined8 uStack_5a;
  undefined1 local_48 [16];
  
  fVar13 = DAT_005d9048;
  if (param_1 <= DAT_005d9048) {
    fVar13 = param_1;
  }
  fVar6 = (float)(-(uint)(param_1 < DAT_005d9068) & (uint)DAT_005d9068 |
                 ~-(uint)(param_1 < DAT_005d9068) & (uint)fVar13);
  local_48 = ZEXT416((uint)fVar6);
  fVar13 = *(float *)(*(long *)this + 100);
  fVar12 = (float)((uint)fVar13 & _DAT_005d91c0);
  if ((fVar12 == DAT_005d94c8) ||
     (fVar11 = (float)(_DAT_005d91c0 & (uint)fVar6), fVar11 == DAT_005d94c8)) {
    if ((fVar13 == fVar6) && (!NAN(fVar13) && !NAN(fVar6))) {
      return;
    }
  }
  else {
    fVar13 = (float)((uint)(fVar13 - fVar6) & _DAT_005d91c0);
    if (fVar13 <= DAT_005d94cc) {
      return;
    }
    if (fVar11 <= fVar12) {
      fVar11 = fVar12;
    }
    if (fVar13 <= fVar11 * DAT_005d94d0) {
      return;
    }
  }
  if (1 < *(int *)(*(long *)this + 8)) {
    SharedFontInternal::copy(&local_b8,*(long *)this);
    plVar9 = *(long **)this;
    *(long **)this = local_b8;
    local_b8 = plVar9;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar2 = *(long *)this;
  FontOptions::FontOptions((FontOptions *)&local_b8,(long *)(lVar2 + 0x18));
  uStack_6c = local_48._0_4_;
  uStack_68 = 0xbf800000;
  plVar7 = *(long **)(lVar2 + 0x18);
  lVar8 = *(long *)(lVar2 + 0x20);
  *(long **)(lVar2 + 0x18) = local_b8;
  *(long *)(lVar2 + 0x20) = lStack_b0;
  plVar9 = *(long **)(lVar2 + 0x28);
  *(long **)(lVar2 + 0x28) = local_a8;
  plVar3 = *(long **)(lVar2 + 0x30);
  plVar4 = *(long **)(lVar2 + 0x38);
  *(long **)(lVar2 + 0x30) = local_a0;
  *(long **)(lVar2 + 0x38) = plStack_98;
  *(undefined8 *)(lVar2 + 0x40) = local_90;
  local_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  local_90 = 0;
  local_b8 = plVar7;
  lStack_b0 = lVar8;
  local_a8 = plVar9;
  if (plVar3 != plVar4) {
    plVar9 = plVar3;
    do {
      piVar10 = (int *)(*plVar9 + -0x10);
      if (piVar10 != &emptyString) {
        LOCK();
        iVar1 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar10);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar4);
  }
  if (plVar3 != (long *)0x0) {
    operator_delete(plVar3);
  }
  pvVar5 = *(void **)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x48) = local_88;
  *(undefined8 *)(lVar2 + 0x50) = uStack_80;
  *(undefined8 *)(lVar2 + 0x58) = local_78;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  plVar3 = plStack_98;
  *(ulong *)(lVar2 + 0x6e) = CONCAT62(uStack_60,uStack_62);
  *(undefined8 *)(lVar2 + 0x76) = uStack_5a;
  *(ulong *)(lVar2 + 0x60) = CONCAT44(uStack_6c,local_70);
  *(ulong *)(lVar2 + 0x68) = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
  for (plVar9 = local_a0; plVar9 != plVar3; plVar9 = plVar9 + 1) {
    piVar10 = (int *)(*plVar9 + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      iVar1 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar10);
      }
    }
  }
  if (local_a0 != (long *)0x0) {
    operator_delete(local_a0);
  }
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar9 = local_a8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)(*local_a8 + 8))();
    }
  }
  piVar10 = (int *)(lStack_b0 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar10);
    }
  }
  plVar9 = local_b8 + -2;
  if (plVar9 != (long *)&emptyString) {
    LOCK();
    lVar2 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar2 == 0) {
      operator_delete__(plVar9);
    }
  }
  lVar2 = *(long *)this;
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x80));
  plVar9 = *(long **)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x80));
  return;
}


