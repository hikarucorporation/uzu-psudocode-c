// Function : fromXml
// Namespace: juce:ValueTree
// Entry    : 004c4c50
// Prototype: ValueTree * fromXml(ValueTree * this, long param_1, undefined8 param_2, undefined8 param_3, ulong param_4, ulong param_5)
// Body     : 004c4c50 - 004c561b


/* juce::ValueTree::fromXml(juce::XmlElement const&) */

ValueTree * __thiscall
juce::ValueTree::fromXml
          (ValueTree *this,long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
          ulong param_5)

{
  byte bVar1;
  char cVar2;
  SharedObject *this_00;
  long lVar3;
  bool bVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  void *__dest;
  sbyte sVar12;
  SharedObject *pSVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar17;
  undefined8 extraout_RDX_05;
  uint uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  int *piVar24;
  long lVar25;
  size_t sVar26;
  bool bVar27;
  SharedObject *local_98;
  ulong auStack_90 [5];
  SharedObject *local_68;
  undefined1 *local_60;
  ValueTree *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  long local_38;
  
  if (**(char **)(param_1 + 0x18) == '\0') {
    *(undefined8 *)(this + 0x1c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    Identifier::Identifier((Identifier *)&local_98,(long *)(param_1 + 0x18));
                    /* try { // try from 004c4c7f to 004c4c88 has its CatchHandler @ 004c5621 */
    puVar7 = operator_new(0x50);
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR__SharedObject_00713ff0;
    puVar7[2] = local_98;
    pSVar13 = local_98 + -0x10;
    if (pSVar13 != (SharedObject *)&emptyString) {
      LOCK();
      *(int *)pSVar13 = *(int *)pSVar13 + 1;
      UNLOCK();
    }
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[9] = 0;
    *(undefined8 **)this = puVar7;
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    pSVar13 = local_98 + -0x10;
    uVar17 = extraout_RDX;
    if (pSVar13 != (SharedObject *)&emptyString) {
      LOCK();
      iVar19 = *(int *)pSVar13;
      *(int *)pSVar13 = *(int *)pSVar13 + -1;
      UNLOCK();
      if (iVar19 == 0) {
        operator_delete__(pSVar13);
        uVar17 = extraout_RDX_00;
      }
    }
    this_00 = *(SharedObject **)this;
    pSVar13 = this_00 + 0x18;
    local_68 = pSVar13;
    if (0 < *(int *)(this_00 + 0x24)) {
      lVar20 = 0x10;
      lVar25 = 0;
      do {
        lVar3 = *(long *)local_68;
                    /* try { // try from 004c4d57 to 004c4d59 has its CatchHandler @ 004c5703 */
        (**(code **)(*(long *)(lVar3 + -8 + lVar20) + 0x58))(lVar20 + lVar3);
        piVar24 = (int *)(*(long *)(lVar3 + -0x10 + lVar20) + -0x10);
        uVar17 = extraout_RDX_01;
        if (piVar24 != &emptyString) {
          LOCK();
          iVar19 = *piVar24;
          *piVar24 = *piVar24 + -1;
          UNLOCK();
          if (iVar19 == 0) {
            operator_delete__(piVar24);
            uVar17 = extraout_RDX_02;
          }
        }
        lVar25 = lVar25 + 1;
        lVar20 = lVar20 + 0x18;
      } while (lVar25 < *(int *)(this_00 + 0x24));
    }
    *(undefined4 *)(this_00 + 0x24) = 0;
    plVar22 = *(long **)(param_1 + 0x10);
    local_58 = this;
    local_38 = param_1;
joined_r0x004c4d9b:
    if (plVar22 != (long *)0x0) {
LAB_004c4df0:
      iVar19 = 0;
      pcVar9 = "base64:";
      do {
        if (*pcVar9 < '\0') {
          do {
            pbVar11 = (byte *)(pcVar9 + 1);
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar9;
          } while ((*pbVar11 & 0xc0) == 0x80);
        }
        else {
          pcVar8 = pcVar9 + 1;
          if (*pcVar9 == '\0') goto LAB_004c4e40;
        }
        iVar19 = iVar19 + 1;
        pcVar9 = pcVar8;
      } while( true );
    }
LAB_004c5568:
    this = local_58;
    plVar22 = *(long **)(local_38 + 8);
    if (plVar22 != (long *)0x0) {
      do {
                    /* try { // try from 004c55a0 to 004c55aa has its CatchHandler @ 004c56ee */
        fromXml((ValueTree *)&local_98,(long)plVar22,uVar17,pSVar13,param_4,param_5);
        if (this_00 != (SharedObject *)0x0) {
                    /* try { // try from 004c55b5 to 004c55c3 has its CatchHandler @ 004c56d7 */
          pSVar13 = (SharedObject *)0x0;
          SharedObject::addChild(this_00,local_98,0xffffffff,(UndoManager *)0x0);
        }
        ~ValueTree((ValueTree *)&local_98);
        plVar22 = (long *)*plVar22;
        uVar17 = extraout_RDX_05;
      } while (plVar22 != (long *)0x0);
    }
  }
  return this;
LAB_004c4e40:
  uVar6 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)plVar22[1],&DAT_005e5e25,iVar19,pcVar9,param_4,(uint)param_5);
  if (uVar6 == 0) {
    local_98 = (SharedObject *)0x0;
    auStack_90[0] = 0;
    pbVar11 = (byte *)plVar22[2];
    pbVar16 = pbVar11;
    while( true ) {
      pbVar14 = pbVar16;
      bVar1 = *pbVar14;
      uVar6 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) == 0) {
          uVar6 = uVar6 & 0x7f;
        }
        else {
          uVar6 = uVar6 & 0x10 ^ 0x1f;
          if ((bVar1 & 0x20) == 0) {
            uVar6 = 0x3f;
          }
          uVar6 = uVar6 & bVar1;
          if (((((pbVar14[1] & 0xffffffc0) == 0x80) &&
               (uVar6 = pbVar14[1] & 0x3f | uVar6 << 6, (bVar1 & 0x20) != 0)) &&
              ((pbVar14[2] & 0xffffffc0) == 0x80)) &&
             ((uVar6 = pbVar14[2] & 0x3f | uVar6 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar14[3] & 0xffffffc0) == 0x80)))) {
            uVar6 = uVar6 << 6 | pbVar14[3] & 0x3f;
          }
        }
      }
      if ((uVar6 == 0) || (uVar6 == 0x2e)) break;
      pbVar16 = pbVar14 + 1;
      if ((((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) &&
         (pbVar16 = pbVar14 + 2, (bVar1 & 0x20) != 0)) {
        pbVar16 = pbVar14 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
    if (bVar1 != 0) {
      pcVar9 = "";
      if ((pbVar11 != (byte *)0x0) && (pcVar9 = "", *pbVar11 != 0)) {
        sVar26 = (long)pbVar14 - (long)pbVar11;
        uVar21 = sVar26 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004c5013 to 004c5017 has its CatchHandler @ 004c56c8 */
        puVar10 = operator_new__(uVar21 + 0x17);
        LOCK();
        *puVar10 = 0;
        UNLOCK();
        *(ulong *)(puVar10 + 2) = uVar21;
        pcVar9 = (char *)(puVar10 + 4);
        memcpy(pcVar9,pbVar11,sVar26);
        *(undefined1 *)((long)puVar10 + sVar26 + 0x10) = 0;
      }
      lVar20 = strtol(pcVar9,(char **)0x0,10);
      piVar24 = (int *)(pcVar9 + -0x10);
      if (piVar24 != &emptyString) {
        LOCK();
        iVar19 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar19 == 0) {
          operator_delete__(piVar24);
        }
      }
                    /* try { // try from 004c507a to 004c5088 has its CatchHandler @ 004c56c8 */
      MemoryBlock::setSize((MemoryBlock *)&local_98,(long)(int)lVar20,1);
      pbVar11 = pbVar14 + 1;
      bVar1 = *pbVar14;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar11 = pbVar14 + 2;
        }
        else {
          pbVar11 = pbVar14 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      param_4 = 0;
      do {
        param_5 = param_4 >> 3;
        do {
          pbVar16 = pbVar11 + 1;
          bVar1 = *pbVar11;
          uVar6 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0x40) == 0) {
              uVar6 = bVar1 & 0x7f;
            }
            else {
              if ((bVar1 & 0x20) == 0) {
                uVar6 = 0x3f;
                lVar20 = 0;
                bVar27 = false;
                bVar4 = false;
              }
              else {
                bVar27 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar6 = 0x1f;
                  lVar20 = 1;
                  bVar4 = false;
                }
                else {
                  uVar6 = 0xf;
                  lVar20 = 2;
                  bVar4 = true;
                }
              }
              uVar6 = bVar1 & uVar6;
              if ((pbVar11[1] & 0xc0) == 0x80) {
                pbVar14 = pbVar11 + lVar20 + 2;
                uVar6 = pbVar11[1] & 0x3f | uVar6 << 6;
                pbVar16 = pbVar14;
                if (bVar27) {
                  uVar18 = (uint)pbVar11[2];
                  pbVar16 = pbVar11 + 2;
                  if ((uVar18 & 0xffffffc0) == 0x80) {
                    uVar6 = uVar18 & 0x3f | uVar6 << 6;
                    pbVar16 = pbVar14;
                    if (bVar4) {
                      uVar18 = (uint)pbVar11[3];
                      pbVar16 = pbVar11 + 3;
                      if ((uVar18 & 0xffffffc0) == 0x80) {
                        uVar6 = uVar6 << 6 | uVar18 & 0x3f;
                        pbVar16 = pbVar14;
                      }
                    }
                  }
                }
              }
            }
          }
          pbVar11 = pbVar16;
          if (uVar6 == 0) {
            pbVar11 = (byte *)plVar22[1];
            bVar1 = *pbVar11;
            puVar10 = (undefined4 *)&DAT_0061ac58;
            if (bVar1 != 0) {
              pbVar16 = pbVar11 + 1;
              if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                if ((bVar1 & 0x20) == 0) {
                  pbVar16 = pbVar11 + 2;
                }
                else {
                  pbVar16 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
                }
              }
              bVar1 = *pbVar16;
              puVar10 = (undefined4 *)&DAT_0061ac58;
              if (bVar1 != 0) {
                pbVar11 = pbVar16 + 1;
                if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                  if ((bVar1 & 0x20) == 0) {
                    pbVar11 = pbVar16 + 2;
                  }
                  else {
                    pbVar11 = pbVar16 + (4 - (ulong)((bVar1 & 0x10) == 0));
                  }
                }
                bVar1 = *pbVar11;
                puVar10 = (undefined4 *)&DAT_0061ac58;
                if (bVar1 != 0) {
                  pbVar16 = pbVar11 + 1;
                  if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                    if ((bVar1 & 0x20) == 0) {
                      pbVar16 = pbVar11 + 2;
                    }
                    else {
                      pbVar16 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
                    }
                  }
                  bVar1 = *pbVar16;
                  puVar10 = (undefined4 *)&DAT_0061ac58;
                  if (bVar1 != 0) {
                    pbVar11 = pbVar16 + 1;
                    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                      if ((bVar1 & 0x20) == 0) {
                        pbVar11 = pbVar16 + 2;
                      }
                      else {
                        pbVar11 = pbVar16 + (4 - (ulong)((bVar1 & 0x10) == 0));
                      }
                    }
                    bVar1 = *pbVar11;
                    puVar10 = (undefined4 *)&DAT_0061ac58;
                    if (bVar1 != 0) {
                      pbVar16 = pbVar11 + 1;
                      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                        if ((bVar1 & 0x20) == 0) {
                          pbVar16 = pbVar11 + 2;
                        }
                        else {
                          pbVar16 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
                        }
                      }
                      bVar1 = *pbVar16;
                      puVar10 = (undefined4 *)&DAT_0061ac58;
                      if (bVar1 != 0) {
                        pbVar11 = pbVar16 + 1;
                        if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                          if ((bVar1 & 0x20) == 0) {
                            pbVar11 = pbVar16 + 2;
                          }
                          else {
                            pbVar11 = pbVar16 + (4 - (ulong)((bVar1 & 0x10) == 0));
                          }
                        }
                        bVar1 = *pbVar11;
                        puVar10 = (undefined4 *)&DAT_0061ac58;
                        if (bVar1 != 0) {
                          pbVar16 = pbVar11 + 1;
                          if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                            if ((bVar1 & 0x20) == 0) {
                              pbVar16 = pbVar11 + 2;
                            }
                            else {
                              pbVar16 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
                            }
                          }
                    /* try { // try from 004c5438 to 004c543c has its CatchHandler @ 004c561c */
                          puVar10 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                              (pbVar16);
                        }
                      }
                    }
                  }
                }
              }
            }
                    /* try { // try from 004c5445 to 004c5453 has its CatchHandler @ 004c5694 */
            local_50 = puVar10;
            Identifier::Identifier((Identifier *)&local_60,(long *)&local_50);
            local_48 = var::Instance::attributesBinary;
                    /* try { // try from 004c5460 to 004c5469 has its CatchHandler @ 004c5668 */
            puVar7 = operator_new(0x10);
            uVar21 = auStack_90[0];
            *puVar7 = 0;
            puVar7[1] = auStack_90[0];
            if (auStack_90[0] != 0) {
              __dest = malloc(auStack_90[0]);
              if (__dest == (void *)0x0) {
                puVar7 = (undefined8 *)__cxa_allocate_exception(8);
                *puVar7 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 004c5606 to 004c561b has its CatchHandler @ 004c565b */
                    /* WARNING: Subroutine does not return */
                __cxa_throw(puVar7,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
              }
              *puVar7 = __dest;
              memcpy(__dest,local_98,uVar21);
            }
            puVar5 = local_60;
            local_60 = &DAT_0061ac58;
            local_48 = &var::Instance::attributesVoid;
            iVar19 = *(int *)(this_00 + 0x24);
            local_40 = puVar7;
            if (*(int *)(this_00 + 0x20) <= iVar19) {
              ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::
              setAllocatedSize((ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>
                                *)local_68,
                               iVar19 + ((iVar19 - (iVar19 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8
                              );
              iVar19 = *(int *)(this_00 + 0x24);
            }
            *(int *)(this_00 + 0x24) = iVar19 + 1;
            pSVar13 = *(SharedObject **)(this_00 + 0x18);
            lVar20 = (long)iVar19;
            *(undefined1 **)(pSVar13 + lVar20 * 0x18) = puVar5;
            *(undefined1 **)(pSVar13 + lVar20 * 0x18 + 8) = var::Instance::attributesBinary;
            *(undefined8 **)(pSVar13 + lVar20 * 0x18 + 0x10) = puVar7;
                    /* try { // try from 004c5523 to 004c552a has its CatchHandler @ 004c56c0 */
            (**(code **)(local_48 + 0x58))(&local_40);
            piVar24 = puVar10 + -4;
            if (piVar24 != &emptyString) {
              LOCK();
              iVar19 = *piVar24;
              *piVar24 = *piVar24 + -1;
              UNLOCK();
              if (iVar19 == 0) {
                operator_delete__(piVar24);
              }
            }
            free(local_98);
            plVar22 = (long *)*plVar22;
            uVar17 = extraout_RDX_04;
            goto joined_r0x004c4d9b;
          }
        } while (0x4f < uVar6 - 0x2b);
        if (param_5 < auStack_90[0]) {
          cVar2 = base64DecodingTable[uVar6 - 0x2b];
          uVar6 = (uint)param_4 & 6;
          lVar20 = 8 - (ulong)uVar6;
          sVar12 = (sbyte)uVar6;
          local_98[param_5] =
               (SharedObject)
               ((~(-1 << sVar12) | -0x40 << sVar12) & (byte)local_98[param_5] | cVar2 << sVar12);
          if ((2 < (ulong)uVar6) && (param_5 + 1 < auStack_90[0])) {
            bVar1 = (byte)lVar20;
            uVar6 = 0xffffffc0 >> (bVar1 & 0x1f);
            uVar23 = 6 - lVar20;
            iVar19 = (int)cVar2 >> (bVar1 & 0x1f);
            uVar21 = param_5 + 2;
            do {
              uVar15 = 8;
              if (uVar23 < 8) {
                uVar15 = uVar23;
              }
              local_98[uVar21 - 1] =
                   (SharedObject)((byte)local_98[uVar21 - 1] & (byte)uVar6 | (byte)iVar19);
              iVar19 = iVar19 >> ((byte)uVar15 & 0x1f);
              uVar6 = uVar6 >> ((byte)uVar15 & 0x1f);
              uVar23 = uVar23 - uVar15;
            } while ((uVar23 != 0) && (bVar27 = uVar21 < auStack_90[0], uVar21 = uVar21 + 1, bVar27)
                    );
          }
        }
        param_4 = param_4 + 6;
      } while( true );
    }
  }
  sVar26 = plVar22[2];
  piVar24 = (int *)(sVar26 - 0x10);
  if (piVar24 != &emptyString) {
    LOCK();
    *piVar24 = *piVar24 + 1;
    UNLOCK();
  }
  lVar20 = plVar22[1];
  piVar24 = (int *)(lVar20 + -0x10);
  if (piVar24 != &emptyString) {
    LOCK();
    *piVar24 = *piVar24 + 1;
    UNLOCK();
  }
  local_98 = (SharedObject *)&var::Instance::attributesVoid;
  iVar19 = *(int *)(this_00 + 0x24);
  auStack_90[0] = sVar26;
  if (*(int *)(this_00 + 0x20) <= iVar19) {
    ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::setAllocatedSize
              ((ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> *)local_68,
               iVar19 + ((iVar19 - (iVar19 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8);
    iVar19 = *(int *)(this_00 + 0x24);
  }
  *(int *)(this_00 + 0x24) = iVar19 + 1;
  pSVar13 = *(SharedObject **)(this_00 + 0x18);
  lVar25 = (long)iVar19;
  *(long *)(pSVar13 + lVar25 * 0x18) = lVar20;
  *(undefined1 **)(pSVar13 + lVar25 * 0x18 + 8) = &var::Instance::attributesString;
  *(size_t *)(pSVar13 + lVar25 * 0x18 + 0x10) = sVar26;
                    /* try { // try from 004c4dd4 to 004c4ddb has its CatchHandler @ 004c56e6 */
  (**(code **)(local_98 + 0x58))(auStack_90);
  plVar22 = (long *)*plVar22;
  uVar17 = extraout_RDX_03;
  if (plVar22 == (long *)0x0) goto LAB_004c5568;
  goto LAB_004c4df0;
}


