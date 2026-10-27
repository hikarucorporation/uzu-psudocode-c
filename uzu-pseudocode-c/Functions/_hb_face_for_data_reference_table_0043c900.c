// Function : _hb_face_for_data_reference_table
// Namespace: 
// Entry    : 0043c900
// Prototype: int * _hb_face_for_data_reference_table(undefined8 param_1, uint param_2, undefined8 * param_3)
// Body     : 0043c900 - 0043ca49


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_face_for_data_reference_table(hb_face_t*, unsigned int, void*) */

int * __cdecl _hb_face_for_data_reference_table(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  OpenTypeFontFile *pOVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  OpenTypeFontFile *pOVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  OpenTypeFontFile *pOVar12;
  uint uVar13;
  int local_1c;
  
  piVar4 = (int *)*param_3;
  if (param_2 == 0) {
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar4 == 0) {
      return piVar4;
    }
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    return piVar4;
  }
  if ((uint)piVar4[6] < 4) {
    pOVar3 = (OpenTypeFontFile *)&_hb_NullPool;
  }
  else {
    pOVar3 = *(OpenTypeFontFile **)(piVar4 + 4);
  }
  pOVar3 = OT::OpenTypeFontFile::get_face(pOVar3,(uint)*(ushort *)(param_3 + 1),&local_1c);
  uVar13 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  uVar1 = *(ushort *)(pOVar3 + 4);
  uVar5 = uVar1 << 8 | uVar1 >> 8;
  pOVar12 = (OpenTypeFontFile *)&_hb_NullPool;
  if (uVar5 < 0x10) {
    if (uVar1 != 0) {
      pOVar7 = pOVar3 + 0xc;
      uVar11 = 0;
      do {
        uVar2 = *(uint *)pOVar7;
        if ((param_2 <=
             (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)) &&
           (uVar2 == uVar13)) goto LAB_0043ca09;
        uVar11 = uVar11 + 1;
        pOVar7 = pOVar7 + 0x10;
      } while (uVar5 != uVar11);
    }
  }
  else if (uVar1 != 0) {
    iVar6 = uVar5 - 1;
    iVar9 = 0;
    do {
      while( true ) {
        uVar10 = (uint)(iVar6 + iVar9) >> 1;
        uVar11 = (ulong)uVar10;
        uVar2 = *(uint *)(pOVar3 + uVar11 * 0x10 + 0xc);
        uVar8 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        if ((uVar8 < param_2) || (uVar2 == uVar13)) break;
        iVar6 = uVar10 - 1;
        if (iVar6 < iVar9) goto LAB_0043ca1c;
      }
      if ((param_2 <= uVar8) && (uVar2 == uVar13)) goto LAB_0043ca09;
      iVar9 = uVar10 + 1;
    } while (iVar9 <= iVar6);
  }
LAB_0043ca1c:
  uVar13 = *(uint *)(pOVar12 + 8);
  uVar2 = *(uint *)(pOVar12 + 0xc);
  piVar4 = hb_blob_create_sub_blob
                     ((int *)*param_3,
                      (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18) + local_1c,
                      uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18);
  return piVar4;
LAB_0043ca09:
  if ((uint)uVar11 < (uint)uVar5) {
    pOVar12 = pOVar3 + (uVar11 & 0xffffffff) * 0x10 + 0xc;
  }
  else {
    pOVar12 = (OpenTypeFontFile *)&_hb_NullPool;
  }
  goto LAB_0043ca1c;
}


