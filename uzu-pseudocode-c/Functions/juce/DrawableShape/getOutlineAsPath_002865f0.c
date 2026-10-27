// Function : getOutlineAsPath
// Namespace: juce:DrawableShape
// Entry    : 002865f0
// Prototype: Path * getOutlineAsPath(Path * param_1, long param_2)
// Body     : 002865f0 - 00286731


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableShape::getOutlineAsPath() const */

Path * __cdecl juce::DrawableShape::getOutlineAsPath(Path *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  void *__src;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  void *__dest;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  if ((0.0 < *(float *)(param_2 + 0x160)) && (*(char *)(param_2 + 0x203) != '\0')) {
    lVar3 = *(long *)(param_2 + 0x208);
    if (lVar3 == 0) {
LAB_00286669:
      puVar8 = (undefined8 *)(param_2 + 0x1a8);
      goto LAB_00286679;
    }
    if ((long)*(int *)(lVar3 + 0x24) != 0) {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(*(long *)(lVar3 + 0x18) + 0xb + lVar6);
        if (cVar1 != '\0') break;
        bVar9 = (long)*(int *)(lVar3 + 0x24) * 0x10 + -0x10 != lVar6;
        lVar6 = lVar6 + 0x10;
      } while (bVar9);
      if (cVar1 != '\0') goto LAB_00286669;
    }
  }
  puVar8 = (undefined8 *)(param_2 + 0x180);
LAB_00286679:
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar2 = *(uint *)((long)puVar8 + 0xc);
  if (0 < (int)uVar2) {
    __src = (void *)*puVar8;
    uVar7 = uVar2 + (uVar2 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar7 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar7 << 2);
      *(void **)param_1 = __dest;
    }
    *(uint *)(param_1 + 8) = uVar7;
    memcpy(__dest,__src,(ulong)uVar2 * 4);
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  uVar5 = puVar8[3];
  *(undefined8 *)(param_1 + 0x10) = puVar8[2];
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  param_1[0x20] = *(Path *)(puVar8 + 4);
  pauVar4 = *(undefined1 (**) [16])(param_2 + 0x50);
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    local_48 = ZEXT416(DAT_005d9038);
    local_38 = 0x3f800000;
  }
  else {
    local_38 = *(undefined8 *)pauVar4[1];
    local_48 = *pauVar4;
  }
  Path::applyTransform(param_1,(float *)local_48);
  return param_1;
}


