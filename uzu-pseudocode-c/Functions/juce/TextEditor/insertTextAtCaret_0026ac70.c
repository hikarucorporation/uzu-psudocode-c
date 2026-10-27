// Function : insertTextAtCaret
// Namespace: juce:TextEditor
// Entry    : 0026ac70
// Prototype: undefined insertTextAtCaret(undefined8 param_1_00, float param_2, TextEditor * this, undefined8 * param_4)
// Body     : 0026ac70 - 0026b1ad


/* juce::TextEditor::insertTextAtCaret(juce::String const&) */

void __thiscall
juce::TextEditor::insertTextAtCaret
          (undefined8 param_1_00,float param_2,TextEditor *this,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  TextEditor *pTVar11;
  UndoManager *pUVar12;
  undefined8 extraout_RDX;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  String *pSVar16;
  int *piVar17;
  byte *pbVar18;
  uint *puVar19;
  undefined8 *******in_R9;
  long lVar20;
  byte *pbVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa;
  char *local_68;
  byte *local_60;
  char *local_58;
  byte *local_50;
  char *local_48;
  long local_40;
  undefined8 local_38;
  
  plVar3 = *(long **)(this + 0x2a8);
  if (plVar3 == (long *)0x0) {
    local_60 = (byte *)*param_4;
    pbVar18 = local_60 + -0x10;
    if (pbVar18 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar18 = *(int *)pbVar18 + 1;
      UNLOCK();
    }
  }
  else {
    (**(code **)(*plVar3 + 0x10))(&local_60,plVar3,this);
  }
  if (this[0x1ca] != (TextEditor)0x0) {
                    /* try { // try from 0026acc6 to 0026ad31 has its CatchHandler @ 0026b1ae */
    uVar22 = juce::String::replace
                       ((String *)&local_68,(long *)&local_60,&DAT_005e50db,&DAT_00658931,
                        (byte *)0x0,in_R9);
LAB_0026b09e:
    iVar5 = *(int *)(this + 0x270);
    iVar8 = 0;
    pcVar10 = local_68;
    do {
      cVar2 = *pcVar10;
      if (cVar2 < '\0') {
        do {
          pbVar18 = (byte *)(pcVar10 + 1);
          pcVar10 = pcVar10 + 1;
        } while ((*pbVar18 & 0xc0) == 0x80);
      }
      else {
        pcVar10 = pcVar10 + 1;
        if (cVar2 == '\0') {
          uVar13 = iVar8 + iVar5;
          pUVar12 = (UndoManager *)0x0;
          if (this[0x1c8] == (TextEditor)0x0) {
            pUVar12 = (UndoManager *)(this + 0x1d8);
          }
                    /* try { // try from 0026b109 to 0026b157 has its CatchHandler @ 0026b1b3 */
          remove(uVar22,param_2,this,*(ulong *)(this + 0x270),pUVar12,
                 (uVar13 - 1) + (uint)(*local_68 == '\0'),
                 (vector<long_long,std::allocator<long_long>> *)0x0,in_R9);
          uVar7 = Component::findColour((Component *)(this + 8),0x1000201,'\0');
          pTVar11 = this + 0x288;
          pUVar12 = (UndoManager *)0x0;
          if (this[0x1c8] == (TextEditor)0x0) {
            pUVar12 = (UndoManager *)(this + 0x1d8);
          }
          pSVar16 = (String *)&local_68;
          puVar19 = (uint *)(uVar7 & 0xffffffff);
          insert(extraout_XMM0_Qa,param_2,this,pSVar16,iVar5,(uint *)pTVar11,(int)uVar7,pUVar12,
                 uVar13);
          textChanged(this,pSVar16,extraout_RDX,(long)pTVar11,puVar19,(ulong)pUVar12);
          piVar17 = (int *)(local_68 + -0x10);
          if (piVar17 != &emptyString) {
            LOCK();
            iVar5 = *piVar17;
            *piVar17 = *piVar17 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              operator_delete__(piVar17);
            }
          }
          pbVar18 = local_60 + -0x10;
          if (pbVar18 != (byte *)&emptyString) {
            LOCK();
            iVar5 = *(int *)pbVar18;
            *(int *)pbVar18 = *(int *)pbVar18 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              operator_delete__(pbVar18);
            }
          }
          return;
        }
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  local_58 = "";
  local_50 = local_60;
  local_48 = (char *)0x0;
  local_40 = *(long *)(local_60 + -8);
  local_38 = 0;
  uVar7 = local_40 + 4U & 0xfffffffffffffffc;
  puVar6 = operator_new__(uVar7 + 0x17);
  LOCK();
  *puVar6 = 0;
  UNLOCK();
  *(ulong *)(puVar6 + 2) = uVar7;
  local_58 = (char *)(puVar6 + 4);
  *(undefined1 *)(puVar6 + 4) = 0;
  local_48 = local_58;
  do {
    pbVar18 = local_50 + 1;
    bVar1 = *local_50;
    uVar13 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar15 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar13 = uVar15 & 0x7f;
      }
      else {
        uVar13 = uVar15 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar13 = 0x3f;
        }
        uVar13 = uVar13 & uVar15;
        if ((*pbVar18 & 0xffffffc0) == 0x80) {
          pbVar9 = local_50 + 2;
          uVar13 = *pbVar18 & 0x3f | uVar13 << 6;
          pbVar18 = pbVar9;
          if (((bVar1 & 0x20) != 0) && ((*pbVar9 & 0xffffffc0) == 0x80)) {
            pbVar18 = local_50 + 3;
            uVar13 = *pbVar9 & 0x3f | uVar13 << 6;
            if ((byte)((byte)((uVar15 & 0x10) >> 4) & (byte)((uVar15 & 0x20) >> 5)) != 0) {
              if ((*pbVar18 & 0xffffffc0) == 0x80) {
                uVar13 = uVar13 << 6 | *pbVar18 & 0x3f;
                pbVar18 = local_50 + 4;
              }
            }
          }
        }
        else {
        }
      }
    }
    local_50 = pbVar18;
    iVar8 = 0;
    uVar15 = 0xd;
    iVar5 = 1;
    pbVar18 = &DAT_005e50db;
    while( true ) {
      pbVar9 = pbVar18 + 1;
      if (-1 < (char)uVar15) break;
      if ((uVar15 & 0x40) == 0) {
        uVar15 = uVar15 & 0x7f;
      }
      else {
        if ((uVar15 & 0x20) == 0) {
          uVar14 = 0x3f;
          lVar20 = 0;
          in_R9 = (undefined8 *******)0x0;
          bVar4 = false;
        }
        else {
          in_R9 = (undefined8 *******)CONCAT71((int7)((ulong)in_R9 >> 8),1);
          if ((uVar15 & 0x10) == 0) {
            uVar14 = 0x1f;
            lVar20 = 1;
            bVar4 = false;
          }
          else {
            uVar14 = 0xf;
            lVar20 = 2;
            bVar4 = true;
          }
        }
        uVar15 = uVar15 & uVar14;
        if ((pbVar18[1] & 0xc0) != 0x80) break;
        pbVar21 = pbVar18 + lVar20 + 2;
        uVar15 = pbVar18[1] & 0x3f | uVar15 << 6;
        pbVar9 = pbVar21;
        if ((char)in_R9 != '\0') {
          bVar1 = pbVar18[2];
          pbVar9 = pbVar18 + 2;
          if ((bVar1 & 0xc0) == 0x80) {
            uVar15 = bVar1 & 0x3f | uVar15 << 6;
            pbVar9 = pbVar21;
            if (bVar4) {
              uVar14 = (uint)pbVar18[3];
              pbVar9 = pbVar18 + 3;
              if ((uVar14 & 0xffffffc0) != 0x80) break;
              uVar15 = uVar15 << 6 | uVar14 & 0x3f;
              pbVar9 = pbVar21;
            }
          }
        }
      }
      pbVar18 = pbVar9;
      if (uVar15 == uVar13) goto LAB_0026af70;
LAB_0026af45:
      iVar8 = iVar8 + 1;
      uVar15 = (uint)*pbVar18;
      iVar5 = iVar5 + 1;
      if (*pbVar18 == 0) goto LAB_0026b080;
    }
    pbVar18 = pbVar9;
    if (uVar15 != uVar13) goto LAB_0026af45;
