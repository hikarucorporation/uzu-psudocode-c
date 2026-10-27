// Function : setTypeface
// Namespace: juce:Font:SharedFontInternal
// Entry    : 00303b50
// Prototype: undefined setTypeface(SharedFontInternal * this, long * param_1)
// Body     : 00303b50 - 003041e0


/* juce::Font::SharedFontInternal::setTypeface(juce::ReferenceCountedObjectPtr<juce::Typeface>) */

void __thiscall juce::Font::SharedFontInternal::setTypeface(SharedFontInternal *this,long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long *local_180;
  long local_178;
  long lStack_170;
  long *local_168;
  long *local_160;
  long *plStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined8 uStack_11a;
  undefined1 *local_110;
  undefined1 *local_108;
  long *local_100;
  long local_f8;
  long local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  void *local_c8;
  long local_90;
  long local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  void *local_60;
  
  plVar7 = *(long **)(this + 0x10);
  if (param_1 == (long *)0x0) {
    *(undefined8 *)(this + 0x10) = 0;
    if (plVar7 != (long *)0x0) {
LAB_00303b96:
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (*(long *)(this + 0x10) != 0) goto LAB_00303bae;
    }
    local_180 = (long *)0x0;
  }
  else {
    if (plVar7 != param_1) {
      LOCK();
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      UNLOCK();
      plVar7 = *(long **)(this + 0x10);
      *(long **)(this + 0x10) = param_1;
      if (plVar7 != (long *)0x0) goto LAB_00303b96;
    }
LAB_00303bae:
    local_100 = (long *)0x0;
                    /* try { // try from 00303bbe to 00303bd2 has its CatchHandler @ 0030420b */
    FontOptions::withTypeface((undefined4 *)&local_f8,(long *)(this + 0x18),(long *)&local_100);
    local_108 = &DAT_0061ac58;
                    /* try { // try from 00303be2 to 00303bfe has its CatchHandler @ 003041f3 */
    FontOptions::withName((FontOptions *)&local_90,&local_f8,(long *)&local_108);
    local_110 = &DAT_0061ac58;
                    /* try { // try from 00303c04 to 00303c1a has its CatchHandler @ 003041e1 */
    FontOptions::withStyle((FontOptions *)&local_178,&local_90,(long *)&local_110);
    lVar5 = *(long *)(this + 0x18);
    lVar6 = *(long *)(this + 0x20);
    *(long *)(this + 0x18) = local_178;
    *(long *)(this + 0x20) = lStack_170;
    plVar7 = *(long **)(this + 0x28);
    *(long **)(this + 0x28) = local_168;
    plVar2 = *(long **)(this + 0x30);
    plVar3 = *(long **)(this + 0x38);
    *(long **)(this + 0x30) = local_160;
    *(long **)(this + 0x38) = plStack_158;
    *(undefined8 *)(this + 0x40) = local_150;
    local_160 = (long *)0x0;
    plStack_158 = (long *)0x0;
    local_150 = 0;
    local_178 = lVar5;
    lStack_170 = lVar6;
    local_168 = plVar7;
    if (plVar2 != plVar3) {
      plVar7 = plVar2;
      do {
        piVar8 = (int *)(*plVar7 + -0x10);
        if (piVar8 != &emptyString) {
          LOCK();
          iVar1 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar8);
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar3);
    }
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
    }
    pvVar4 = *(void **)(this + 0x48);
    *(undefined8 *)(this + 0x48) = local_148;
    *(undefined8 *)(this + 0x50) = uStack_140;
    *(undefined8 *)(this + 0x58) = local_138;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    plVar2 = plStack_158;
    *(ulong *)(this + 0x6e) = CONCAT62(uStack_120,uStack_122);
    *(undefined8 *)(this + 0x76) = uStack_11a;
    *(undefined8 *)(this + 0x60) = local_130;
    *(ulong *)(this + 0x68) = CONCAT26(uStack_122,uStack_128);
    for (plVar7 = local_160; plVar7 != plVar2; plVar7 = plVar7 + 1) {
      piVar8 = (int *)(*plVar7 + -0x10);
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
    if (local_160 != (long *)0x0) {
      operator_delete(local_160);
    }
    if (local_168 != (long *)0x0) {
      LOCK();
      plVar7 = local_168 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_168 + 8))();
      }
    }
    piVar8 = (int *)(lStack_170 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    piVar8 = (int *)(local_178 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    piVar8 = (int *)(local_110 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    plVar7 = local_78;
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
      plVar7 = local_78;
    }
    for (; plVar7 != local_70; plVar7 = plVar7 + 1) {
      piVar8 = (int *)(*plVar7 + -0x10);
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
    if (local_78 != (long *)0x0) {
      operator_delete(local_78);
    }
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar7 = local_80 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_80 + 8))();
      }
    }
    piVar8 = (int *)(local_88 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    piVar8 = (int *)(local_90 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    piVar8 = (int *)(local_108 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    plVar7 = local_e0;
    if (local_c8 != (void *)0x0) {
      operator_delete(local_c8);
      plVar7 = local_e0;
    }
    for (; plVar7 != local_d8; plVar7 = plVar7 + 1) {
      piVar8 = (int *)(*plVar7 + -0x10);
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
    if (local_e0 != (long *)0x0) {
      operator_delete(local_e0);
    }
    if (local_e8 != (long *)0x0) {
      LOCK();
      plVar7 = local_e8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_e8 + 8))();
      }
    }
    piVar8 = (int *)(local_f0 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    piVar8 = (int *)(local_f8 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
    if (local_100 != (long *)0x0) {
      LOCK();
      plVar7 = local_100 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_100 + 8))();
      }
    }
    local_180 = *(long **)(this + 0x10);
    if (local_180 != (long *)0x0) {
      LOCK();
      *(int *)(local_180 + 1) = (int)local_180[1] + 1;
      UNLOCK();
    }
  }
                    /* try { // try from 00304002 to 00304010 has its CatchHandler @ 00304213 */
  FontOptions::withTypeface((undefined4 *)&local_178,(long *)(this + 0x18),(long *)&local_180);
  lVar5 = *(long *)(this + 0x18);
  lVar6 = *(long *)(this + 0x20);
  *(long *)(this + 0x18) = local_178;
  *(long *)(this + 0x20) = lStack_170;
  plVar7 = *(long **)(this + 0x28);
  *(long **)(this + 0x28) = local_168;
  plVar2 = *(long **)(this + 0x30);
  plVar3 = *(long **)(this + 0x38);
  *(long **)(this + 0x30) = local_160;
  *(long **)(this + 0x38) = plStack_158;
  *(undefined8 *)(this + 0x40) = local_150;
  local_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  local_150 = 0;
  local_178 = lVar5;
  lStack_170 = lVar6;
  local_168 = plVar7;
  if (plVar2 != plVar3) {
    plVar7 = plVar2;
    do {
      piVar8 = (int *)(*plVar7 + -0x10);
      if (piVar8 != &emptyString) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar8);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  pvVar4 = *(void **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = local_148;
  *(undefined8 *)(this + 0x50) = uStack_140;
  *(undefined8 *)(this + 0x58) = local_138;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar2 = plStack_158;
  *(ulong *)(this + 0x6e) = CONCAT62(uStack_120,uStack_122);
  *(undefined8 *)(this + 0x76) = uStack_11a;
  *(undefined8 *)(this + 0x60) = local_130;
  *(ulong *)(this + 0x68) = CONCAT26(uStack_122,uStack_128);
  for (plVar7 = local_160; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    piVar8 = (int *)(*plVar7 + -0x10);
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
  if (local_160 != (long *)0x0) {
    operator_delete(local_160);
  }
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_168 + 8))();
    }
  }
  piVar8 = (int *)(lStack_170 + -0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar8);
    }
  }
  piVar8 = (int *)(local_178 + -0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar8);
    }
  }
  if (local_180 != (long *)0x0) {
    LOCK();
    plVar7 = local_180 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_180 + 8))();
    }
  }
  return;
}


