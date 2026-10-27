// Function : getText
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270740
// Prototype: undefined8 * getText(undefined8 * param_1, long param_2, undefined8 param_3)
// Body     : 00270740 - 002709ee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getText(juce::Range<int>)
   const */

undefined8 * __cdecl
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getText
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  size_t sVar9;
  undefined4 *puVar10;
  byte bVar11;
  sbyte sVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  int *piVar18;
  undefined8 local_38;
  char *local_30;
  
  plVar4 = *(long **)(param_2 + 8);
  uVar15 = *(uint *)((long)plVar4 + 0x2a4);
  local_38 = param_3;
  if (uVar15 == 0) {
    (**(code **)(*plVar4 + 0x30))(param_1,plVar4,&local_38);
    return param_1;
  }
  piVar6 = operator_new__((ulong)(0xffff < uVar15) * 4 + 0x1b);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  *(ulong *)(piVar6 + 2) = (ulong)(0xffff < uVar15) * 4 + 4;
  if (uVar15 < 0x80) {
    piVar7 = (int *)((long)piVar6 + 0x11);
    *(char *)(piVar6 + 4) = (char)uVar15;
  }
  else {
    uVar13 = 1;
    if (0x7ff < uVar15) {
      uVar13 = 0xffff < uVar15 | 2;
    }
    bVar11 = (byte)uVar13;
    sVar12 = bVar11 * '\x06';
    *(byte *)(piVar6 + 4) = (byte)(uVar15 >> sVar12) | (byte)(0xff << (bVar11 ^ 7));
    *(byte *)((long)piVar6 + 0x11) =
         (byte)(uVar15 >> ((bVar11 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
    if (uVar15 < 0x800) {
      piVar7 = (int *)((long)piVar6 + 0x12);
    }
    else {
      *(byte *)((long)piVar6 + 0x12) = (byte)(uVar15 >> (sVar12 - 0xcU & 0x1f)) & 0x3f | 0x80;
      if (uVar13 - 1 < 2) {
        piVar7 = (int *)((long)piVar6 + 0x13);
      }
      else {
        piVar7 = piVar6 + 5;
        *(byte *)((long)piVar6 + 0x13) = (byte)(uVar15 >> (sVar12 - 0x12U & 0x1f)) & 0x3f | 0x80;
      }
    }
  }
  *(undefined1 *)piVar7 = 0;
                    /* try { // try from 00270866 to 002708f9 has its CatchHandler @ 002709ef */
  ParagraphsModel::getText(&local_30,*(long *)(*(long *)(param_2 + 8) + 0x330) + 0x60);
  piVar7 = piVar6 + 4;
  uVar15 = 0;
  pcVar8 = local_30;
  do {
    cVar3 = *pcVar8;
    if (cVar3 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar8 + 1);
        pcVar8 = pcVar8 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar8 = pcVar8 + 1;
      if (cVar3 == '\0') {
        piVar18 = (int *)(local_30 + -0x10);
        if (piVar18 != &emptyString) {
          LOCK();
          iVar2 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar18);
          }
        }
        if ((int)uVar15 < 1) {
          pcVar8 = "";
        }
        else {
          sVar9 = strlen((char *)piVar7);
          uVar16 = uVar15 * sVar9 + 4 & 0xfffffffffffffffc;
          puVar10 = operator_new__(uVar16 + 0x17);
          LOCK();
          *puVar10 = 0;
          UNLOCK();
          *(ulong *)(puVar10 + 2) = uVar16;
          pcVar8 = (char *)(puVar10 + 4);
          pcVar14 = pcVar8;
          uVar13 = uVar15;
          if ((uVar15 & 1) != 0) {
            uVar13 = uVar15 - 1;
            iVar2 = *piVar7;
            *pcVar8 = (char)iVar2;
            if ((char)iVar2 != '\0') {
              pcVar17 = (char *)((long)piVar6 + 0x11);
              do {
                cVar3 = *pcVar17;
                pcVar14[1] = cVar3;
                pcVar14 = pcVar14 + 1;
                pcVar17 = pcVar17 + 1;
              } while (cVar3 != '\0');
            }
          }
          if (uVar15 != 1) {
            do {
              iVar2 = *piVar7;
              *pcVar14 = (char)iVar2;
              if ((char)iVar2 != '\0') {
                pcVar17 = (char *)((long)piVar6 + 0x11);
                do {
                  cVar3 = *pcVar17;
                  pcVar14[1] = cVar3;
                  pcVar14 = pcVar14 + 1;
                  pcVar17 = pcVar17 + 1;
                } while (cVar3 != '\0');
              }
              iVar2 = *piVar7;
              *pcVar14 = (char)iVar2;
              if ((char)iVar2 != '\0') {
                pcVar17 = (char *)((long)piVar6 + 0x11);
                do {
                  cVar3 = *pcVar17;
                  pcVar14[1] = cVar3;
                  pcVar14 = pcVar14 + 1;
                  pcVar17 = pcVar17 + 1;
                } while (cVar3 != '\0');
              }
              bVar5 = 2 < (int)uVar13;
              uVar13 = uVar13 - 2;
            } while (bVar5);
          }
        }
        *param_1 = pcVar8;
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar6);
        }
        return param_1;
      }
    }
    uVar15 = uVar15 + 1;
  } while( true );
}


