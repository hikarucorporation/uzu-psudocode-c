// Function : getText
// Namespace: juce:TextEditor:ParagraphsModel
// Entry    : 0023c2c0
// Prototype: undefined getText(undefined8 * param_1, long param_2)
// Body     : 0023c2c0 - 0023c596


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::ParagraphsModel::getText() const */

void __cdecl juce::TextEditor::ParagraphsModel::getText(undefined8 *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  char *__src;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *__dest;
  long lVar14;
  int *piVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined **local_70;
  long local_68;
  MemoryOutputStream *local_60;
  void *local_58;
  char *local_48;
  ulong local_38;
  
  lVar12 = 0;
  for (plVar6 = *(long **)(param_2 + 0x20); plVar6 != *(long **)(param_2 + 0x28);
      plVar6 = plVar6 + 1) {
    lVar12 = lVar12 + *(long *)(*plVar6 + 0x18);
  }
  MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_70,0x100);
                    /* try { // try from 0023c314 to 0023c31b has its CatchHandler @ 0023c5b6 */
  MemoryOutputStream::preallocate(local_60,lVar12);
  puVar17 = *(undefined8 **)(param_2 + 0x20);
  puVar3 = *(undefined8 **)(param_2 + 0x28);
  if (puVar17 != puVar3) {
    do {
      lVar12 = 0;
      pbVar7 = *(byte **)*puVar17;
LAB_0023c353:
      pbVar8 = pbVar7 + 1;
      bVar2 = *pbVar7;
      uVar10 = (uint)bVar2;
      if (-1 < (char)bVar2) goto joined_r0x0023c363;
      if ((bVar2 & 0x40) == 0) {
        uVar10 = uVar10 & 0x7f;
        if ((bVar2 & 0x7f) == 0) goto LAB_0023c490;
        goto LAB_0023c444;
      }
      if ((bVar2 & 0x20) == 0) {
        uVar11 = 0x3f;
        lVar14 = 0;
        bVar4 = false;
        bVar5 = false;
      }
      else {
        bVar4 = true;
        if ((bVar2 & 0x10) == 0) {
          uVar11 = 0x1f;
          lVar14 = 1;
          bVar5 = false;
        }
        else {
          uVar11 = 0xf;
          lVar14 = 2;
          bVar5 = true;
        }
      }
      uVar10 = uVar10 & uVar11;
      if ((pbVar7[1] & 0xc0) != 0x80) {
joined_r0x0023c363:
        if (uVar10 == 0) goto LAB_0023c490;
LAB_0023c444:
        lVar14 = 1;
        if ((0x7f < uVar10) && (lVar14 = 2, 0x7ff < uVar10)) {
          lVar14 = 4 - (ulong)(uVar10 < 0x10000);
        }
        lVar12 = lVar12 + lVar14;
        pbVar7 = pbVar8;
        goto LAB_0023c353;
      }
      pbVar16 = pbVar7 + lVar14 + 2;
      uVar10 = pbVar7[1] & 0x3f | uVar10 << 6;
      pbVar8 = pbVar16;
      if (!bVar4) goto joined_r0x0023c363;
      pbVar8 = pbVar7 + 2;
      if ((*pbVar8 & 0xc0) == 0x80) {
        uVar10 = *pbVar8 & 0x3f | uVar10 << 6;
        pbVar8 = pbVar16;
        if (bVar5) {
          uVar11 = (uint)pbVar7[3];
          pbVar8 = pbVar7 + 3;
          if ((uVar11 & 0xffffffc0) == 0x80) {
            uVar10 = uVar10 << 6 | uVar11 & 0x3f;
            pbVar8 = pbVar16;
          }
        }
        goto joined_r0x0023c363;
      }
      if (uVar10 != 0) goto LAB_0023c444;
LAB_0023c490:
                    /* try { // try from 0023c495 to 0023c49a has its CatchHandler @ 0023c5b8 */
      (*(code *)local_70[5])(&local_70,*(byte **)*puVar17,lVar12);
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar3);
  }
  __src = local_48;
  if (local_60 != (MemoryOutputStream *)0x0) {
    if (local_38 < *(ulong *)(local_60 + 8)) {
      *(undefined1 *)(*(long *)local_60 + local_38) = 0;
    }
    __src = *(char **)local_60;
  }
  __dest = (undefined4 *)&DAT_0061ac58;
  if ((__src != (char *)0x0) && (__dest = (undefined4 *)&DAT_0061ac58, *__src != '\0')) {
    uVar13 = local_38 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 0023c506 to 0023c50a has its CatchHandler @ 0023c5b6 */
    puVar9 = operator_new__(uVar13 + 0x17);
    LOCK();
    *puVar9 = 0;
    UNLOCK();
    *(ulong *)(puVar9 + 2) = uVar13;
    __dest = puVar9 + 4;
    memcpy(__dest,__src,local_38);
    *(undefined1 *)((long)puVar9 + local_38 + 0x10) = 0;
  }
  *param_1 = __dest;
  local_70 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0023c542 to 0023c54b has its CatchHandler @ 0023c597 */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_70);
  free(local_58);
  local_70 = &PTR__OutputStream_00713440;
  piVar15 = (int *)(local_68 + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    iVar1 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar15);
    }
  }
  return;
}


