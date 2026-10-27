// Function : readFromStream
// Namespace: juce:ValueTree
// Entry    : 004c5a40
// Prototype: undefined readFromStream(ValueTree * this, long * param_1)
// Body     : 004c5a40 - 004c6096


/* juce::ValueTree::readFromStream(juce::InputStream&) */

void __thiscall juce::ValueTree::readFromStream(ValueTree *this,long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  char *local_b8;
  ValueTree *local_b0;
  long local_a8;
  char *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  undefined1 local_60 [40];
  ValueTree *local_38;
  
  (**(code **)(*param_1 + 0x98))(&local_b8);
  if (*local_b8 == '\0') {
    *(undefined8 *)(this + 0x1c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    piVar6 = (int *)(local_b8 + -0x10);
    if (piVar6 == &emptyString) {
      return;
    }
    goto LAB_004c6073;
  }
                    /* try { // try from 004c5a70 to 004c5a7c has its CatchHandler @ 004c60d8 */
  Identifier::Identifier((Identifier *)&local_68,(long *)&local_b8);
                    /* try { // try from 004c5a7d to 004c5a86 has its CatchHandler @ 004c60a1 */
  local_98 = operator_new(0x50);
  *(undefined4 *)(local_98 + 1) = 0;
  *local_98 = &PTR__SharedObject_00713ff0;
  local_98[2] = local_68;
  piVar6 = (int *)(local_68 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[9] = 0;
  LOCK();
  *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + 1;
  UNLOCK();
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  piVar6 = (int *)(local_68 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar6);
    }
  }
                    /* try { // try from 004c5b0b to 004c5b13 has its CatchHandler @ 004c609c */
  iVar3 = (**(code **)(*param_1 + 0x88))(param_1);
  puVar10 = local_98;
  if (iVar3 < 0) {
    *(undefined8 **)this = local_98;
    local_98 = (undefined8 *)0x0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    if ((puVar10 != (undefined8 *)0x0) && (uVar9 = *(uint *)((long)puVar10 + 0x44), 0 < (int)uVar9))
    {
      lVar1 = puVar10[7];
      uVar11 = uVar9;
      uVar5 = 0;
      do {
        while( true ) {
          if (*(undefined8 ***)(lVar1 + (long)(int)uVar5 * 8) == &local_98) {
            if (uVar5 < uVar9) {
              pvVar4 = (void *)(lVar1 + (long)(int)uVar5 * 8);
              memmove(pvVar4,(void *)((long)pvVar4 + 8),(long)(int)(uVar9 + ~uVar5) << 3);
              iVar3 = *(int *)((long)puVar10 + 0x44);
              uVar9 = iVar3 - 1;
              *(uint *)((long)puVar10 + 0x44) = uVar9;
              iVar7 = iVar3 * 2 + -2;
              iVar3 = 0;
              if (-1 < iVar7) {
                iVar3 = iVar7;
              }
              if (iVar3 < *(int *)(puVar10 + 8)) {
                uVar11 = 8;
                if (8 < (int)uVar9) {
                  uVar11 = uVar9;
                }
                if ((int)uVar11 < *(int *)(puVar10 + 8)) {
                  pvVar4 = realloc((void *)puVar10[7],(ulong)uVar11 << 3);
                  puVar10[7] = pvVar4;
                  *(uint *)(puVar10 + 8) = uVar11;
                }
              }
            }
            goto LAB_004c6055;
          }
          uVar8 = (int)(uVar5 + uVar11) / 2;
          if (uVar8 == uVar5) goto LAB_004c6055;
          if (*(undefined8 ***)(lVar1 + (long)(int)uVar8 * 8) <= &local_98) break;
          uVar11 = uVar8;
          if ((int)uVar8 <= (int)uVar5) goto LAB_004c6055;
        }
        uVar5 = uVar8;
      } while ((int)uVar8 < (int)uVar11);
    }
  }
  else {
    local_b0 = this;
    if (iVar3 != 0) {
      do {
                    /* try { // try from 004c5b4c to 004c5b57 has its CatchHandler @ 004c614b */
        (**(code **)(*param_1 + 0x98))(&local_a0,param_1);
        puVar10 = local_98;
        if (*local_a0 != '\0') {
                    /* try { // try from 004c5b67 to 004c5b73 has its CatchHandler @ 004c6126 */
          Identifier::Identifier((Identifier *)&local_a8,(long *)&local_a0);
                    /* try { // try from 004c5b74 to 004c5b7e has its CatchHandler @ 004c6101 */
          var::readFromStream((var *)&local_68,param_1);
                    /* try { // try from 004c5b83 to 004c5b92 has its CatchHandler @ 004c60e7 */
          NamedValueSet::set((NamedValueSet *)(puVar10 + 3),&local_a8,&local_68);
                    /* try { // try from 004c5b98 to 004c5b9f has its CatchHandler @ 004c60df */
          (**(code **)(local_68 + 0x58))(local_60);
          piVar6 = (int *)(local_a8 + -0x10);
          if (piVar6 != &emptyString) {
            LOCK();
            iVar7 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar6);
            }
          }
        }
        piVar6 = (int *)(local_a0 + -0x10);
        if (piVar6 != &emptyString) {
          LOCK();
          iVar7 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            operator_delete__(piVar6);
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
                    /* try { // try from 004c5bf0 to 004c5bf8 has its CatchHandler @ 004c6097 */
    iVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    puVar10 = local_98;
    if ((int)*(uint *)(local_98 + 6) < iVar3) {
      uVar9 = iVar3 / 2 + iVar3 + 8U & 0xfffffff8;
      if (*(uint *)(local_98 + 6) != uVar9) {
        if ((int)uVar9 < 1) {
          free((void *)local_98[5]);
          puVar10[5] = 0;
        }
        else {
          pvVar4 = realloc((void *)local_98[5],(ulong)uVar9 << 3);
          puVar10[5] = pvVar4;
        }
      }
      *(uint *)(puVar10 + 6) = uVar9;
    }
    if (iVar3 < 1) {
      puVar10 = local_98;
    }
    else {
      local_38 = local_b0 + 8;
      do {
                    /* try { // try from 004c5d88 to 004c5d92 has its CatchHandler @ 004c60dd */
        readFromStream((ValueTree *)&local_68,param_1);
        lVar1 = local_68;
        puVar2 = local_98;
        if (local_68 == 0) {
          *(undefined8 **)local_b0 = local_98;
          local_98 = (undefined8 *)0x0;
          *(undefined8 *)(local_38 + 0x10) = 0;
          *(undefined8 *)(local_38 + 0x18) = 0;
          *(undefined8 *)local_38 = 0;
          *(undefined8 *)(local_38 + 8) = 0;
          *(undefined4 *)(local_38 + 0x20) = 0;
          if ((puVar2 == (undefined8 *)0x0) ||
             (uVar9 = *(uint *)((long)puVar2 + 0x44), (int)uVar9 < 1)) goto LAB_004c604b;
          lVar1 = puVar2[7];
          uVar11 = uVar9;
          uVar5 = 0;
          goto LAB_004c5eda;
        }
        iVar7 = *(int *)((long)local_98 + 0x34);
        if ((int)*(uint *)(local_98 + 6) <= iVar7) {
          uVar9 = iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
          if (*(uint *)(local_98 + 6) != uVar9) {
            if ((int)uVar9 < 1) {
              free((void *)local_98[5]);
              puVar2[5] = 0;
            }
            else {
              pvVar4 = realloc((void *)local_98[5],(ulong)uVar9 << 3);
              puVar2[5] = pvVar4;
            }
          }
          *(uint *)(puVar2 + 6) = uVar9;
          iVar7 = *(int *)((long)puVar2 + 0x34);
        }
        puVar10 = local_98;
        *(int *)((long)puVar2 + 0x34) = iVar7 + 1;
        *(long *)(puVar2[5] + (long)iVar7 * 8) = lVar1;
        LOCK();
        piVar6 = (int *)(lVar1 + 8);
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        *(undefined8 **)(local_68 + 0x48) = local_98;
        ~ValueTree((ValueTree *)&local_68);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined8 **)local_b0 = puVar10;
    local_98 = (undefined8 *)0x0;
    *(undefined8 *)(local_b0 + 0x18) = 0;
    *(undefined8 *)(local_b0 + 0x20) = 0;
    *(undefined8 *)(local_b0 + 8) = 0;
    *(undefined8 *)(local_b0 + 0x10) = 0;
    *(undefined4 *)(local_b0 + 0x28) = 0;
    if ((puVar10 != (undefined8 *)0x0) && (uVar9 = *(uint *)((long)puVar10 + 0x44), 0 < (int)uVar9))
    {
      lVar1 = puVar10[7];
      uVar11 = uVar9;
      uVar5 = 0;
      do {
        while( true ) {
          if (*(undefined8 ***)(lVar1 + (long)(int)uVar5 * 8) == &local_98) {
            if (uVar5 < uVar9) {
              pvVar4 = (void *)(lVar1 + (long)(int)uVar5 * 8);
              memmove(pvVar4,(void *)((long)pvVar4 + 8),(long)(int)(uVar9 + ~uVar5) << 3);
              iVar3 = *(int *)((long)puVar10 + 0x44);
              uVar9 = iVar3 - 1;
              *(uint *)((long)puVar10 + 0x44) = uVar9;
              iVar7 = iVar3 * 2 + -2;
              iVar3 = 0;
              if (-1 < iVar7) {
                iVar3 = iVar7;
              }
              if (iVar3 < *(int *)(puVar10 + 8)) {
                uVar11 = 8;
                if (8 < (int)uVar9) {
                  uVar11 = uVar9;
                }
                if ((int)uVar11 < *(int *)(puVar10 + 8)) {
                  pvVar4 = realloc((void *)puVar10[7],(ulong)uVar11 << 3);
                  puVar10[7] = pvVar4;
                  *(uint *)(puVar10 + 8) = uVar11;
                }
              }
            }
            goto LAB_004c6055;
          }
          uVar8 = (int)(uVar5 + uVar11) / 2;
          if (uVar8 == uVar5) goto LAB_004c6055;
          if (*(undefined8 ***)(lVar1 + (long)(int)uVar8 * 8) <= &local_98) break;
          uVar11 = uVar8;
          if ((int)uVar8 <= (int)uVar5) goto LAB_004c6055;
        }
        uVar5 = uVar8;
      } while ((int)uVar8 < (int)uVar11);
    }
  }
  goto LAB_004c6055;
  while (uVar5 = uVar8, (int)uVar8 < (int)uVar11) {
LAB_004c5eda:
    if (*(undefined8 ***)(lVar1 + (long)(int)uVar5 * 8) == &local_98) {
      if (uVar5 < uVar9) {
        pvVar4 = (void *)(lVar1 + (long)(int)uVar5 * 8);
        memmove(pvVar4,(void *)((long)pvVar4 + 8),(long)(int)(uVar9 + ~uVar5) << 3);
        iVar3 = *(int *)((long)puVar2 + 0x44);
        uVar9 = iVar3 - 1;
        *(uint *)((long)puVar2 + 0x44) = uVar9;
        iVar7 = iVar3 * 2 + -2;
        iVar3 = 0;
        if (-1 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar3 < *(int *)(puVar2 + 8)) {
          uVar11 = 8;
          if (8 < (int)uVar9) {
            uVar11 = uVar9;
          }
          if ((int)uVar11 < *(int *)(puVar2 + 8)) {
            pvVar4 = realloc((void *)puVar2[7],(ulong)uVar11 << 3);
            puVar2[7] = pvVar4;
            *(uint *)(puVar2 + 8) = uVar11;
          }
        }
      }
      break;
    }
    uVar8 = (int)(uVar5 + uVar11) / 2;
    if (uVar8 == uVar5) break;
    if (&local_98 < *(undefined8 ***)(lVar1 + (long)(int)uVar8 * 8)) {
      uVar11 = uVar8;
      if ((int)uVar8 <= (int)uVar5) break;
      goto LAB_004c5eda;
    }
  }
LAB_004c604b:
  ~ValueTree((ValueTree *)&local_68);
LAB_004c6055:
  ~ValueTree((ValueTree *)&local_98);
  piVar6 = (int *)(local_b8 + -0x10);
  if (piVar6 == &emptyString) {
    return;
  }
LAB_004c6073:
  LOCK();
  iVar3 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar3 == 0) {
    operator_delete__(piVar6);
  }
  return;
}