LAB_0026af70:
    pbVar18 = &DAT_005e3cd7;
    if (iVar8 != 0) {
      pbVar18 = &DAT_005e3cd7;
      do {
        bVar1 = *pbVar18;
        pbVar9 = pbVar18 + 1;
        if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
          if ((bVar1 & 0x20) == 0) {
            pbVar9 = pbVar18 + 2;
          }
          else {
            pbVar9 = pbVar18 + (4 - (ulong)((bVar1 & 0x10) == 0));
          }
        }
        pbVar18 = pbVar9;
        iVar5 = iVar5 + -1;
      } while (1 < iVar5);
    }
    bVar1 = *pbVar18;
    uVar13 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar13 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar13 = uVar13 & 0x7f;
      }
      else {
        uVar15 = uVar13 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar15 = 0x3f;
        }
        uVar13 = uVar15 & uVar13;
        if (((((pbVar18[1] & 0xffffffc0) == 0x80) &&
             (uVar13 = pbVar18[1] & 0x3f | uVar13 << 6, (bVar1 & 0x20) != 0)) &&
            ((pbVar18[2] & 0xffffffc0) == 0x80)) &&
           ((uVar13 = pbVar18[2] & 0x3f | uVar13 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
            ((pbVar18[3] & 0xffffffc0) == 0x80)))) {
          uVar13 = uVar13 << 6 | pbVar18[3] & 0x3f;
        }
      }
    }
LAB_0026b080:
                    /* try { // try from 0026b080 to 0026b08a has its CatchHandler @ 0026b1bd */
    uVar22 = StringCreationHelper::write((StringCreationHelper *)&local_58,uVar13);
    if (uVar13 == 0) {
      local_68 = local_58;
      goto LAB_0026b09e;
    }
  } while( true );
}


